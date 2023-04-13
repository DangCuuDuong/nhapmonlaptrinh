#include<iostream>
using namespace std;
void nhap (int &n,int A[]);
int kiem_tra_tinh_chan_le (int n,int A[]);
void xuat (int kt);
int main ()
{
	int n,A[100];
	nhap (n,A);
	int kt=kiem_tra_tinh_chan_le(n,A);
	xuat (kt);
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
int kiem_tra_tinh_chan_le (int n,int A[])
{
	int i;
	for (i=1;i<n;i++)
	{
		int s=0;
		s=A[i]+A[i+1];
		if (s%2==0)
		{
			break;
		}
	}
	if (i<n)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}
void xuat (int kt)
{
	if (kt==1)
	{
		cout<<"ham co tinh chat chan le ";
	}
	else 
	{
		cout<<"ham khong co tinh chat chan le";
	}
}
