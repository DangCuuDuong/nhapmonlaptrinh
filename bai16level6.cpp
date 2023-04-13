#include <iostream> 
using namespace std;
void nhap(int A[],int &n);
float tong(int A[],int n);
void xuat(float kq,int n);
int main()
{
	int A[100],n;
	nhap(A,n);
	float kq=tong(A,n);
	xuat(kq,n);
	return 0;
}
void nhap(int A[],int &n)
{
	cin>>n;
	for (int i=n-1;i>=0;i--)
		cin>>A[i];
}
float tong(int A[],int n)
{
	int dem=1;
	for (int i=0;i<n;i++)
	{
		if (A[i]<0)
		{
			dem+=1;
		}
		if (A[i]>0)
		{
			return A[i];
		}

	}

}

void xuat(float dem,int n)
{
	cout<<dem;
}



