#include<iostream>
using namespace std;
void nhap (int &nA,int A[]);
int mang_chan(int nA,int A[],int B[]);
int mang_le(int nA,int A[],int C[]);
int mang_chua_so_khong(int nA,int A[],int D[]);
void sap_xep_mang(int nB,int nC,int nD,int A[],int B[],int C[],int D[]);
void xuat (int nA,int A[]);
int main ()
{
	int nA,A[100],B[100],C[100],D[100];
	nhap (nA,A);
	int nB=mang_chan(nA,A,B);
	int nC=mang_le(nA,A,C);
	int nD=mang_chua_so_khong(nA,A,D);
	sap_xep_mang(nB,nC,nD,A,B,C,D);
	xuat(nA,A);
	return 0;
}
void nhap (int &nA,int A[])
{
	cin>>nA;
	for (int i=1;i<=nA;i++)
	{
		cin>>A[i];
	}
}
int mang_chan(int nA,int A[],int B[])
{
	int dem=0;
	for (int i=1;i<=nA;i++)
	{
		if (A[i]%2==0 && A[i]>0)
		{
			dem++;
			B[dem]=A[i];
		}
	}
	return dem;
}
int mang_le(int nA,int A[],int C[])
{
	int dem=0;
	for (int i=1;i<=nA;i++)
	{
		if (A[i]%2!=0)
		{
			dem++;
			C[dem]=A[i];
		}
	}
	return dem;
}
int mang_chua_so_khong(int nA,int A[],int D[])
{
	int dem=0;
	for (int i=1;i<=nA;i++)
	{
		if (A[i]==0)
		{
			dem++;
			D[dem]=A[i];
		}
	}
	return dem;
}
void sap_xep_mang(int nB,int nC,int nD,int A[],int B[],int C[],int D[])
{
	for (int i=1;i<=nB;i++)
	{
		A[i]=B[i];
	}
	int dem=0;
	for (int i=nB+1;i<=nB+nD;i++)
	{
		dem++;
		A[i]=D[dem];
	}
	dem=0;
	for (int i=nB+nD+1;i<=nB+nC+nD;i++)
	{
		dem++;
		A[i]=C[dem];
	}
}
void xuat (int nA,int A[])
{
	for (int i=1;i<=nA;i++)
	{
		cout<<A[i]<<"\t";
	}
}


