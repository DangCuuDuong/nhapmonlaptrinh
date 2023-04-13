#include<iostream>
#include<cmath>
using namespace std;
void nhap(int &d, int &m, int &y);
bool testnhuan(int y);
int  soNgayTrongThang(int m, int y);
bool testngaythangnam(int d, int m, int y);
int  tinhSoNgayTuDauNam(int d, int m, int y);
int  tinhSoNgay(int d, int m, int y);
int  tinhKhoangCach(int d1, int m1, int y1, int d2, int m2, int y2);
void xuat(int kq);
int main()
{
	int d1,m1,y1,d2,m2,y2;
	nhap(d1,m1,y1);
	nhap(d2,m2,y2);
	int kq=tinhKhoangCach(d1,m1,y1,d2,m2,y2);
	xuat(kq);
	return 0;
}
void nhap(int &d, int &m, int &y)
{
	cin>>d>>m>>y;
}
bool testnhuan(int y)
{
	if ( (y%4==0 && y%100!=0) || y%400==0 )
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
int tinhSoNgayTuDauNam(int d, int m, int y)
{
	int s=d;
	for (int i=1; i<m; i=i+1)
		s=s+soNgayTrongThang(i,y);
	return s;
}
int tinhSoNgay(int d, int m, int y)
{
	int s=0;
	for (int i=1; i<y; i++)
		if (testnhuan(i))
			s=s+366;
		else
			s=s+365;
	s=s+tinhSoNgayTuDauNam(d,m,y);
	return s;
}
int tinhKhoangCach(int d1, int m1, int y1, int d2, int m2, int y2)
{
	int kc1=tinhSoNgay(d1,m1,y1);
	int kc2=tinhSoNgay(d2,m2,y2);
	int s=abs(kc1-kc2);
	return s;
}
void xuat(int kq)
{
		cout<<kq;	
}
