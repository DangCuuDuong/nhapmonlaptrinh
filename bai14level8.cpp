#include<iostream>
using namespace std;
void nhap (int &n,int A[]);
int gioi_han_duoi (int n,int A[]);
int gioi_han_tren (int n,int A[]);
void xuat (int a,int b);
int main ()
{
	int n,A[100];
	nhap (n,A);
	int a=gioi_han_duoi(n,A);
	int b=gioi_han_tren(n,A);
	xuat(a,b);
	return 0;
}
void nhap (int &n,int A[])
{
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
}
int gioi_han_duoi (int n,int A[])
{
	int min=A[1];
	for (int i=1;i<=n;i++)
	{
		if (A[i]<min)
		{
			min=A[i];
		}
	}
	return min;
}
int gioi_han_tren (int n,int A[])
{
	int	max=A[1];
	for (int i=1;i<=n;i++)
	{
		if (A[i]>max)
		{
			max=A[i];
		}
	}
	return max;
}
void xuat (int a,int b)
{
	cout<<"["<<a<<";"<<b<<"]";
}
