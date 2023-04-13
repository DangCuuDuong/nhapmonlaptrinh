#include<bits/stdc++.h>
using namespace std;
void nhap(int &n);
int dayFibonacci(int n);
void truyenMang(int A[], int n);
void xuat(int A[], int n);
int main()
{
    int n;
    int A[100];
    nhap(n);
    dayFibonacci(n);
    truyenMang(A, n);
    xuat(A, n);
    return 0;
}
void nhap(int &n)
{
    cin >> n;
}
int dayFibonacci(int n)
{
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    if (n == 0 || n == 1) 
        return n;
    else 
    {
        for (int i = 2; i < n; i++) 
        {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}
void truyenMang(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        A[i] = dayFibonacci(i); 
    }
}
void xuat(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
