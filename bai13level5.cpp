#include<iostream>
#include<math.h> 
using namespace std;
void nhap(int &n,float &x);
int maugiaithua(int n);
float  tu(float x,int n);
float sum(int n,float x);
void xuat(float kq);
int main()
{
	int  n;
	float x; 
	nhap (n,x);
	maugiaithua(n);
	tu(x,n); 
	float kq=sum(n,x);
	xuat(kq); 
	return 0;
}
void nhap(int &n,float &x)
{
	cin>>n>>x; 
} 
/* tim mau*/  
int  maugiaithua(int n)
{
  	int s=1;
	for (int i=n;i!=0;i--)
		s=s*i;
	return s;	
} 


// tim tu			
float tu(float x,int n)
{
  	int s=1;
	for (int i=1;i<=n;i++)
		s=s*x;
		 
	return s;	
} 
float sum(int n,float x)
{  
	 float sum=1; 
	for (int i=1;i<=n;i++)
		{
		 	sum=sum+(float)tu(x,i)/maugiaithua(i); 
		}
	return sum; 
} 			
void xuat(float kq)
{
	cout<<kq; 
} 
