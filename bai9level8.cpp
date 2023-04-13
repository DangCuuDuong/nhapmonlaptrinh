#include<iostream>
using namespace std;
void nhap (int &n,int A[]);
int so_NT_lon_nhat(int n,int A[]);
void xuat (int soNT);
int main ()
{
	int n,A[100];
	nhap(n,A);
	int soNT=so_NT_lon_nhat(n,A);
	xuat (soNT);
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
int so_NT_lon_nhat(int n,int A[])
{
	int c,B[100],j;
	int dem=0;
	for (int i=1;i<=n;i++)
	{
		c=0;
		for (j=1;j<=A[i];j++)
		{
			if (A[i]%j==0)
			{
				c++;
			}
		}
		if (c==2)
		{
			dem++;
			B[dem]=A[i];
		}
	}
	int max=B[1];
	for (int k=1;k<=dem;k++)
	{
		if (B[k]>max)
		max=B[k];
	}
	if (dem==0)
	{
		return 0;
	}
	else 
	{
		return max;
	}
}
void xuat (int soNT)
{
	cout<<soNT;
}
