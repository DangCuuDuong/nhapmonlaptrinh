#include<bits/stdc++.h>
using namespace std;
void nhap(int &n);
void nhapMang(double A[], int n);
int kiemTraMangDoiXung(double A[], int n);
void xuat(int kq );
int main()
{
    int n;
    double A[100];
    nhap(n);
    nhapMang(A, n);
    int kq = kiemTraMangDoiXung(A, n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
    cin >> n;
}
void nhapMang(double A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
int kiemTraMangDoiXung(double A[], int n)
{
    int bT = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (A[i] == A[n - i - 1])
        {
            bT += 1;
        }
    }
    if (bT == n / 2)
        return 1;
    else 
        return 0;
}
void xuat(int kq )
{
    cout << kq;
}
