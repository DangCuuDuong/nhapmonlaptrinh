#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &a);
int sochinhphuong(int a);
void xuat(int kq);
int main()

{	
  int a;
  nhap(a);
  int kq=sochinhphuong(a);
  xuat(kq);
  return 0; 
}
void nhap(int &a)
{cin>>a; 
}
int sochinhphuong(int a)
{
	if ( (int) sqrt(a) == (float) sqrt(a))
	{
		return 0;
	}
	else
		return 1;
}
void xuat(int kq)
{
		if (kq==0)
	{
		cout<<"so chinh phuong";
	}
	else
		cout<<"ko phai so chinh phuong" ;
 
}


