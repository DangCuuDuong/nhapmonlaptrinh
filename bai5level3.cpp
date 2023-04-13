#include<iostream>
using namespace std;
void nhap(int &n);
int tonguoc(int n);
void xuat(int S) ;
int main()
{ int n;
  nhap(n);
  int S=tonguoc(n);
  xuat(S);
  return 0; 
 } 
void nhap(int &n)
{ cin>>n; 
 } 
int tonguoc(int n)
{	int Sum=0;
	int i=1;
	while (n>0 && i<=n)
	{	if(n%i==0) 
			{Sum=Sum+i;}
		i=i+1; }
		
	return Sum; 
	
 } 
void xuat(int S) 
{cout<<S; 
}
