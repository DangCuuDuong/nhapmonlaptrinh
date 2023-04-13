#include<iostream>
using namespace std;
void nhap (int &n,int &m,float A[],float  B[]);
int tim_phan_tu_chi_co_trong_A(int n,int m,float A[],float B[],float C[]);
void xuat (int nC,float C[]);
int main ()
{
	int n,m;
	float A[100],B[100],C[100];
	nhap(n,m,A,B);
	int nC=tim_phan_tu_chi_co_trong_A(n,m,A,B,C);
	xuat(nC,C);
	return 0;
}
void nhap (int &n,int &m,float A[],float B[])
{
	cout<<"nhap n ";
	cin>>n;
	cout<<"nhap A[i]"<<"\n";
	for (int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
	cout<<"nhap m ";
	cin>>m;
	cout<<"nhap B[i]"<<"\n";
	for (int i=1;i<=m;i++)
	{
		cin>>B[i];
	}
}
int tim_phan_tu_chi_co_trong_A(int n,int m,float A[],float B[],float C[])
{
	float xet=0;int k=0;
	for (int i=1;i<=n;i++)
	{
		int dem=0;
		xet=A[i];
		for (int j=1;j<=m;j++)
		{
			if (xet!=B[j])
			{
				dem++;
			}
		}
		if (dem==m)
		{
			k++;
			C[k]=A[i];
		}
	}
	return k;
}
void xuat (int nC,float C[])
{
	cout<<"C[i]: ";
	for (int i=1;i<=nC;i++)
	{
		cout<<C[i]<<"\t";
	}
}

