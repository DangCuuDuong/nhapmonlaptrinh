#include <bits/stdc++.h>

using namespace std;

struct sach
{
    char masosach[10];
    char tacgia[100];
    char tensach[31];
    int soluong;
};

void nhap(sach &a);
void xuat(sach a);
int sosanhchuoi(char a[], char b[]);
void thongtin(sach a[], int n);
int tong(sach a[], int n);

int main()
{
    sach s[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        nhap(s[i]);
    }
    thongtin(s, n);
    int t = tong(s, n);
    return 0;
}

void nhap(sach &a)
{
    cin.ignore();
    gets(a.masosach);
    gets(a.tensach);
    gets(a.tacgia);
    cin >> a.soluong;
}

void xuat(sach a)
{
    cout << a.masosach << endl;
    cout  << a.tensach << endl;
    cout  << a.tacgia << endl;
    cout  << a.soluong << endl;
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

void thongtin(sach a[], int n)
{
    cin.ignore();
    char ten[99];
    cout << "Nhap ten sach can tim: ";
    gets(ten);
    int dem = 0;

	for (int i=0;i<n;i++)
	{
		if (sosanhchuoi(ten, a[i].tensach) == 0)
			xuat(a[i]);
		else
			dem += 1;
	}
	if (dem==n)
		cout<<"khong tim thay"<<endl;
}
int tong(sach a[],int n)
{
	sach tong=a[0];
	for (int i = 1; i < n; i++)
		tong.soluong += a[i].soluong;
	if (tong.soluong  == 0)
		cout << "Khong co sach";
	else
		cout << tong.soluong <<endl;
}

