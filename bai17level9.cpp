#include<iostream>
using namespace std;
void nhap(int &n,int A[]);
void dich_trai_xoay_vong(int n,int A[]);
void xuat (int n,int A[]);
int main ()
{
	int n,A[100];
	nhap (n,A);
	dich_trai_xoay_vong(n,A);
	xuat (n,A);
	return 0;
}
void nhap(int &n,int A[])
{
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
}
void dich_trai_xoay_vong(int n,int A[])
{
	int bientam=A[1];
	for (int i=1;i<=n;i++)
	{
		if (i==n)
		{
			A[i]=bientam;
		}
		else 
		{
			bientam=A[i];
			A[i]=A[i+1];
			A[i+1]=bientam;
		}
	}
}
void xuat (int n,int A[])
{
	for (int i=1;i<=n;i++)
	{
		cout<<A[i]<<"\t";
	}
}
