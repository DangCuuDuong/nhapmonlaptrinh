#include<bits/stdc++.h>
using namespace std;
void nhap(int &n);
void nhapMang(int A[], int n);
int kiemTraMangCoGiaTriKhong(int A[], int n);
void xuat(int kq);
int main()
{
    int n;
    int A[100];
    nhap(n);
    nhapMang(A, n);
    int kq = kiemTraMangCoGiaTriKhong(A, n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
    cin >> n;
}
void nhapMang(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
int kiemTraMangCoGiaTriKhong(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 0)
            return 0;
        else 
            return 1;
    }
}
void xuat(int kq)
{
    cout << kq;
}
