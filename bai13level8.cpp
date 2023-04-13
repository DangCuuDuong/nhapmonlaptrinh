#include<iostream>
using namespace std;
void nhap (int &n,int A[]);
int tim_uoc_chung_lon_nhat(int n,int A[]);
void xuat (int ucln);
int main ()
{
	int n,A[100];
	nhap (n,A);
	int ucln=tim_uoc_chung_lon_nhat(n,A);
	xuat(ucln);
	return 0;
}
void nhap (int &n,int A[])
{
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
}
int tim_uoc_chung_lon_nhat(int n,int A[])
{
	int dem=0;int B[100],u;
	int min=A[1];
	for (int i=1;i<=n;i++)
	{
		if (A[i]<min)
		{
			min=A[i];
		}
	}
	for (int j=1;j<=min;j++)
	{
		if (min%j==0)
		{
			dem++;
			B[dem]=j;
		}
	}
	for (int j=1;j<=dem;j++)
	{
		for (int i=1;i<n;i++)
		{
			if (A[i]%B[j]==0 && A[i+1]%B[j]==0)
			{
				u=B[j];
			}
		}
	}
	return u;
}
void xuat (int ucln)
{
	cout<<ucln;
}
