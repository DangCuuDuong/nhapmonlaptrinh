#include <iostream> 
using namespace std;
void nhap(int A[],int &n);
int sole(int a[], int n); 
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=sole(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[],int &n)
{
	cin>>n;
	for (int i=n-1;i>=0;i--)
		cin>>A[i];
}
int sole(int A[], int n)
{
    int dem = 0;
    for (int i = 1; i < n; i++)
    {
        if (A[i] %2 != 0)
            dem++;
    }
    if (dem == n-1)
        return 1;
    else
        return 0;
}

void xuat(int kq)
{
    if (kq == 1)
       cout<<"day cac so le";
    else
        cout<<"day co so chan";
}

