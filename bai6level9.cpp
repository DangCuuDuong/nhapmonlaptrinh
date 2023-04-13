#include<iostream>
using namespace std;
void nhap (int &n,float A[]);
int tinh_tong_cuc_tri_cua_mang(int n,float A[]);
void xuat (float cuctri);
int main ()
{
	int n;
	float A[100];
	nhap (n,A);
	float cuctri=tinh_tong_cuc_tri_cua_mang(n,A);
	xuat(cuctri);
	return 0;
}
void nhap (int &n,float A[])
{
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
}
int tinh_tong_cuc_tri_cua_mang(int n,float A[])
{
	float min=A[1];
	float max=A[1];
	for (int i=1;i<=n;i++)
	{
		if (A[i]>max)
		{
			max=A[i];
		}
		if (A[i]<min)
		{
			min=A[i];
		}
	}
	float s=max+min;
	return s;
}
void xuat (float cuctri)
{
	cout<<cuctri;
}
