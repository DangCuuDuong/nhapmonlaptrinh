#include<iostream>
using namespace std;
int linhcanh(int a[], int n, int x);
int main()
{
	int A[1000];
	int  n;
	int x,i;
	cin >> n;
	cin >> x;
	for (int y = 0; y< n; y++)
	{		
		cin>>A[y];
	}
	int kq=linhcanh( A, n, x );
	cout<<kq;
	return 0;
	
	
}
int linhcanh(int a[], int n, int x)
{
	a[n]=x ; 
	int i=0;
	while (a[i]!=x) 
		i++;
	if (i<n) 
		return i;
	else
		return -1;
}
