#include<iostream>
using namespace std;
void nhap(double &a, double &b, double &c);
int Xet(double a, double b, double c, int &x); 
void xuat(int kq, int x);
int main() 
{
	double a, b, c;
	int x;
	nhap(a, b, c);
	int kq = Xet(a, b, c, x);
	xuat(kq, x);
	return 0;
}
void nhap(double &a, double &b, double &c) 
{
    cin >> a >> b >> c;	
}
int Xet(double a, double b, double c, int &x) 
{
	if (a > 0 && b > 0 && c > 0 && (a + b) > c && (a + c) > b && (b + c) > a) 
	{
	    if (a == b == c) 
		{
	    	x = 1;
		} 
		else if (a == b || a == c || b == c) 
		{
			if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) 
			{
				x = 2;
			} 
			else 
			{
				x = 3;
			}
		} 
		else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) 
		{
			x = 4;
		} 
		else 
		{
			x = 5;
		}
		return 1;
	} 
	else 
	{
		return 0;
	}
}
void xuat(int kq, int x) 
{
	if (kq == 1) 
	{
		cout <<"La do dai ba canh cua mot tam giac"<< endl;
		switch (x) 
		{
			case 1:
				cout << "La tam giac deu";
				break;
			case 2:
				cout << "La tam giac vuong can";
				break;
			case 3:
				cout << "La tam giac can";
				break;
			case 4:
				cout << "La tam giac vuong";
				break;
			case 5:
				cout << "La tam giac thuong";
				break;
		}
	}
	else 
	{
	    cout <<"Khong tao thanh mot tam giac";	
	}
}
