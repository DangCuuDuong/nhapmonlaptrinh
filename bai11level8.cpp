#include<iostream>
using namespace std;
void nhap (int &n,int A[]);
int tim_so_chan_nho_nhat(int n,int A[]);
void xuat (int sochan);
int main ()
{
	int n,A[100];
	nhap (n,A);
	int sochan=tim_so_chan_nho_nhat(n,A);
	xuat(sochan);
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
int tim_so_chan_nho_nhat(int n,int A[])
{
	int dem=0;
	int B[100];
	for (int i=1;i<=n;i++)
	{
		if (A[i]%2==0)
		{
			dem++;
			B[dem]=A[i];
		}
	}
	int min=B[1];
	for (int j=1;j<=dem;j++)
	{
		if (B[j]<min)
		{
			min=B[j];
		}
	}
	if (dem==0)
	{
		return -1;
	}
	else 
	{
		return min;
	}
}
void xuat (int sochan)
{
	cout<<sochan;
}
