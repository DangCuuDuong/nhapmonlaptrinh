#include<iostream>
using namespace std;
void nhap (int &n,int A[]);
void liet_ke_so_tan_suat(int A[],int n,int B[],int C[],int &nB);
bool kiem_tra(int A[],int n,int x);
int dem_so_tan_suat(int A[],int n,int x);
void xuat (int nB,int B[],int C[]);
int main ()
{
	int n,nB,A[100],B[100],C[100];
	nhap (n,A);
	liet_ke_so_tan_suat(A,n,B,C,nB);
	xuat (nB,B,C);
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
void liet_ke_so_tan_suat(int A[],int n,int B[],int C[],int &nB)
{
	nB=0;
	for (int i=1;i<=n;i++)
	{
		if (kiem_tra(B,n,A[i])==false)
		{
			nB++;
			B[nB]=A[i];
		}
	}
	for (int i=1;i<=nB;i++)
	{
		C[i]=dem_so_tan_suat(A,n,B[i]);
	}
}
bool kiem_tra(int A[],int n,int x)
{
	for (int i=1;i<=n;i++)
	{
		if(A[i]==x)
		{
			return true;
		}	
	}
	return false;
}
int dem_so_tan_suat(int A[],int n,int x)
{
	int dem=0;
	for (int i=1;i<=n;i++)
	{
		if (A[i]==x)
		{
			dem++;
		}
	}
	return dem;
}
void xuat (int nB,int B[],int C[])
{
	for (int i=1;i<=nB;i++)
	{
		cout<<B[i]<<" xuat hien "<<C[i]<<" lan "<<"\n";
	}
}
