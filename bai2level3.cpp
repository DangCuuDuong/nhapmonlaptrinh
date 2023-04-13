#include<iostream>
using namespace std;
void nhap(int &n);
int tong(int n);
void xuat(int s);
int main()
{ int n;
  nhap(n);
  int s=tong(n);
  xuat(s);
  return 0; 
 } 
void nhap(int &n)
{ 
   cin>>n; 
 } 
int tong(int n)
{ int sum=0; 
  for (int i=1 ;i<=n;i+=1) 
  	
  {
  sum+=i*i;
  }
   
  return sum; 
 } 
void xuat(int s) 
{
	cout<<s; 
}
