#include<iostream>
using namespace  std;
void nhap(int &n);
void tinhtien(int n, int &a, int &b, int &c, int &d);
void xuat(int a, int b, int c, int d);
int main()
{
	int n,a,b,c,d;	
	nhap (n);
	tinhtien(n,a,b,c,d);
	xuat(a,b,c,d);
	return 0; 
} 
void nhap(int &n)
{
	cin>>n;
	while (n%10000!=0)
	{
		
		cin>>n;
	} 
}
void tinhtien(int n, int &a, int &b, int &c, int &d)
{ 
	if (n>=100000)
	{
		a=n/100000;
		n=n-a*100000;
	}
	if (n>=50000)
	{
		b=n/50000;
		n=n-b*50000;
	}
	if (n>=20000)
	{
		c=n/20000;
		n=n-c*20000;
	} 
	if (n>=10000)
	{
		d=n/10000;
	}
} 
void xuat(int a, int b, int c, int d)
{
	cout<<"so to tien 100k : "<<a<<endl;
	cout<<"so to tien 50k  : "<<b<<endl;
	cout<<"so to tien 20k  : "<<c<<endl; 
	cout<<"so to tien 10k  : "<<c;
}
 
