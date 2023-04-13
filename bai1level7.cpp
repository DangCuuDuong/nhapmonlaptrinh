#include <iostream>

using namespace std;

void nhap(int &n, int A[]);
int nguyento(int n);
int phantudaulanto(int n, int A[]);
void xuat(int daura);

int main()
{
	int n, A[100];
	nhap(n,A);
	int daura = phantudaulanto(n,A);
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

int phantudaulanto(int n, int A[])
{
	for(int i=0;i<n;i++)
		if(nguyento(A[i]) == 0)
			return A[i];
		return -1;
}

void xuat(int daura)
{
	cout << daura;
}
