#include<bits/stdc++.h>
using namespace std;
void nhap(int &a, int &b, int &c);
int nghiem(int a, int b, int c, double &x, double &x1, double &x2);
void xuat(int kq, double x, double x1, double x2);
int main() 
{
	int a, b, c;
	double x1, x2, x;
	nhap(a, b, c);
	int kq = nghiem(a, b, c, x, x1, x2);
	xuat(kq, x, x1, x2);
	return 0;
}
void nhap(int &a, int &b, int &c) 
{
	cin >> a >> b >> c;
}
int nghiem(int a, int b, int c, double &x, double &x1, double &x2) 
{
	while (true) 
	{
		if (a == 0 && b == 0) 
		{
			cin >> a >> b;
		}
		else 
		{
			break;
		}
	}
	double delta = b*b - 4*a*c;
	if (delta < 0) 
	{
		return 0;
	}
	else if (delta > 0) 
	{
		x1 = (-b + sqrt(delta))/2*a;
		x2 = (-b - sqrt(delta))/2*a;
		return 1;
	} 
	else 
	{
		x = -b/2*a;
		return 2;
	}
}
void xuat(int kq, double x, double x1, double x2) 
{
	if (kq == 0) 
	{
		cout << "Phuong trinh vo nghiem!";
	}
	else if (kq == 1) 
	{
		cout << "Phuong trinh co hai nghiem phan biet: " << x1 << ", " << x2;
	} 
	else 
	{
		cout << "Phuong trinh co nghiem kep: " << x;
	}
}
