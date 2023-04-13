#include <iostream>
using namespace std; 
void nhap(int &a,int &b);
float chia(int a, int b, float &kq);
void xuat(float kq,int in);
int main()
{
	int a,b,c;
	nhap(a,b);
	float kq;
	float in=chia(a,b,kq);
	xuat(kq,in);
	return 0;
}
void nhap(int &a,int &b)
{
	cout<<"aX+b=0:   ";
	cin>>a>>b;
}
float chia(int a, int b, float &kq)
{
	if (a==0)
		return 0;
	else
		kq=(float)-b/a;
		return 1;
}
void xuat(float kq,int in)
{
	if (in==0)
		cout<<"Vo nghiem";
	else
		cout<<kq;
}
