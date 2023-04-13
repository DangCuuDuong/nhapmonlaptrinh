#include<iostream>
using namespace std;
void nhap (int &n,float A[]);
int tim_so_trai_dau(int n,float A[],float B[]);
void xuat (int soluong,float B[]);
int main ()
{
	int n;
	float A[100],B[100];
	nhap (n,A);
	int soluong=tim_so_trai_dau(n,A,B);
	xuat (soluong,B);
	return 0;
}
void nhap (int &n,float A[])
{
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
}
int tim_so_trai_dau(int n,float A[],float B[])
{
	int dem=0;
	for (int i=2;i<=n;i++)
	{
		if ((A[i]>0 && A[i+1]<0) || (A[i]<0 && A[i+1]>0) || ((A[i]>0) && (A[i-1]<0)) || ((A[i]<0) && (A[i-1]>0)))
		{
			dem++;
			B[dem]=A[i];
			B[dem+1]=A[i];
		}
	}
	return dem;
}
void xuat (int soluong,float B[])
{
	for (int i=1;i<=soluong;i++)
	{
		cout<<B[i]<<"\t";
	}
}
