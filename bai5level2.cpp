#include<bits/stdc++.h>
using namespace std;
void nhap(int &a, int &b, int &c, int &d);
int max (int a, int b, int c, int d);
void xuat(int kq);
int main() 
{
	int a, b, c, d;
	nhap(a, b, c, d);
	int kq = max(a, b, c, d);
	xuat(kq);
	return 0;	
}
void nhap(int &a, int &b, int &c, int &d) 
{
	cin >> a >> b >> c >> d;
}
int max (int a, int b, int c, int d) 
{
	if (a > b && a > c && a > d) 
	{
		return a;
	} 
	else if (b > c && b > d) 
	{
		return b;
	}
	else if (c > d) 
	{
		return c;
	}
	else 
	{
		return d;
	}
}
void xuat(int kq) 
{
	cout << "so lon nhat la " << kq;
}
