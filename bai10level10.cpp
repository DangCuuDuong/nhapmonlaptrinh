#include<iostream>
using namespace std;
#define COL 100
#define ROW 100
void nhap (int &M,int &N,int A[][COL]);
int tinh_tong(int M,int N,int A[][COL]);
void xuat (int kq);
int main ()
{
	int M,N;
	int A[100][100];
	nhap (M,N,A);
	int kq=tinh_tong(M,N,A);
	xuat(kq);
	return 0;
}
void nhap (int &M,int &N,int A[][COL])
{
	cout<<"nhap hang ";
	cin>>M;
	cout<<"nhap cot ";
	cin>>N;
	for (int i=0;i<N;i++)
	{
		for (int j=0;j<M;j++)
		{
			cin>>A[i][j];
		}
	}
}
int tinh_tong(int M,int N,int A[][COL])
{
	int tong=0;
	for (int i=0;i<N;i++)
	{
		for (int j=0;j<M;j++)
		{
			tong=tong+A[i][j];
		}
	}
	return tong;
}
void xuat (int kq)
{
	cout<<kq;
}
