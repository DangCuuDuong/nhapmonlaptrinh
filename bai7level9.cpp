#include<iostream>
using namespace std;
void nhap(int &n,float A[]);
int dem_so_luong_phan_tu_max(int n,float A[]);
void xuat (int soluong);
int main ()
{
	int n;
	float A[100];
	nhap (n,A);
	int soluong=dem_so_luong_phan_tu_max(n,A);
	xuat(soluong);
	return 0;
}
void nhap(int &n,float A[])
{
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
}
int dem_so_luong_phan_tu_max(int n,float A[])
{
	int dem=0;
	float max=A[1];
	for (int i=1;i<=n;i++)
	{
		if (A[i]>max)
		{
			max=A[i];
		}
	}
	for (int i=1;i<=n;i++)
	{
		if(max==A[i])
		{
			dem++;
		}
	}
	return dem;
}
void xuat (int soluong)
{
	cout<<soluong;
}
