#include<iostream>
using namespace std;
void nhap (int &n,int A[]);
int kiem_tra_tinh_chat_so_ganh (int n,int A[]);
void xuat (int kt);
int main ()
{
	int n,A[100];
	nhap (n,A);
	int kt = kiem_tra_tinh_chat_so_ganh(n,A);
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
int kiem_tra_tinh_chat_so_ganh (int n,int A[])
{
	int j=0;
	int i;
	int B[100];
	int s;
	for (i=1;i<=n;i++)
	{
		if (A[i]>100)
		{
			s=A[i];
			while (s!=0)
			{
				j++;
				B[j]=s%10;
				s=s/10;
			}
			for (int k=1;k<j;k++)
			{
				if (B[j-k-1]==B[k])
				{
					return A[i];
					break;
				}
			}
		}	
	}
	return 0;
}
void xuat (int kt)
{
	if (kt==0)
	{
		cout<<"mang khong co gia tri thoa man tinh chat ganh";
	}
	else 
	{
		cout<<kt;
	}
}
