#include <iostream>
using namespace std; 
void nhap(float &a,float &b,float &c);
bool xetboba(float a,float b,float c);
void xuat(bool n);
int main()
{
	float a,b,c;
	nhap(a, b, c);
	bool n=xetboba(a,b,c);
	xuat(n);
	return 0;
}
void nhap(float &a,float &b,float &c)
{
	cin>>a>>b>>c;
}
bool xetboba(float a,float b,float c)
{
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b) return true;
	else return false;
}
void xuat(bool n)
{
	if (n==true)cout<<"la ba canh tam giac";
	else cout<<"khong la ba canh tam giac";
}
