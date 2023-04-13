#include <iostream> 
using namespace std;
void nhap(int A[],int &n);
float tong(int A[],int n);
void xuat(float kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	float kq=tong(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[],int &n)
{
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>A[i];
}
float tong(int A[],int n)
{
	float kq=0;
	int dem=0;
	for (int i=0;i<n;i++)
	{
		if (A[i]%2==0)
		{
			kq+=A[i];
			dem++;
		}
	}
	kq=(float)(kq/dem);
	return kq;
}
void xuat(float kq)
{
	cout<<kq;
}



