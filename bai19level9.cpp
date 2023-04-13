#include<iostream>
using namespace std;
void nhap (int &n,int A[]);
int tim_phan_tu_lon_thu_hai(int n,int A[]);
void xuat (int max2);
int main ()
{
	int n,A[100];
	nhap (n,A);
	int max2=tim_phan_tu_lon_thu_hai(n,A);
	xuat (max2);
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
int tim_phan_tu_lon_thu_hai(int n,int A[])
{
	int max =A[1];
	int max2=A[1];
	for (int i=1;i<=n;i++)
	{
		if (max<A[i])
		{
			max2=max;
			max=A[i];
		}
		else if (A[i]>max2 && A[i]<max)
		{
			max2=A[i];
		}
	}
	return max2;
}
void xuat (int max2)
{
	cout<<max2;
}
