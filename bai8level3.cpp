#include<iostream>
using namespace std;
void nhap(int &n);
int daonguoc(int n);
void xuat(int kq) ;
int main()
{ int n;
  nhap(n);
  int kq=daonguoc(n);
  xuat(kq);
  return 0; 
 } 
void nhap(int &n)
{ cin>>n; 
 } 
int daonguoc(int n)
{	int i=0;	
 	while (n>0)
	{i=i*10;
	 i=i+(n%10);
	 n=n/10;}
	return i; 
}
void xuat(int kq) 
{cout<<kq; 
}
