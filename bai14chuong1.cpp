#include <bits/stdc++.h>
using namespace std;

struct may
{
    char loai[100];
    char noisx[100];
    int tg;
};
void nhap(may &a);
void xuat(may a);
int sosanhchuoi(char a[], char b[]);
int kiemtra(may a[], int n);
void maymy(may a[], int n);

int main()
{
    may m[99];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        nhap(m[i]);
    }
    kiemtra(m, n);
    maymy(m, n);
    return 0;
}

void nhap(may &a)
{
    cin.ignore();
    gets(a.loai);
    gets(a.noisx);
    cin >> a.tg;
}

void xuat(may a)
{
    cout << a.loai << endl;
    cout << a.noisx << endl;
    cout << a.tg << endl;
}

int sosanhchuoi(char a[], char b[])
{
    int len_a = strlen(a);
    int len_b = strlen(b);
    if (len_a > len_b)
        return 1;
    else if (len_a < len_b)
        return -1;
    else
        for (int i = 0; i < len_a; i++)
            if (a[i] > b[i])
                return 1;
            else if (a[i] < b[i])
                return -1;
    return 0;
}

int kiemtra(may a[], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].tg == 1)
            tong += 1;
    }
    if (tong == 0)
        cout << "Khong co ";
    else
        cout << tong << endl;
    return tong;
}

void maymy(may a[], int n)
{
    char check[3];
    strcpy(check, "my");
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (sosanhchuoi(check, a[i].noisx) == 0)
            xuat(a[i]);
        else
            dem += 1;
    }
    if (dem == n)
        cout << "khong co" << endl;
}

