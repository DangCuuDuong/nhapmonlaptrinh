#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &n);
int tinh(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap (n);
	int kq=int(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cout<<"Nhap n:";
	cin>>n;
}
int tinh(int n)
{
	int kq;
	kq = abs(n);
	return kq;
}
void xuat(int kq)
{
	cout<<"gia tri tuyet doi cua n la:"<<kq;
}
