#include<iostream>
using namespace std;
void nhap(int &d, int &m, int &y);
bool testngaythangnam(int d, int m, int y);
bool testnhuan(int y);
int  soNgayTrongThang(int m, int y);
int  tinhsttNgayTrongNam(int d, int m, int y);
void xuat(int d, int m, int y, int kq);
int  tinhsoNgayDenNamMoi(int d, int m, int y);
int main()
{
	int d,m,y;
	nhap(d,m,y);
	int kq=tinhsoNgayDenNamMoi(d,m,y);
	xuat(d,m,y,kq);
	return 0;
}
void nhap(int &d, int &m, int &y)
{
	cin>>d>>m>>y;
}
bool testngaythangnam(int d, int m, int y)
{
	if (y<0)
		return false;
	if (m<1 || m>12)
		return false;
	if (d<1 || d>soNgayTrongThang(m,y))
		return false;
	return true;
}
bool testnhuan(int y)
{
	if ((y%4==0 && y%100!=0) || y%400==0)
		return true;
	else
		return false;
}
int soNgayTrongThang(int m, int y)
{
	int d;
	switch(m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: 
			d = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11: 
			d = 30;
			break;
		case 2:
			if (testnhuan(y))
				d = 29;
			else
				d = 28;
			break;
	}
	return d;
}
int tinhsttNgayTrongNam(int d, int m, int y)
{
	int s=d;
	for (int i=1; i<m; i=i+1)
		s=s+soNgayTrongThang(i,y);
	return s;
}
int tinhsoNgayDenNamMoi(int d, int m, int y)
{
	int s;
	if (testnhuan(y))
		s=367-tinhsttNgayTrongNam(d,m,y);
	else
		s=366-tinhsttNgayTrongNam(d,m,y);
	return s;
}
void xuat(int d, int m, int y, int kq)
{
	if (testngaythangnam(d,m,y))
		cout<<kq;
	else
		cout<<"Khong hop le";
}
