#include<iostream>
using namespace std;
void nhap(int &n);
int tong(int n);
void xuat(int S) ;
int main()
{ int n;
  nhap(n);
  int S=tong(n);
  xuat(S);
  return 0; 
 } 
void nhap(int &n)
{ cin>>n; 
 } 
int tong(int n)
{  int Sum=1; 
  for (int i=1 ;n>0 && i<=n;i+1 ) 
  	
  {Sum=Sum*i;i=i+1;} 
  return Sum; 
 } 
void xuat(int S) 
{cout<<S; 
}
