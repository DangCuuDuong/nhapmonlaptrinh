#include<iostream>
using namespace std;
void nhap(int &a,int &b);
int uocmax(int a,int b);
void xuat(int kq);
int main()
{ int a,b;
  nhap(a,b);
  int kq=uocmax(a,b);
  xuat(kq);
  return 0; 
}
void nhap(int &a,int &b)
{cin>>a>>b; 
}
int uocmax(int a,int b)
{ int max;	
for (int i=1;a>0 && b>0 && i<=a && i<=b;i=i+1)
		{ if (a%i==0 && b%i==0) max=i; 
		} 
	return max; 
 } 
void xuat(int kq)
{cout<<kq; 
 } 
