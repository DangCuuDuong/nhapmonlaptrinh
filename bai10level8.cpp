#include<iostream>
using namespace std;
void nhap (int &n,int A[]);
int tim_so_HT(int n,int A[]);
void xuat (int soHT);
int main ()
{
	int n,A[100];
	nhap (n,A);
	int soHT=tim_so_HT(n,A);
	xuat (soHT);
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
int tim_so_HT(int n,int A[])
{
	int B[100],j;
	int dem=0;
	for (int i=1;i<=n;i++)
	{
		int s=0;
		for (j=1;j<A[i];j++)
		{
			if (A[i]%j==0)
			{
				s=s+j;
			}
		}
		if (s==A[i])
		{
			dem++;
			B[dem]=A[i];
		}
	}
	int min=B[1];
	for (int k=1;k<=dem;k++)
	{
		if (B[k]<min)
		{
			min=B[k];
		}	
	}
	if (dem==0)
	{
		return 0;
	}
	else
	{
		return min;
	}
}
void xuat (int soHT)
{
	cout<<soHT;
}
