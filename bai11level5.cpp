#include<iostream>
using namespace std;
void nhap(int &n);
int giaithua(int n);
int sum(int n);
void xuat(int kq);
int main()
{
	int  (n); 
	nhap (n);
	giaithua(n);
	int kq=sum(n);
	xuat(kq); 
	return 0;
}
void nhap(int &n)
{
	cin>>n; 
} 
int  giaithua(int n)
{
  	int s=1;
	for (int i=n;i!=0;i--)
		s=s*i;
	return s;	
} 
int sum(int n)
{  
	int sum=0; 
	for (int i=1;i<=n;i++)
		{
		 	sum+=giaithua(i); 
		}
	return sum; 
} 			
void xuat(int kq)
{
	cout<<kq; 
} 
