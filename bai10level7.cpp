#include <iostream>

using namespace std;

int sodaulasochan(int n);
void nhap(int &n, int A[]);
int lietkesocochusodaulachan(int n, int A[]);
void xuat(int kq);
int main()
{
	int n, A[100];
	nhap(n,A);
	int sodaulasochan(n);
	lietkesocochusodaulachan(n, A);
	int kq=lietkesocochusodaulachan( n,  A);
	xuat(kq);
	return 0;
}

void nhap(int &n, int A[])
{
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> A[i];
}

int sodaulasochan(int n)
{
	int d;
	for(;n!=0;n/10)
		d = n % 10;
	if(d % 2 == 0)
		return 1;
	return 0;
}
int lietkesocochusodaulachan(int n, int A[])
{
	for(int i= 0; i<n; i++)
	{
		if(sodaulasochan(A[i])==1);
		xuat(A[i]);	
	}	
}
void xuat(int kq)
{
	cout<<kq;
}
