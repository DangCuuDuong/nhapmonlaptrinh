#include <bits/stdc++.h>

using namespace std;

struct thoigian 
{
	int gio,phut,giay;
	
};
void nhapTG(thoigian &a);
void xuatTG(thoigian a );
char checkTG(thoigian &a);
long DoiThoiGian(thoigian a);
thoigian lech(thoigian a, thoigian b);
int main()
{
	thoigian TG[2];
	nhapTG(TG[0]);
	nhapTG(TG[1]);
	thoigian l=lech(TG[0],TG[1]);
	xuatTG(l);
	return 0;
}
void nhapTG(thoigian &a)
{
	cin>>a.giay>>a.phut>>a.gio;
}
void xuatTG(thoigian a )
{
	
	cout<<a.gio<<","<<a.phut<<","<<a.giay;
}
char checkTG(thoigian &a)
{
	if(a.gio>=0 && a.gio<=23 && a.phut>=0 && a.phut<=59 && a.giay>=0 && a.giay<=59)
		return true;
	return false;
}
long DoiThoiGian(thoigian a)
{
	return (a.gio*3600 + a.phut*60 + a.giay);
}
thoigian lech(thoigian a, thoigian b)
{
	thoigian lech;
	int dolech;
	if (checkTG (a) && checkTG(b))
	{
		dolech=DoiThoiGian(a)-DoiThoiGian(b);
		lech.gio=dolech/3600;
		dolech-=lech.gio*3600;
		lech.phut=dolech/60;
		lech.giay=dolech%60;
	}
	
	return lech;
}
