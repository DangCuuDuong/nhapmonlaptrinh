#include<bits/stdc++.h>
using namespace std;
void nhap(int &n);
void nhapMang(int A[], int n);
int kiemTraMangCoToanSoNgTo(int A[], int n);
int testSoNguyenTo(int bT);
void xuat(int kq);
int main()
{
    int n;
    int A[100];
    nhap(n);
    nhapMang(A, n);
    int kq = kiemTraMangCoToanSoNgTo(A, n);
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
int kiemTraMangCoToanSoNgTo(int A[], int n)
{
    int bT = 0;
    for (int i = 0; i < n; i++)
    {
        if (testSoNguyenTo(A[i]) == 1)
        {
            bT += 1;
        }
    }
    if (bT == n)
        return 1;
    else 
        return 0;
}
int testSoNguyenTo(int bT) 
{
    int s = 1;
    if (bT < 2) 
        s = 0;
    for (int i = 2; i < bT; i ++) 
    {
        if (bT % i == 0)
            s = 0; 
    }
    return s;
}
void xuat(int kq)
{
    cout << kq;
}
