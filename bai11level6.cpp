#include <iostream> 
using namespace std;
void nhap(int A[],int &n,int &x);
float tong(int A[],int n,int x);
void xuat(float kq);
int main()
{
	int A[100],n,x;
	nhap(A,n,x);
	float kq=tong(A,n,x);
	xuat(kq);
	return 0;
}
void nhap(int A[],int &n,int &x)
{
	cin>>n>>x;
	for (int i=0;i<n;i++)
		cin>>A[i];
}
float tong(int A[],int n,int x)
{
	int dem=0;
	for (int i=0;i<n;i++)
	{
		if (A[i]==x)
		{
			return 1;
		}
	}
	return 0;
}
void xuat(float kq)
{
	cout<<kq;
}



