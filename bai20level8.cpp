#include<iostream>
using namespace std;
void nhap (int &nA,int &nB,int &tt,int A[],int B[]);
void tron_mang(int nA,int nB,int &n,int A[],int B[],int D[]);
void chon_cach_tron_mang(int n,int tt,int C[],int D[]);
void xuat (int n,int C[]);
int main ()
{
	int tt,n,nA,nB,A[100],B[100],C[100],D[100];
	nhap (nA,nB,tt,A,B);
	tron_mang(nA,nB,n,A,B,D);
	chon_cach_tron_mang(n,tt,C,D);
	xuat (n,C);
	return 0;
}
void nhap (int &nA,int &nB,int &tt,int A[],int B[])
{
	cout<<"nhap thao tac thuc hien 1 hoac 2: ";
	cin>>tt;
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
void tron_mang(int nA,int nB,int &n,int A[],int B[],int D[])
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
void tron_mang_tang_dan(int n,int tt,int C[],int D[])
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
void tron_mang_giam_dan(int n,int tt,int C[],int D[])
{
	int xet,dem;
	for (int i=1;i<=n;i++)
	{
		dem=1;
		xet=D[i];
		for (int k=1;k<=n;k++)
		{
			if (xet<D[k])
			{
				dem++;	
			}
		}
		C[dem]=xet;
	}
}	
void chon_cach_tron_mang(int n,int tt,int C[],int D[])
{
	if (tt==1)
	{
		cout<<"tron mang tang dan"<<"\n";
		tron_mang_tang_dan(n,tt,C,D);
	}
	if (tt==2)
	{
		cout<<"tron mang giam dan"<<"\n";
		tron_mang_giam_dan(n,tt,C,D);	
	}
}
void xuat (int n,int C[])
{
	for (int i=1;i<=n;i++)
	{
		cout<<C[i]<<"\t";
	}
}
	

