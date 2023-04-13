#include<iostream>
using namespace std;
void nhap(int &n);
int maugiaithua(int n);
int  tu(int n);
float sum(int n);
void xuat(float kq);
int main()
{
	 
	int  (n); 
	nhap (n);
	maugiaithua(n);
	tu(n); 
	float kq=sum(n);
	xuat(kq); 
	return 0;
}
void nhap(int &n)
{
	cin>>n; 
}   
int  maugiaithua(int n)
{
  	int s=1;
	for (int i=n;i!=0;i--)
		s=s*i;
	return s;	
} 
int  tu(int n)
{
  	int s=0;
	for (int i=1;i<=n;i++)
		s=s+i;
		 
	return s;	
} 
float sum(int n)
{  
	 float sum=0; 
	for (int i=1;i<=n;i++)
		{
		 	sum=sum+(float)tu(i)/maugiaithua(i); 
		}
	return sum; 
} 			
void xuat(float kq)
{
	cout<<kq; 
} 
