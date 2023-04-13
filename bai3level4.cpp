#include<bits/stdc++.h>
using namespace std;
void nhap(int &n);
int thu(int n);
void xuat(int kq, int n);
int main() 
{
	int n;
	nhap(n);
	int kq = thu(n);
	xuat(kq, n);
}
void nhap(int &n) 
{
	cin >> n;
}
int thu(int n) 
{
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			s = s + i;
	}
	if (s == n)
		return 1;
	else 
		return 0;
}
void xuat(int kq, int n)
{
	if (kq == 1)
		cout << n << " la so hoan hao";
	else 
		cout << n << " khong la so hoan hao";
}
