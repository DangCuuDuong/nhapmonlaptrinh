#include<iostream>
using namespace std;
void nhap(int &a,int &b,int &N);
int tongbehonN(int a,int b,int N);
void xuat(int kq);
int main()
{ int a,b,N;
  nhap(a,b,N);
  int kq=tongbehonN(a,b,N);
  xuat(kq);
  return 0; 
 } 
void nhap(int &a,int &b,int &N)
{cin>>a>>b>>N; 
}
int tongbehonN(int a,int b,int N)
{	int sum=0;
	for (int i=1;a<N && b<N && i<N ;i=i+1)
  		{if (i%a==0 && i%b!=0) sum=sum+i;}
	return sum;	 
 }
void xuat(int kq)
{cout<<kq; 
 } 
