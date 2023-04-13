#include<iostream>
using namespace std;
void nhap (int &n,int A[]);
int tim_so_am_lon_nhat(int n,int A[],int B[]);
void xuat (int soam);
int main ()
{
	int n,A[100],B[100];
	nhap (n,A);
	int soam=tim_so_am_lon_nhat(n,A,B);
	xuat(soam);
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
int tim_so_am_lon_nhat(int n,int A[],int B[])
{
	int dem=0;
	for (int i=1;i<=n;i++)
	{
		if (A[i]<0)
		{
			dem++;
			B[dem]=A[i];
		}
	}
	int max =B[1];
	for (int j=1;j<=dem;j++)
	{
		if (B[j]>max)
		{
			max=B[j];
		}
	}
	return max;
}
void xuat (int soam)
{
	cout<<soam;
}
