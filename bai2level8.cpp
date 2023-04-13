#include<iostream>
using namespace std;
void nhap (int &n,int A[]);
int kiem_tra_mang_co_2_so_0_lien_tuc(int n,int A[]);
void xuat (int kt);
int main ()
{
	int n,A[100];
	nhap (n,A);
	int kt=kiem_tra_mang_co_2_so_0_lien_tuc(n,A);
	xuat (kt);
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
int kiem_tra_mang_co_2_so_0_lien_tuc(int n,int A[])
{
	for (int i=1;i<n;i++)
	{
		if (A[i]==0 && A[i+1]==0)
		{
			return 1;
			break;
		}
	}
	return 0;
}
void xuat (int kt)
{
	if (kt==1)
	{
		cout<<"mang co 2 gia tri 0 lien tiep";
	}
	else 
	{
		cout<<"mang khong co 2 gia tri 0 lien tiep";
	}
}
