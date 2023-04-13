#include<iostream>
using namespace std;
void nhap (int &n,int A[]);
int doi_cho_2_phan_tu(int n,int A[]);
void xuat (int n,int A[]);
int main ()
{
	int n,A[100];
	nhap (n,A);
	int doicho=doi_cho_2_phan_tu(n,A);
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
int doi_cho_2_phan_tu(int n,int A[])
{
	int min =A[1];
	int demmin=0;
	int max=A[1];
	int demmax=0;
	int bientam=0;
	for (int i=1;i<=n;i++)
	{
		if (A[i]<min)
		min=A[i];
	}
	for (int i=1;i<=n;i++)
	{
		if (min!=A[i])
		{
			demmin++;
		}
		else 
		{
			demmin++;
			break;
		}
	}
	for (int i=1;i<=n;i++)
	{
		if (A[i]>max)
		max=A[i];
	}
	for (int i=1;i<=n;i++)
	{
		if (max!=A[i])
		{
			demmax++;
		}
		else 
		{
			demmax++;
			break;
		}
	}
	bientam=A[demmax];
	A[demmax]=A[demmin];
	A[demmin]=bientam;
}
void xuat (int n,int A[])
{
	for (int i=1;i<=n;i++)
	{
		cout<<A[i]<<"\t";
	}
}
