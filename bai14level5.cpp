#include<iostream>
using namespace std;
void nhap(int &n, int &k);
int tugiaithua(int x);
int tohop(int n, int k);
void xuat(int kq);
int main()
{
	int n,k;
	nhap(n,k);
	int kq=tohop(n,k);
	xuat(kq);
	return 0;
}
void nhap(int &n, int &k)
{
	cin>>n>>k;
}
int tugiaithua(int x)
{
	int s=1;
	for (int i=1; i<=x; i=i+1)
		s=s*i;
	return s;
}
int tohop(int n, int k)
{
	int c=tugiaithua(n)/(tugiaithua(k)*tugiaithua(n-k));
	return c;
}
void xuat(int kq)
{
	cout<<kq;
}
