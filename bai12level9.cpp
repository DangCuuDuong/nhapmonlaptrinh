#include<iostream>
using namespace std;
void nhap(int &n,float A[]);
float tim_phan_tu_lon_nhat(int n,float A[]);
int tim_vi_tri_cua_gia_tri_lon_nhat(int n,float A[],int B[]);
void xoa_phan_tu_lon_nhat(int &n,int solan,float A[],int B[]);
void xuat (int n,float A[]);
int main ()
{
	int n,B[100];
	float A[100];
	nhap (n,A);
	int solan=tim_vi_tri_cua_gia_tri_lon_nhat(n,A,B);
	xoa_phan_tu_lon_nhat(n,solan,A,B);
	xuat(n,A);
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
float tim_phan_tu_lon_nhat(int n,float A[])
{
	float max=A[1];
	for (int i=1;i<=n;i++)
	{
		if (A[i]>max)
		{
			max=A[i];
		}
	}
	return max;
}
int tim_vi_tri_cua_gia_tri_lon_nhat(int n,float A[],int B[])
{
	int dem=0;
	int k=0;
	float phantu=tim_phan_tu_lon_nhat(n,A);
	for (int i=1;i<=n;i++)
	{
		if (phantu!=A[i])
		{
			dem++;
		}
		else 
		{
			k++;
			dem++;
			B[k]=dem;
		}
	}
	return k;
}
void xoa_phan_tu_lon_nhat(int &n,int solan,float A[],int B[])
{
	for (int i=1;i<=solan;i++)
	{
		int k=B[i]-i+1;
		for (int j=k;j<n;j++)
		{
			A[j]=A[j+1];
		}
		n--;
	}
}
void xuat (int n,float A[])
{	
	for(int i=1;i<=n;i++)
	{
		cout<<A[i]<<"\t";
	}	
}
