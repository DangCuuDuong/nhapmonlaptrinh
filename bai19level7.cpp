#include<bits/stdc++.h>
using namespace std;
void nhap(int &n);
void nhapMang(int A[], int n);
int kiemTraMangCoToanSoChinhPhuong(int A[], int n);
int testSoChinhPhuong(int bT);
void xuat(int kq);
int main()
{
    int n;
    int A[100];
    nhap(n);
    nhapMang(A, n);
    int kq = kiemTraMangCoToanSoChinhPhuong(A, n);
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
int kiemTraMangCoToanSoChinhPhuong(int A[], int n)
{
    int bT = 0;
    for (int i = 0; i < n; i++)
    {
        if (testSoChinhPhuong(A[i]) == 1)
        {
            bT += 1;
        }
    }
    if (bT == n)
        return 1;
    else 
        return 0;
}
int testSoChinhPhuong(int bT)
{
    int s = sqrt(bT);
    if (s*s == bT) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
void xuat(int kq)
{
    cout << kq;
}
