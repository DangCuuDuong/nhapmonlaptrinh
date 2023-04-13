#include <iostream> 
using namespace std;
void nhap(int A[],int &n);
int IsGrow1(int a[], int n); 
void xuat(int kq);
int main()
{
	int A[100],n;
	nhap(A,n);
	int kq=IsGrow1(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[],int &n)
{
	cin>>n;
	for (int i=n-1;i>=0;i--)
		cin>>A[i];
}
int IsGrow1(int A[], int n)
{
    int dem = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i + 1] >= A[i])
            dem++;
    }
    if (dem == 0)
        return 1;
    else
        return 0;
}

void xuat(int kq)
{
    if (kq == 1)
       cout<<"day cac so lien tiep";
    else
        cout<<"day cac so ko lien tiep";
}

