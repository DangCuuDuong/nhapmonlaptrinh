#include <iostream>
using namespace std; 
void nhap(double &n);
int LT(double x);
void xuat(double kq);
int main()
{
	double x;
	nhap(x);
	int kq=LT(x);
	xuat(kq);
}
void nhap(double &n)
{
	cin>>n;
}
int LT(double x)
{
	int y=int(x);
	if (y>0 && (x-y>=0.5))
		return y+1;
	else if (y<0 and (x-y<=-0.5) )
		return y-1;
	else
		return y; 
}
void xuat(double kq)
{
	cout<<kq;
}
