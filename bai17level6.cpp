#include <iostream> 
using namespace std;
void nhap(int A[],int &n);
float max(int A[],int n);
void xuat(float kq,int n);
int main()
{
	int A[100],n;
	nhap(A,n);
	float kq=max(A,n);
	xuat(kq,n);
	return 0;
}
void nhap(int A[],int &n)
{
	cin>>n;
	for (int i=n-1;i>=0;i--)
		cin>>A[i];
}
float max(int A[],int n)
{
	int max=0;
	for (int i=0;i<n;i++)
	{
		if (A[i]>max)
		{
			max=A[i];
		}

	}
	return max;
}

void xuat(float dem,int n)
{
	cout<<dem;
}



