#include <iostream> 
using namespace std;
void nhap(int A[],int &n,int &x);
float tong(int A[],int n,int x);
void xuat(float kq,int n);
int main()
{
	int A[100],n,x;
	nhap(A,n,x);
	float kq=tong(A,n,x);
	xuat(kq,n);
	return 0;
}
void nhap(int A[],int &n,int &x)
{
	cin>>n>>x;
	for (int i=n-1;i>=0;i--)
		cin>>A[i];
}
float tong(int A[],int n,int x)
{
	int dem=1;
	for (int i=0;i<n;i++)
	{
		if (A[i]!=x)
		{
			dem+=1;
		}
		if (A[i]==x)
		{
			break;
		}

	}
	if (dem==n)
		{
			return -1;
		}
	else
	{
		dem=n-dem+1;
		return dem;
	}
}

void xuat(float dem,int n)
{
	cout<<dem;
}



