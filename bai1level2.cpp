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
	cout<<"nhap a va b:";
	cin>>a>>b;
}
float chia(int a, int b, float &kq)
{
	if (b==0)
		return 0;
	else
		kq=(float)a/b;
		return 1;
}
void xuat(float kq,int in)
{
	if (in==0)
		cout<<"ko tinh duoc";
	else
		cout<<kq;
}
