#include<bits/stdc++.h>
using namespace std;
void nhap(int &a, int &b, int &c);
int max2(int a, int b, int c);
void xuat(int kq);
int main() 
{
	int a, b, c;
	nhap(a, b, c);
	int kq = max2(a, b, c);
	xuat(kq);
	return 0;
}
void nhap(int &a, int &b, int &c) 
{
	cin >> a >> b >> c;
}
int max2(int a, int b, int c) 
{
    if ((a > c && a < b && b > c) || (a > b && a < c && b < c)) 
	{
    	return a;
	}
	else if ((b > c && b < a && a > c) || (b > a && b < c && c > a)) 
	{
		return b;
	}
	else 
	{
		return c;
	}
}
void xuat(int kq) 
{
	cout << "So lon thu nhi la: " << kq;
}
