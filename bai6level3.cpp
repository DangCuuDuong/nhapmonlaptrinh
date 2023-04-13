#include<iostream>
using namespace std;
void nhap(int &n);
int souoc(int n);
void xuat(int S) ;
int main()
{ int n;
  nhap(n);
  int S=souoc(n);
  xuat(S);
  return 0; 
 } 
void nhap(int &n)
{ cin>>n; 
 } 
int souoc(int n)
{	int Sum=0;
	int i=1;
	while (i<=n)
	{	if(n%i==0) 
			{Sum=Sum+1;}
		i=i+1; }		
	return Sum; 
	
 } 
void xuat(int S) 
{cout<<S; 
}
