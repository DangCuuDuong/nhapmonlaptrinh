#include<iostream>
using namespace std;
void nhap (int &n,int A[]);
int tim_phan_tu_mang_B(int n,int A[],int B[]);
int tim_phan_tu_mang_C(int n,int A[],int C[]);
void xuat (int nB,int nC,int B[],int C[]);
int main ()
{
	int n,A[100],B[100],C[100];
	nhap (n,A);
	int nB=tim_phan_tu_mang_B(n,A,B);
	int nC=tim_phan_tu_mang_C(n,A,C);
	xuat (nB,nC,B,C);
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
int  tim_phan_tu_mang_B (int n,int A[],int B[])
{
	int dem=0;
	for (int i=1;i<=n;i++)
	{
		if (A[i]>=0)
		{
			dem++;
			B[dem]=A[i];
		}
	}
	return dem;
}
int tim_phan_tu_mang_C(int n,int A[],int C[])
{
	int dem=0;
	for (int i=1;i<=n;i++)
	{
		if (A[i]<0)
		{
			dem++;
			C[dem]=A[i];
		}
	}
	return dem;
}
void xuat (int nB,int nC,int B[],int C[])
{
	cout<<"B[i]= "<<"\n";
	for (int i=1;i<=nB;i++)
	{
		cout<<B[i]<<"\t";
	}
	cout<<"\n";
	cout<<"C[i]= "<<"\n";
	for (int i=1;i<=nC;i++)
	{
		cout<<C[i]<<"\t";
	}
}
