#include<bits/stdc++.h>
using namespace std;
void nhap(int &m, int &y);
int xet(int m, int y);
void xuat(int kq);
int main() 
{
	int m, y;
	nhap(m ,y);
	int kq = xet(m, y);
	xuat(kq);
	return 0;
}
void nhap(int &m, int &y) 
{
	cin >> m >> y;
}
int xet(int m, int y) 
{
	switch (m) 
	{
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;

		case 2:
			if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0) 
			{
				return 29;
			}
			else 
			{
				return 28;
			}
	}
}
void xuat(int kq) 
{
	cout <<"Thang do co so ngay la " << kq;
}
