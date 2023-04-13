#include <iostream>

using namespace std;

void nhap(int &n, int A[]);
int nguyento(int n);
int demnguyento(int n, int A[]);
void xuat(int daura);

int main()
{
	int n, A[100];
	nhap(n,A);
	int daura = demnguyento(n,A);
	xuat(daura);
	return 0;
}

void nhap(int &n, int A[])
{
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> A[i];
}

int nguyento(int n)
{
	for(int i=2; i<n; i++)
		if( n % i == 0)
			return 1;
		return 0;
}

int demnguyento(int n, int A[])
{
	int d = 0;
	for(int i=n-1;i>=0;i--)
		if(nguyento(A[i]) == 0)
			d = d + 1;
		return d;
}

void xuat(int daura)
{
	cout << daura;
}
