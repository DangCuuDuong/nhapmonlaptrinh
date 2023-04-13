#include <bits/stdc++.h>
using namespace std;


void chuyendoi(int m, int n, int A[], int B[][100]);
void xuat(int kq);

int main()
{
    int A[100], B[100][100];
    int m, n;

	cin >> n; 
	cin>> m;
    for (int i = 0; i < m*n; i++)
        cin >> A[i];
    chuyendoi(m, n, A, B);
    return 0;
}

void chuyendoi(int m, int n, int A[], int B[][100])
{
    int vT = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[i][j] = A[vT];
            xuat(B[i][j]);
            vT++;
        }
        if (i < n - 1)
            cout << "\n";
    }
}
void xuat(int kq)
{
    cout << kq << " ";
}
