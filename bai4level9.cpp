#include<iostream>
#include<math.h>
using namespace std;
void nhap (int &n,int A[]);
int liet_ke_gia_tri_thoa_man(int n,int A[],int B[]);
void xuat (int soluong,int B[]);
int main ()
{
	int n,A[100],B[100];
	nhap (n,A);
	int soluong=liet_ke_gia_tri_thoa_man(n,A,B);
	xuat (soluong,B);
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
int liet_ke_gia_tri_thoa_man(int n,int A[],int B[])
{
	int dem=0;
	for (int i=2;i<=n;i++)
	{
		if (A[i]>abs(A[i-1]))
		{
			dem++;
			B[dem]=A[i];
		}
	}
	return dem;
}
void xuat (int soluong,int B[])
{
	for (int i=1;i<=soluong;i++)
	{
		cout<<B[i]<<"\t";
	}
}
