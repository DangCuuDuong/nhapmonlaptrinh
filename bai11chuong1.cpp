#include <bits/stdc++.h>
using namespace std;

struct sinhvien
{
    char MSSV[10], hoten[100];
    char namsinh[10];
    float toan, li, hoa, diemtb;
};

void nhap(sinhvien &a);
void xuat(sinhvien a);
void xuatdiem(float a);
void Bubble_Sort(sinhvien a[], int n);
void tbcaonhat(sinhvien a[], int n);
int sosanh(sinhvien a, sinhvien b);
void tb53(sinhvien a[],int n);
int sosanhchuoi(char a[], char b[]);
void lonnhat(sinhvien a[],int n);
void tim( sinhvien a[],int n);

int main()
{
    int n;
    cin >> n;
    sinhvien sv[100];
    for (int i = 0; i < n; i++)
    {
        nhap(sv[i]);
    }

    for (int i = 0; i < n; i++)
    {
        xuat(sv[i]);
    }
    cout<<endl;
    tbcaonhat(sv, n);
    cout<<endl;
    Bubble_Sort(sv, n);
	cout<<endl;

	tb53(sv,n);
	lonnhat(sv,n);
	tim(sv,n);
	return 0;
    return 0;
}

void nhap(sinhvien &a)
{
    cin.ignore(1);
    gets(a.hoten);
    gets(a.MSSV);
    gets(a.namsinh);
    float  b, c, d, e;
    cin  >> b >> c >> d >> e;

    a.toan = b;
    a.li = c;
    a.hoa = d;
    a.diemtb = e;
}

void xuat(sinhvien a)
{
    puts(a.hoten);
    puts(a.MSSV);
    puts(a.namsinh);
    xuatdiem(a.toan);
    xuatdiem(a.li);
    xuatdiem(a.hoa);
    xuatdiem(a.diemtb);
}

void xuatdiem(float a)
{
    if (a - (int)a > 0)
        cout << a << endl;
    else
        cout << a << ".0" << endl;
}

void tbcaonhat(sinhvien a[], int n)
{
    sinhvien max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i].diemtb > max.diemtb)
            max = a[i];
    }
    xuat(max);
}

int sosanh(sinhvien a, sinhvien b)
{
    if (a.diemtb < b.diemtb)
        return 0;

    else if (a.toan < b.toan)
        return 2;

}

void Bubble_Sort(sinhvien a[],int n)
{
	int i, j;
	for (i=0; i<n-1; i++)
	{
		for (j=n-1; j>i; j--)
		{
			if(sosanh(a[j], a[j-1])==0)
			{
				swap(a[j], a[j-1]);
			}
		}
	}
		for (i=0; i<n; i++)
	{
		xuat(a[i]);
	}
	
	
		for (i=0; i<n-1; i++)
	{
		for (j=n-1; j>i; j--)
		{
			if(sosanh(a[j], a[j-1])==2)
			{
				swap(a[j], a[j-1]);
			}
		}
	}
	cout<<endl;
		for (i=n-1; i>-1; i--)
	{
		xuat(a[i]);
	}
}
void tb53(sinhvien a[],int n)
{
	for(int i = 0; i < n; i++)
		if (a[i].diemtb > 5.0)
			if (a[i].toan >= 3.0 && a[i].li >= 3.0 && a[i].hoa >= 3.0)
				xuat(a[i]);
}
void lonnhat(sinhvien a[],int n)
{
	sinhvien max = a[0];
	for(int i = 1; i < n; i++)
		if (sosanhchuoi(a[i].namsinh, max.namsinh) == -1)
			max = a[i];
	for (int i = 0; i < n; i++)
		if(sosanhchuoi(a[i].namsinh, max.namsinh) == 0)
			xuat(a[i]);	
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
void tim( sinhvien a[],int n)
{
	char tim[100];
	cin >> tim;
	for (int i = 0; i < n; i++)
		if (sosanhchuoi(tim, a[i].hoten) == 0)
			xuat(a[i]);
}
