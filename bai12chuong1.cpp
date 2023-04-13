#include <iostream>
#include <cstring>
using namespace std;

struct video
{
    char ten[100];
    char theloai[100];
    char daodien[100];
    char nam[100];
    char nu[100];
    char hang[100];
    int year;
};

void nhap(video &a);
void xuat(video a);
void tim_the_loai(video a[], int n);
void tim_the_nam(video a[], int n);
void tim_the_dao_dien(video a[], int n);

int main()
{
    video v[100];
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        nhap(v[i]);
    }
    tim_the_loai(v, n);
    tim_the_nam(v, n);
    tim_the_dao_dien(v, n);
    return 0;
}

void nhap(video &a)
{
    cin.ignore();
    gets(a.ten);
    gets(a.theloai);
    gets(a.daodien);
    gets(a.nam);
    gets(a.nu);
    cin >> a.year;
    gets(a.hang);

}
void xuat(video a)
{
    puts(a.ten);
    puts(a.theloai);
    puts(a.daodien);
    puts(a.nam);
    puts(a.nu);
	cout << a.year << endl;   
	puts(a.hang);
	cout << endl;

}
void tim_the_loai(video a[],int n)
{
    char theloai[100];
    cin.ignore();
    gets(theloai);

    for(int i = 0; i < n; i++) 
    {
        if(strcmp(theloai, a[i].theloai) == 0) 
        {
            xuat(a[i]);
        }
    }
}


void tim_the_nam(video a[],int n)
{
    char nam[100];
    cin.ignore();
    gets(nam);

    for(int i = 0; i < n; i++) 
    {
        if(strcmp(nam, a[i].nam) == 0) 
        {
            xuat(a[i]);
        }
    }
}


void tim_the_dao_dien(video a[],int n)
{
    char daodien[100];
    cin.ignore();
    gets(daodien);

    for(int i = 0; i < n; i++) 
    {
        if(strcmp(daodien, a[i].daodien) == 0) 
        {
            xuat(a[i]);
        }
    }
}



