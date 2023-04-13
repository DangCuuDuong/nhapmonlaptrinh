#include<iostream>
using namespace std;
void nhap (int &n,int A[]);
int so_le_dau_tien(int n,int A[]);
void xuat (int sole);
int main ()
{
	int n,A[100];
	nhap(n,A);
	int sole=so_le_dau_tien(n,A);
	xuat(sole);
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
int so_le_dau_tien(int n,int A[])
{
	int s,k;
	for (int i=1;i<=n;i++)
	{
		s=A[i];
		while (s>9)
		{
			s=s/10;
		}
		k=s%10;
		if (k%2!=0)
		{
			return A[i];
		}
	}
	return 0;
}
void xuat (int sole)
{
	cout<<sole;
}
