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
	int dem=0;
	for (int i=0;i<n;i++)
	{
		if (A[i]%2==0)
		{
			return A[i];
			break;
		}
		else
		{
			return -1;
		}
		break;
	}
	
}
void xuat(float kq)
{
	cout<<kq;
}



