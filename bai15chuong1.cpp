#include <bits/stdc++.h>
using namespace std;

struct linhkien
{
	char tenlinhkien[100];
	char quycach[100];
	char loai[2];
	int gia1,gia2;
};
void nhap(linhkien &a);
void xuat(linhkien a);
void sapxep(linhkien a[],int n);
void linhkienloaiA(linhkien a[], int n);
int sosanhchuoi(char a[], char b[]);

int main()
{
	linhkien lk[1000];
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
    {
        nhap(lk[i]);
    }
    sapxep(lk,n);
    for (int i = 0; i < n; i++)
    {
        xuat(lk[i]);
    }
    linhkienloaiA(lk ,n);
    return 0;
}

void nhap(linhkien &a)
{
    cin.ignore();
    gets(a.tenlinhkien);
    gets(a.quycach);
    gets(a.loai);
    cin >> a.gia1>>a.gia2;
}
void xuat(linhkien a)
{
    cout << a.tenlinhkien << endl;
    cout << a.quycach << endl;
    cout << a.loai << endl;
    cout << a.gia1  << endl;
    cout << a.gia2 << endl;

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
void sapxep(linhkien a[],int n)
{
	int i, j;
	for (i=0; i<n-1; i++)
	{
		for (j=n-1; j>i; j--)
		{
			int x = sosanhchuoi(a[j].loai, a[j + 1].loai);
            if (x == 0)
            {
                if (sosanhchuoi(a[j].tenlinhkien, a[j + 1].tenlinhkien) == 1)
                    swap(a[j], a[j + 1]);
            }
            	if (x == 1)
                swap(a[j], a[j + 1]);
		}
	}
}
void linhkienloaiA(linhkien a[],int n)
{
	int dem = 0;
	char A[2] = {'a'};
	for (int i = 0; i < n; i++)
	{
		if (a[i].loai == a)
			dem += 1;
	}
	if (dem == 10)
		cout << "co the";
	else
		cout << "khong the";
}
