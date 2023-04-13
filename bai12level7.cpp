#include <iostream> 
using namespace std;
void nhap(int A[],int &n);
int soduong(int a[], int n); 
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=soduong(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[],int &n)
{
	cin>>n;
	for (int i=n-1;i>=0;i--)
		cin>>A[i];
}
int soduong(int A[], int n)
{
    int dem = 0;
    for (int i = 1; i < n; i++)
    {
        if (A[i] > 0)
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
       cout<<"day cac so duong";
    else
        cout<<"day co so am";
}

