#include<bits/stdc++.h>
using namespace std;
void nhap(int &h, int &m, int &s);
int tinh(int h, int m, int s);
void xuat(int kq, int h, int m, int s);
int main() 
{
	int h, m, s;
	nhap(h, m, s);
	int kq = tinh(h, m, s);
	xuat(kq, h, m, s);
	return 0;
}
void nhap(int &h, int &m, int &s) 
{
	cin >> h >> m >> s;
}
int tinh(int h, int m, int s) 
{
	if (s == 59) 
	{
		if (m == 59) 
		{
			if (h == 23) 
			{
				return 0;
			}
			else 
			{
				return 1;
			}
		}
		else 
		{
			return 2;
		}
	}
	else 
	{
		return 3;
	}
}
void xuat(int kq, int h, int m, int s) 
{
	if (kq == 0) 
	{
		cout << "Bo gio sau 1 giay la: 00:00:00.";
	}
	else if (kq == 1) 
	{
		cout << "Bo gio sau 1 giay la: "<< h+ 1 << ":00:00";
	}
	else if (kq == 2) 
	{
		cout << "Bo gio sau 1 giay la: " << h << ":" << m + 1<< ":00";
	}
	else 
	{
		cout << "Bo gio sau 1 giay la: " << h << ":" << m << ":" << s + 1;
	}
}
