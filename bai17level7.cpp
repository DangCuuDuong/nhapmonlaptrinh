#include<bits/stdc++.h>
using namespace std;
void nhap(int &n);
void nhapMang(int A[], int n);
int kiemTraMangCoToanSoHoanHao(int A[], int n);
int testSoHoanHao(int bT);
void xuat(int kq);
int main()
{
    int n;
    int A[100];
    nhap(n);
    nhapMang(A, n);
    int kq = kiemTraMangCoToanSoHoanHao(A, n);
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
int kiemTraMangCoToanSoHoanHao(int A[], int n)
{
    int bT = 0;
    for (int i = 0; i < n; i++)
    {
        if (testSoHoanHao(A[i]) == 1)
        {
            bT += 1;
        }
    }
    if (bT == n)
        return 1;
    else 
        return 0;
}
int testSoHoanHao(int bT) 
{
    int s = 0;
    for (int i = 1; i < bT; i++)
    {
        if (bT % i == 0)
            s = s + i;
    }
    if (s == bT)
        return 1;
    else 
        return 0;
}
void xuat(int kq)
{
    cout << kq;
}
duongthieungu
