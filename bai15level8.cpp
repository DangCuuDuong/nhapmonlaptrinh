#include<iostream>
using namespace std;
void nhap (int &n,float &x,float A[]);
float tim_so_am_cuoi_lon_hon_x(int n,float A[],float x);
void xuat (float kq);
int main ()
{
	int n;
	float x,A[100];
	nhap (n,x,A);
	float kq=tim_so_am_cuoi_lon_hon_x(n,A,x);
	xuat (kq);
	return 0;
}
void nhap (int &n,float &x,float A[])
{
	cin>>n;
	cin>>x;
	for (int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
}
float tim_so_am_cuoi_lon_hon_x(int n,float A[],float x)
{
	float B[100];
	float soam=0;int dem=0;
	for (int i=1;i<=n;i++)
	{
		if (A[i]<0)
		{
			dem++;
			B[dem]=A[i];
		}
	}
	for (int j=1;j<=dem;j++)
	{
		if (B[j]>x)
		{
			soam=B[j];
		}
	}
	return soam;
}
void xuat (float kq)
{
	cout<<kq;
}
