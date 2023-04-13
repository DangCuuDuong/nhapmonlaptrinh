#include <bits/stdc++.h>
using namespace std;

struct Date 
{
    int ngay, thang, nam;
};
void nhapDate(Date &a);
int ngaytrongthang(int thang, int nam);
int ngaytrongnam(Date a);
int lech(Date a, Date b) ;
bool check(Date a);


int main() 
{
	Date ngay1, ngay2;
	nhapDate(ngay1);
	if (!check(ngay1)) 
		{
			return 0;
		}
	nhapDate(ngay2);
		if (!check(ngay1)) 
		{
			return 0;
		}
	int ngay = lech(ngay1, ngay2);
	cout<< ngay;
	return 0;
}
void nhapDate(Date &a)
{
	cin >> a.ngay >> a.thang >> a.nam;
}
int ngaytrongthang(int thang, int nam) 
{
    if (thang == 2) 
	{
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) 
		{
            return 29;
        }
        else 
		{
            return 28;
        }
    }
    if (thang == 4 || thang == 6 || thang == 9 || thang == 11) 
	{
        return 30;
    }
    else 
	{
        return 31;
    }
}

int ngaytrongnam(Date a) 
{
    int kq = a.ngay;
    for (int i = 1; i < a.thang; i++) 
	{
        kq += ngaytrongthang(i, a.nam);
    }
    return kq;
}

int lech(Date a, Date b) 
{
    int namlech = b.nam - a.nam;
    int ngaylech = ngaytrongnam(b) - ngaytrongnam(a);
    for (int i = a.nam; i < b.nam; i++) 
	{
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) 
		{
            ngaylech += 366;
        }
        else
		 {
            ngaylech += 365;
        }
    }
    return ngaylech;
}

bool check(Date a) 
{
    if (a.thang < 1 || a.thang > 12) 
	{
        return false;
    }
    if (a.ngay < 1 || a.ngay > ngaytrongthang(a.thang, a.nam)) 
	{
        return false;
    }
    return true;
}



