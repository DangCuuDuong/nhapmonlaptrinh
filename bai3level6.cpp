#include <iostream> 
using namespace std;
void nhap(int A[],int &n);
int tong(int A[],int n);
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=tong(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[],int &n)
{
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>A[i];
}
int tong(int A[],int n)
{
	int kq=0;
	for (int i=0;i<n;i++)
	{
		kq+=A[i];
	}
	kq=kq/n;
	return kq;
}
void xuat(int kq)
{
	cout<<kq;
}



