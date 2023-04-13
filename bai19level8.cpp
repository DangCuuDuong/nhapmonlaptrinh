#include<iostream>
using namespace std;
void nhap (int &nA,int &nB,int A[],int B[]);
void tron_hai_mang(int nA,int nB,int &n,int A[],int B[],int D[]);
void sap_xep_tang_dan (int n,int C[],int D[]);
void xuat (int n,int C[]);
int main ()
{
	int nA,nB,n,A[100],B[100],C[100],D[100];
	nhap(nA,nB,A,B);
	tron_hai_mang (nA,nB,n,A,B,D);
	sap_xep_tang_dan(n,C,D);
	xuat(n,C);
	return 0;
}
void nhap (int &nA,int &nB,int A[],int B[])
{
	cout<<"nhap nA ";
	cin>>nA;
	cout<<"nhap A[i]"<<"\n";
	for (int i=1;i<=nA;i++)
	{
		cin>>A[i];
	}
	cout<<"nhap nB ";
	cin>>nB;
	cout<<"nhap B[i]"<<"\n";
	for (int i=1;i<=nB;i++)
	{
		cin>>B[i];
	}
}
void tron_hai_mang(int nA,int nB,int &n,int A[],int B[],int D[])
{
	n=nA+nB;
	int dem;
	dem=1;
	for (int i=1;i<=nA;i++)
	{
		D[i]=A[dem];
		dem++;
	}
	dem=1;
	for (int i=nA+1;i<=n;i++)
	{
		D[i]=B[dem];
		dem++;
	}
}
void sap_xep_tang_dan (int n,int C[],int D[])
{
	int xet,dem;
	for (int i=1;i<=n;i++)
	{
		dem=1;
		xet=D[i];
		for (int k=1;k<=n;k++)
		{
			if (xet>D[k])
			{
				dem++;	
			}
		}
		C[dem]=xet;
	}
}
void xuat (int n,int C[])
{
	for (int i=1;i<=n;i++)
	{
		cout<<C[i]<<"\t";
	}
}
