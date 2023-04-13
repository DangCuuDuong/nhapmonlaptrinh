#include<iostream>
using namespace std;
void nhap (int &n,int A[]);
int kiem_tra_mang_co_dang_song(int n,int A[]);
void xuat (int song);
int main ()
{
	int n,A[100];
	nhap(n,A);
	int song=kiem_tra_mang_co_dang_song(n,A);
	xuat (song);
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
int kiem_tra_mang_co_dang_song(int n,int A[])
{
	for (int i=2;i<n;i++)
	{
		if ((A[i]>A[i-1] && A[i]<A[i+1]) || (A[i]<A[i-1] && A[i]>A[i+1]))
		{
			return 0;
		}
	}
	return 1;
}
void xuat (int song)
{
	if (song==1)
	{
		cout<<"mang co tinh chat song";
	}
	else 
	{
		cout<<"mang khong co tinh chat song";
	}
}
