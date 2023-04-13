#include <bits/stdc++.h>
using namespace std;

struct hang
{
	char mahang[100];
	char tenhang[100];
	int sl,gia,ton,tg;
};
void nhap(hang &a);
void xuat(hang a);
void sapxep(hang a[],int n);
void giatiencao(hang a[],int n);
void tgbb(hang a[],int n);

int main()
{
	hang h[1000];
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
    {
        nhap(h[i]);
    }
    sapxep(h,n);
    xuat(h[n-1]);
    xuat(h[0]);
    giatiencao(h,n);
    tgbb(h,n);
    for (int i = 0; i < n; i++)
    {
        xuat(h[i]);
    }
    return 0;
}
void nhap(hang &a)
{
    cin.ignore();
    gets(a.mahang);
    gets(a.tenhang);
    cin >> a.sl>>a.gia>>a.ton>>a.tg;
}
void xuat(hang a)
{
    cout << a.mahang << endl;
    cout << a.tenhang << endl;
    cout << a.sl << endl;
    cout << a.gia<< endl;
    cout << a.ton << endl;
    cout << a.tg << endl;

}
void sapxep(hang a[],int n)
{
	int i, j;
	for (i=0; i<n-1; i++)
	{
		for (j=n-1; j>i; j--)
		{
			if(a[j].ton<a[j-1].ton)
			{
				swap(a[j], a[j-1]);
			}
		}
	}
}
void giatiencao(hang a[],int n)
{
	hang max= a[0];
	for (int i = 1; i < n; i++)
		if (a[i].gia > max.gia)
			max = a[i];
	xuat(max);
}
void tgbb(hang a[],int n)
{
	for (int i = 0; i < n; i++)
		if (a[i].tg > 12)
			xuat(a[i]);
}
