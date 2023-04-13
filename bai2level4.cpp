#include<iostream>
using namespace std;
void nhap(int &a);
int songuyento(int a);
void xuat(int kq);
int main()
{	
  int a;
  nhap(a);
  int kq=songuyento(a);
  xuat(kq);
  return 0; 
}	
void nhap(int &a)
{
cin>>a; 
}
int songuyento(int a)
{
	int i=2;
	while (i<a-1)
	{
		if (a%i==0)
		{
			return 0;
		}
		i+=1;
	}
	
		return 1;
}	
void xuat(int kq)
{
		if (kq==1)
	{
		cout<<"so nguyen to";
	}
		else
		cout<<"so ko nguyen to" ;

}

