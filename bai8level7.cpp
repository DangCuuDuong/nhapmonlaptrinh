#include <iostream>

using namespace std;

void nhap(int &n, int A[]);
int nguyento(int n);
float tbcnguyento(int n, int A[]);
void xuat(float daura);

int main()
{
	int n, A[100];
	nhap(n,A);
	float daura = tbcnguyento(n,A);
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
	if(n<2)
		return 1;
	for(int i=2; i<n; i++)
		if( n % i == 0)
			return 1;
		return 0;
}

float tbcnguyento(int n, int A[])
{
	float tbc = 0;
	int d = 0;
	float t = 0;
	for(int i=n-1;i>=0;i--)
		if(nguyento(A[i]) == 0)
			{
				t = t + A[i];
				d = d + 1; 
			}
	if(d==0)
		return 0;
	else
		tbc = t*1.0 / d;
	return tbc;
}

void xuat(float daura)
{
	cout << daura;
}
