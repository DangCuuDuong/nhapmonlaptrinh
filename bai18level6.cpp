#include<bits/stdc++.h>
using namespace std;
void nhap(int &n);
void nhapMang(int A[], int n);
void xuat(int A[], int n);
int main()
{
    int n;
    int A[100];
    nhap(n);
    nhapMang(A, n);
    xuat(A, n);
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
void xuat(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[n - i - 1] << " ";
    }
}
