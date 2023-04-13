#include<iostream>
using namespace std;
void nhap(int &n);
float tong(int n);
void xuat(float s);
int main()
{ int n;
  nhap(n);
  float s=tong(n);
  xuat(s);
  return 0; 
 } 
void nhap(int &n)
{ cin>>n; 
 } 
float tong(int n)
{ float sum=0; 
  for (int i=1 ; i<=n; i+1) 
  	
  {sum=(float)sum+(1.0/i);i=i+1;} 
  return sum; 
 } 
void xuat(float  s) 
{cout<<s; 
}
