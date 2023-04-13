#include <bits/stdc++.h>
using namespace std; 
void nhap(float &a);
float IN(float a);
void xuat(float a);
int main()
{
	float a;
	nhap(a);
	float kq=IN(a);
	xuat(kq);
	return 0;
}
void nhap(float &a)
{
	cin>>a;
}
float IN(float a)
{
	if(a-(int)(a)!=0)
		return (int)(a);
	else
		return (int)(a)-1;
}
void xuat(float a)
{
	cout<<a;
}
