#include<iostream>
using namespace std;
void nhap(int &n,int &k,int A[]);
void dich_trai_xoay_vong(int n,int k,int A[]);
void xuat (int n,int A[]);
int main ()
{
	int n,k,A[100];
	nhap (n,k,A);
	dich_trai_xoay_vong(n,k,A);
	xuat (n,A);
	return 0;
}
void nhap(int &n,int &k,int A[])
{
	cout<<"nhap n ";
	cin>>n;
	cout<<"A[i]: "<<"\n";
	for (int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
	cout<<"nhap so lan dich phai xoay vong ";
	cin>>k;
}
void dich_trai_xoay_vong(int n,int k,int A[])
{
	k=k%n;
	int bientam=A[1];
	for (int dem=1;dem<=k;dem++)
	{
		for (int i=1;i<=n;i++)
		{
			if (i==n)
			{
				A[i]=bientam;
			}
			else 
			{
				bientam=A[i];
				A[i]=A[i+1];
				A[i+1]=bientam;
			}	
		}
	}
}
void xuat (int n,int A[])
{
	for (int i=1;i<=n;i++)
	{
		cout<<A[i]<<"\t";
	}
}
