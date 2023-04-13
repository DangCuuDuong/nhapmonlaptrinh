#include <iostream>
#include <math.h>
using namespace std;

void nhap(int &n, int A[]);
int chinhphuong(int n);
int tongcp(int n, int A[]);
void xuat(int daura);

int main()
{
	int n, A[100];
	nhap(n,A);
	int daura = tongcp(n,A);
	xuat(daura);
	return 0;
}

void nhap(int &n, int A[])
{
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> A[i];
}

int chinhphuong(int n)
{
	int i = sqrt(n);
	if(i*i==n)
		return 0;
	return 1;
}

int tongcp(int n, int A[])
{
	int t=0;
	for(int i=0;i<n;i++)
		if(chinhphuong(A[i]) == 0)
			t = t+A[i];
		return t;
}

void xuat(int daura)
{
	cout << daura;
}
