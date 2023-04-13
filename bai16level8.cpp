#include<iostream>
using namespace std;
void nhap (int &n,int &tt,int A[]);
int chon_thao_thac (int tt,int &n,int A[]);
void xuat (int n,int A[]);
int main ()
{
	int n,A[100],tt;
	nhap (n,tt,A);
	int thaothao=chon_thao_thac(tt,n,A);
	xuat (n,A);
	return 0;
}
void nhap (int &n,int &tt,int A[])
{
	cout<<"nhap gia tri n ";
	cin>>n;
	cout<<"chon thao tac thuc hien ";
	cin>>tt;
	cout<<"nhap A[i]"<<"\n";
	for (int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
}
int cap_nhat_phan_tu(int n,int A[])
{
	int phantu,k;
	cout<<"thu tu phan tu can cap nhat ";
	cin>>k;
	cout<<"phan tu thay doi thanh ";
	cin>>phantu;
	A[k]=phantu;
}
int xoa_phan_tu(int &n,int A[])
{
	int phantu,k;
	cout<<"thu tu phan tu can xoa ";
	cin>>k;
	for (int i=k;i<n;i++)
	{
		A[i]=A[i+1];
	}
	n--;
}
int chen_them_phan_tu(int &n,int A[])
{
	int k,x;
	cout<<"vi tri can them phan tu vao sau no ";
	cin>>k;
	cout<<"phan tu can chen vao ";
	cin>>x;
	n++;
	for (int i=n;i>k;i--)
	{
		A[i]=A[i-1];
	}
	A[k+1]=x;
}
int chon_thao_thac (int tt,int &n,int A[])
{
	if (tt==1)
	{
		cap_nhat_phan_tu(n,A);	
	}
	else if (tt==2)
	{
		xoa_phan_tu(n,A);
	}
	else 
	{
		chen_them_phan_tu(n,A);	
	}
}
void xuat (int n,int A[])
{
	for (int i=1;i<=n;i++)
	{
		cout<<A[i]<<"\t";
	}
}

