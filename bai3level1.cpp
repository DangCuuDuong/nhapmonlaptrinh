#include <iostream>
#include <math.h>
using namespace std;
void nhap(float &a,float &b);
float chuvi(float a, float b);
void xuat(float kq);
int  main()
{
	float a,b;
	nhap(a,b);
	float kq = chuvi(a,b);
	xuat(kq);
	return 0;
}

void nhap(float &a, float &b)
{
	cin>>a>>b;
}
float chuvi(float a, float b)
{
	float s=(a+b)*2;
	return s;
}

void xuat(float kq)
{
	cout<<round(kq * 100) / 100 ;
}

