#include<iostream>
#include<math.h>
using namespace std;
void nhap (int &n,int A[]);
bool kiem_tra_so_CP(int n,int x);
int tim_tat_ca_so_CP_trong_A (int n,int A[],int B[]);
int tim_vi_tri_cua_so_CP_trong_A(int A[],int n,int x);
void xoa_phan_tu_la_so_CP(int &n,int A[],int B[],int C[]);
void xuat (int n,int A[]);
int main ()
{
	int n,A[100],B[100],C[100];
	nhap (n,A);
	tim_tat_ca_so_CP_trong_A(n,A,B);
	xoa_phan_tu_la_so_CP(n,A,B,C);
	xuat (n,A);
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
bool kiem_tra_so_CP(int n,int x)
{
	for (int i=1;i<=x;i++)
	{
		if (i*i==x)
		{
			return true;
		}
	}
	return false;
}
int tim_tat_ca_so_CP_trong_A(int n,int A[],int B[])
{
	int phantu=0;
	for (int i=1;i<=n;i++)
	{
		if (kiem_tra_so_CP(n,A[i])==true)
		{
			phantu++;
			B[phantu]=A[i];
		}
	}
	return phantu;
}
int tim_vi_tri_cua_so_CP_trong_A(int A[],int n,int x)
{
	int vitri=0;
	for (int i=1;i<=n;i++)
	{
		if (A[i]!=x)
		{
			vitri++;
		}
		else 
		{
			vitri++;
			break;
		}
	}
	return vitri;
}
void xoa_phan_tu_la_so_CP(int &n,int A[],int B[],int C[])
{
	int solan=tim_tat_ca_so_CP_trong_A(n,A,B);
	for (int i=1;i<=solan;i++)
	{
		C[i]=(tim_vi_tri_cua_so_CP_trong_A(A,n,B[i]));
	}
	for (int i=1;i<=solan;i++)
	{
		int k=C[i]-i+1;
		for (int j=k;j<n;j++)
		{
			A[j]=A[j+1];
		}
		n--;
	}
}
void xuat (int n,int A[])
{
	for (int i=1;i<=n;i++)
	{
		cout<<A[i]<<"\t";
	}
}

