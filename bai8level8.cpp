#include<iostream>
using namespace std;
void nhap (int &n,float A[]);
float tim_so_am_lon_nhat(int n,float A[],float B[]);
void xuat (float soam);
int main ()
{
	int n;
	float A[100],B[100];
	nhap (n,A);
	float soam=tim_so_am_lon_nhat(n,A,B);
	xuat(soam);
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
float tim_so_am_lon_nhat(int n,float A[],float B[])
{
	int dem=0;
	for (int i=1;i<=n;i++)
	{
		if (A[i]<0)
		{
			dem++;
			B[dem]=A[i];
		}
	}
	float max =B[1];
	for (int j=1;j<=dem;j++)
	{
		if (B[j]>max)
		{
			max=B[j];
		}
	}
	if (dem==0)
	{
		return 0;
	}
	else
	{
		return max;
	}
}
void xuat (float soam)
{
	cout<<soam;
}
