#include<iostream>
using namespace std;
void nhap (int &n,int &x,int A[]);
int chen_phan_tu(int &n,int x,int A[]);
void xuat (int n,int A[]);
int main ()
{
	int n,x,A[100];
	nhap (n,x,A);
	chen_phan_tu(n,x,A);
	xuat(n,A);
	return 0;
}
void nhap (int &n,int &x,int A[])
{
	cin>>n;
	cin>>x;
	for (int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
}
int chen_phan_tu(int &n,int x,int A[])
{
	int c=0;int dem=0;
	int B[100];
	for (int i=1;i<=n;i++)
	{	
		if (A[i]<x)
		{
			c++;
			B[c]=A[i];
		}
	}
	if (c==0)
	{
		n++;
		for (int i=n;i>=1;i--)
		{
			A[i]=A[i-1];
		}
		A[1]=x;
	}
	else 
	{
		int max=B[1];
		for (int i=1;i<=c;i++)
		{
			if (B[i]>max)
			{
				max=B[i];
			}
		}
		for (int i=1;i<=n;i++)
		{
			if (A[i]!=max)
			{
				dem++;
			}
			else 
			{
				dem++;
				break;
			}
		}
		n++;
		for (int i=n;i>dem;i--)
		{
			A[i]=A[i-1];
		}
		A[dem+1]=x;
	}
}
void xuat (int n,int A[])
{
	for(int i=1;i<=n;i++)
	{
		cout<<A[i]<<"\t";
	}
}
