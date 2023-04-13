#include<iostream>
using namespace std;
void nhap (int &nA,int &nB,int A[],int B[]);
int tim_phan_tu_chi_co_trong_A(int nA,int nB,int A[],int B[],int C[]);
int tim_phan_tu_chi_co_trong_B(int nA,int nB,int A[],int B[],int C[],int soptA);
void xuat (int soptB,int C[]);
int main ()
{
	int nA,nB,A[100],B[100],C[100];
	nhap (nA,nB,A,B);
	int soptA=tim_phan_tu_chi_co_trong_A(nA,nB,A,B,C);
	int soptB=tim_phan_tu_chi_co_trong_B(nA,nB,A,B,C,soptA);
	xuat(soptB,C);
	return 0;
}
void nhap (int &nA,int &nB,int A[],int B[])
{
	cout<<"nhap nA ";
	cin>>nA;
	cout<<"mang A[i]: "<<"\n";
	for (int i=1;i<=nA;i++)
	{
		cin>>A[i];
	}
	cout<<"nhap nB ";
	cin>>nB;
	cout<<"mang B[i]: "<<"\n";
	for (int i=1;i<=nB;i++)
	{
		cin>>B[i];
	}
}
int tim_phan_tu_chi_co_trong_A(int nA,int nB,int A[],int B[],int C[])
{
	int k=0;
	for (int i=1;i<=nA;i++)
	{
		int dem=0;
		int xet=A[i];
		for (int j=1;j<=nB;j++)
		{
			if (xet!=B[j])
			{
				dem++;
			}
		}
		if (dem==nB)
		{
			k++;
			C[k]=A[i];
		}	
	}
	return k;
}
int tim_phan_tu_chi_co_trong_B(int nA,int nB,int A[],int B[],int C[],int soptA)
{
	int k=soptA;
	for (int i=1;i<=nB;i++)
	{
		int xet=B[i];
		int dem=0;
		for (int j=1;j<=nA;j++)
		{
			if (xet!=A[j])
			{
				dem++;
			}
		}
		if (dem==nA)
		{
			k++;
			C[k]=B[i];
		}
	}
	return k;
}
void xuat (int soptB,int C[])
{
	for (int i=1;i<=soptB;i++)
	{
		cout<<C[i]<<"\t";
	}
}
