#include <bits/stdc++.h>
using namespace std;

struct diem
{
    double x, y;
};

void nhap(diem &a);
void xuat(diem a);
diem hoanh(diem a);
diem tung(diem a);
diem tam(diem a);
double khoangcach(diem a, diem b);

int main()
{
    diem d[2];
    nhap(d[0]);
    nhap(d[1]);

    diem a = hoanh(d[0]);
    xuat(a);
    diem b = hoanh(d[1]);
    xuat(b);

    diem c = tung(d[0]);
    xuat(c);
    diem d1 = tung(d[1]);
    xuat(d1);

    diem e = tam(d[0]);
    xuat(e);
    diem f = tam(d[1]);
    xuat(f);

    double l = khoangcach(d[0], d[1]);
    cout << l;
}

void nhap(diem &a)
{
    cin >> a.x >> a.y;
}

void xuat(diem a)
{
    cout << a.x << ' ' << a.y << endl;
}

diem hoanh(diem a)
{
    double x = a.x;
    double y = -a.y;
    return {x, y};
}

diem tung(diem a)
{
    double x = -a.x;
    double y = a.y;
    return {x, y};
}

diem tam(diem a)
{
    double x = -a.x;
    double y = -a.y;
    return {x, y};
}

double khoangcach(diem a, diem b)
{
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

