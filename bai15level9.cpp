#include<iostream>
using namespace std;
void nhap (int &n,int A[]);
bool kiem_tra(int A[],int n,int x);
int tim_cac_so_trung_nhau_trong_mang (int n,int A[],int B[]);
int dem_so_lan_xoa(int A[],int n,int x);
void xoa_phan_tu_trung_nhau_trong_mang(int &n,int A[],int B[],int C[]);
void xuat (int n,int A[]);
int main ()
{
	int n,A[100],B[100],C[100];
	nhap (n,A);
	xoa_phan_tu_trung_nhau_trong_mang(n,A,B,C);
	xuat (n,A);
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
bool kiem_tra(int A[],int n,int x)
{
	for (int i=1;i<=n;i++)
	{
		if (A[i]==x)
		{
			return false;
		}
	}
	return true;
}
int tim_cac_so_trung_nhau_trong_mang (int n,int A[],int B[])
{
	int phantu=0;
	for (int i=1;i<=n;i++)
	{
		int x=A[i];
		int dem=0;
		for (int j=1;j<=n;j++)
		{
			if (x==A[j])
			{
				dem++;
			}
		}
		if (dem>1 && kiem_tra(B,phantu,A[i])==true)
		{
			phantu++;
			B[phantu]=A[i];
		}
	}
	return phantu;
}
int dem_so_lan_xoa(int A[],int n,int x)
{
	int dem=0;
	for (int i=1;i<=n;i++)
	{
		if (A[i]==x)
		{
			dem++;
		}
	}
	return dem;
}
int tim_vi_tri_cac_so_trung_nhau_trong_mang(int A[],int n,int x)
{
	int vitri=0;
	for (int i=1;i<=n;i++)
	{
		if (A[i]==x)
		{
			return i;
		}
	}
	return vitri;
}
void xoa_phan_tu_trung_nhau_trong_mang(int &n,int A[],int B[],int C[])
{
	int t=1;
	int k=0;
	int solan=0;
	for (int i=1;i<=tim_cac_so_trung_nhau_trong_mang (n,A,B);i++)
	{
		solan=solan+(dem_so_lan_xoa(A,n,B[i]));
	}
	for (int i=1;i<=solan;i++)
	{
		if (tim_vi_tri_cac_so_trung_nhau_trong_mang(A,n,B[t])==0)
			{
				t++;
			}
		C[i]=tim_vi_tri_cac_so_trung_nhau_trong_mang(A,n,B[t]);
	  	if(C[i]!=n)
	  		{
				for(int j=C[i];j<=n-1;j++)
	    		{
					A[j]=A[j+1];
	    		}
	    	}
		n--;
	}
}
void xuat (int n,int A[])
{
	for (int i=1;i<=n;i++)
	{
		cout<<A[i]<<"\t";
	}
}

