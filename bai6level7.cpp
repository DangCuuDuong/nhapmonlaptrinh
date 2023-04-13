#include <iostream>

using namespace std;

void nhap(int &n, int A[]);
int hoanhao(int n);
int demhoanhao(int n, int A[]);
void xuat(int daura);

int main()
{
	int n, A[100];
	nhap(n,A);
	int daura = demhoanhao(n,A);
	xuat(daura);
	return 0;
}

void nhap(int &n, int A[])
{
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> A[i];
}

int hoanhao(int n)
{
	int t=0;
	for(int i=1; i<n; i++)
		if( n % i == 0)
			t = t + i;
	if(t == n)
		return 1;
	return 0;
}

int demhoanhao(int n, int A[])
{
	int d = 0;
	for(int i=0;i<n;i++)
		if(hoanhao(A[i]) == 1)
			d++;
		return d;
}

void xuat(int daura)
{
	cout << daura;
}
