#include<iostream>
using namespace std;
void nhap (int &n,int A[],int B[]);
void ghep_xen_ke_hai_mang(int n,int A[],int B[],int C[]);
void xuat (int n,int C[]);
int main ()
{
	int n,A[100],B[100],C[100];
	nhap (n,A,B);
	ghep_xen_ke_hai_mang(n,A,B,C);
	xuat (n,C);
	return 0;
}
void nhap (int &n,int A[],int B[])
{
	cout<<"nhap n ";
	cin>>n;
	cout<<"nhap A[i]"<<"\n";
	for (int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
	cout<<"nhap B[i]"<<"\n";
	for (int i=1;i<=n;i++)
	{
		cin>>B[i];
	}
}
void ghep_xen_ke_hai_mang(int n,int A[],int B[],int C[])
{
	int dem;
	dem=1;
	for (int i=1;i<=n;i++)
	{
		C[dem]=A[i];
		dem=dem+2;	
	}
	dem=2;
	for (int i=1;i<=n;i++)
	{
		C[dem]=B[i];
		dem=dem+2;
	}
}
void xuat (int n,int C[])
{
	for (int i=1;i<=n*2;i++)
	{
		cout<<C[i]<<"\t";
	}
}

