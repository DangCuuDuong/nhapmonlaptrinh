#include<bits/stdc++.h>
using namespace std;
void nhap(int &n, int &x, int &y);
void nhapMang(int A[], int n);
void timGiaTri(int A[], int n, int x, int y);
void xuat(int s);
int main()
{
    int n, x, y;
    int A[100];
    nhap(n, x, y);
    nhapMang(A, n);
    timGiaTri(A, n, x, y);
    return 0;
}
void nhap(int &n, int &x, int &y)
{
    cin >> n >> x >> y;
}
void nhapMang(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
void timGiaTri(int A[], int n, int x, int y)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] >= x && A[i] <= y && A[i] % 2 == 0)
        {
            s = A[i];
            xuat(s);
        }
    }
}
void xuat(int s)
{
    cout << s << " ";
}
