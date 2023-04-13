#include<iostream>
using namespace std;
void nhap(int &n);
int tongchuso(int n);
void xuat(int S) ;
int main()
{ int n;
  nhap(n);
  int S=tongchuso(n);
  xuat(S);
  return 0; 
 } 
void nhap(int &n)
{ cin>>n; 
 } 
int tongchuso(int n)
{	int Sum=0;
	int i;
	while (n>0)
		{i= n%10;
		 Sum=Sum+i;
		 n =n/10; 
		}
	return Sum; 
 } 
void xuat(int S) 
{cout<<S; 
}
