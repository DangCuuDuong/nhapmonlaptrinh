#include<iostream>
using namespace std;
void nhap (int &nA,int A[],int &nB,int B[]);
int hoan_doi(int nA,int nB);
int tron_mang_xen_ke(int nA,int A[],int nB,int B[],int C[]);
void xuat (int nC,int C[]);
int main ()
{
	int nA,A[100],nB,B[100],C[100];
	nhap (nA,A,nB,B);
	int nC=tron_mang_xen_ke(nA,A,nB,B,C);
	xuat (nC,C);
	return 0;
}
void nhap (int &nA,int A[],int &nB,int B[])
{
	cout<<"nhap nA ";
	cin>>nA;
	cout<<"A[i]"<<"\n";
	for (int i=1;i<=nA;i++)
	{
		cin>>A[i];
	}
	cout<<"nhap nB ";
	cin>>nB;
	cout<<"B[i]"<<"\n";
	for (int i=1;i<=nB;i++)
	{
		cin>>B[i];
	}
}
int hoan_doi(int nA,int nB)
{
	if (nA>nB)
	{
		return 0;
	}
	else if (nB>nA)
	{
		return 1;
	}
	else 
	{
		return 2;
	}
}
int tron_mang_xen_ke(int nA,int A[],int nB,int B[],int C[])
{
	int H[100],U[100];
	int nH=0;int nU=0;
	if (hoan_doi(nA,nB)==0)
	{
		for (int i=1;i<=nA;i++)
		{
			H[i]=A[i];
		}
		for (int i=1;i<=nB;i++)
		{
			U[i]=B[i];
		}
		nH=nA;
		nU=nB;
	}
	else if (hoan_doi(nA,nB)==1)
	{
		for (int i=1;i<=nB;i++)
		{
			H[i]=B[i];
		}
		for (int i=1;i<=nA;i++)
		{
			U[i]=A[i];
		}
		nH=nB;
		nU=nA;
	}
	else 
	{
		for (int i=1;i<=nA;i++)
		{
			H[i]=A[i];
		}
		for (int i=1;i<=nB;i++)
		{
			U[i]=B[i];
		}
		nH=nA;
		nU=nB;
	}
	int dem1=1;
	for (int i=1;i<=nU;i++)
	{
		C[dem1]=U[i];
		dem1=dem1+2;	
	}
	int k=0;
	int dem2=0;
	for (int i=1;i<=nU;i++)
	{
		dem2=dem2+2;
		C[dem2]=H[i];
		k++;
	}
	for (int i=nU*2+1;i<=nU+nH;i++)
	{
		k++;
		C[i]=H[k];
	}
	int phantu=nU+nH;
	return phantu;
}
void xuat (int nC,int C[])
{
	for (int i=1;i<=nC;i++)
	{
		cout<<C[i]<<"\t";
	}
}
	
	

