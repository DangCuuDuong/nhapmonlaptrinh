#include <iostream> 
using namespace std;
void nhap(int A[],int &n,int &x);
float tong(int A[],int n,int x);
void xuat(float sum);
int main()
{
	int A[100],n,x;
	nhap(A,n,x);
	float sum=tong(A,n,x);
	xuat(sum);
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
	int sum=0;
	for (int i=0;i<n;i++)
	{
		if (A[i]>x)
		{
			sum+=A[i];
		}
	}
	return sum;
}
void xuat(float sum)
{
	cout<<sum;
}



