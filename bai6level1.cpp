#include <iostream>
using namespace std; 
void nhap(int &h,int &m,int &s);
bool xetboba(int h,int m,int s);
void xuat(bool t);
int main()
{
	int h,m,s;
	nhap(h, m, s);
	bool t=xetboba(h,m,s);
	xuat(t);
	return 0;
}
void nhap(int &h,int &m,int &s)
{
	cin>>h>>m>>s;
}
bool xetboba(int h,int m,int s)
{
	if(h>=0 && m>=0 && s>=0 && h<24 && m<60 && s<60) return true;
	else return false;
}
void xuat(bool t)
{
	if (t==true)cout<<"tao duoc bo gio phut giay";
	else cout<<"khong tao duoc bo gio phut giay";
}
