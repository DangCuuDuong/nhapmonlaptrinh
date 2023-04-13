#include <iostream>

using namespace std;

void nhap(int &n, int A[]);
float vitrimin(int n, int A[]);
void xuat(int daura);

int main()
{
	int n, A[100];
	nhap(n,A);
	int daura = vitrimin(n,A);
	xuat(daura);
	return 0;
}

void nhap(int &n, int A[])
{
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> A[i];
}

float vitrimin(int n, int A[])
{
	int psmin = 0;
	for( int i = 1; i<=n;i++)
	{
		if(A[i]< A[psmin])
			psmin = i;
	}
	return psmin;
}

void xuat(int daura)
{
	cout << daura;
}
