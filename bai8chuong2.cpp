#include <bits/stdc++.h>
using namespace std;
void xuat(int a, int b);
bool check(int A[][100], int i, int j);

int main()
{
	int m, n;
	int A[100][100];
	cin >> m >> n;
	for (int i = 1; i < m + 1; i++)
		for (int j = 1; j < n + 1; j++)
			cin >> A[i][j];
	for (int j = 0; j <= n + 1; j++)
		A[0][j] = A[m+1][j] = -100001;
	for (int i = 0; i <= m + 1; i++)
		A[i][0] = A[i][n+1] = -100001;
	
	
	int min = 100001;
	int vitrihang,vitricot ;
	for (int i = 1; i < m + 1; i++)
		for (int j = 1; j < n + 1; j++)
		{
			if (check(A, i, j))
				if (min > A[i][j])
				{
					min = A[i][j];
					vitrihang = i;
					vitricot = j;
				}	
		}
	if (min == 100001)
		cout << -1;
	else
		xuat(vitrihang, vitricot);
	return 0;
}
bool check(int A[][100], int i, int j)
{
	int X[4] = {0, 0, 1, -1};
	int Y[4] = {-1, 1, 0, 0};
	for (int k = 0; k < 4; k++)
		if (A[i][j] <= A[i + X[k]][j+ Y[k]])
			return 0;
	return 1;
}

void xuat(int a, int b)
{
	cout << a - 1 << " " << b - 1;	
}
