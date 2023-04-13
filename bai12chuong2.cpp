#include <bits/stdc++.h>
using namespace std;
void matran(int n, float A[100][100]);
void tim(int X[],int Y[],int i, int j,float A[100][100]);
int main()
{
	int n;
	float A[100][100];
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
		{
			cin >> A[i][j];
			if(A[i][j] == 1)
				A[i][j] = -1;
		}
	matran(n,A);
	
}
void matran(int n,float A[100][100])
{
	int X[8] = {-1,-1,-1,0,1,1,1,0};
	int Y[8] = {-1,0,1,1,1,0,-1,-1};
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			if(A[i][j] == 0)
				tim(X,Y,i,j,A);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
		
}
void tim(int X[],int Y[],int i, int j,float A[100][100])
{
	for(int k = 0; k < 8; k++)
				if(A[i+X[k]][j+Y[k]] == -1)
					A[i][j]++;
}
