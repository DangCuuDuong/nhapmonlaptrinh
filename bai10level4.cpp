#include<bits/stdc++.h>
using namespace std;
void nhap(int &n);
int fibonacci(int n);
void xuat(int kq, int n);
int main()
{
	int n;
	nhap(n);
	int kq = fibonacci(n);
	xuat(kq, n);
}
void nhap(int &n)
{
	cin >> n;
}
int fibonacci(int n)
{
	int f0 = 0;
	int f1 = 1;
	int fn = 1;
	if (n < 0) 
		return -1;
	else if (n == 0 || n == 1) 
		return n;
	else 
	{
		for (int i = 2; i < n; i++) 
		{
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
    	}
	}
	return fn;
}
void xuat(int kq, int n)
{
	cout <<"n so fibonacci dau tien la: ";
	for (int i = 0; i < n; i++)
	{
		cout << fibonacci(i) << " ";
	}
}
