#include <bits/stdc++.h>
using namespace std;
struct honso
{
	long long nguyen,tu,mau;
};
void nhapHS(honso &a);
void xuatHS(honso &a);
void rutgon(honso &a);
honso doiso(honso a);
honso tong(honso a, honso b);
honso tich(honso a, honso b);
void xuatPS(honso &a);
int main()
{
	honso HS[2];
	nhapHS(HS[0]);
	nhapHS(HS[1]);
	honso x =doiso(HS[0]);
	xuatPS(x);
	cout<<endl;
	honso y =doiso(HS[1]);
	xuatPS(y);
	cout<<endl;
	honso s = tong(HS[0], HS[1]);
    xuatHS(s);
	cout<<endl;
    honso t = tich(HS[0], HS[1]);
    xuatHS(t);
	cout<<endl;
}
void nhapHS(honso &a)
{
	cin>>a.nguyen>>a.tu>>a.mau;
	while(a.mau==0)
		cin>>a.mau;
}
void xuatHS(honso &a)
{
	a.nguyen=a.tu/a.mau;
	a.tu-=a.nguyen*a.mau;
	cout<<a.nguyen<<" "<<a.tu<<" "<<a.mau;
}
void xuatPS(honso &a)
{

	a.tu+=a.mau*a.nguyen;
	cout<<a.tu<<" "<<a.mau;
}
void rutgon(honso &a)
{
	int x=abs(a.tu);
	int y=abs(a.mau);
	int ucln=__gcd(x,y);
	a.tu/=ucln;
	a.mau/=ucln;
}
honso doiso(honso a)
{
	honso moi;
	moi.nguyen=0;
	moi.tu=a.tu+(a.mau*a.nguyen);
	moi.mau=a.mau;
	rutgon(moi);
	return moi;
}
honso tong(honso a, honso b)
{
	honso tong;
	honso x=doiso(a);
	honso y=doiso(b);
	tong.tu=x.tu*y.mau+x.mau*y.tu;
	tong.mau=x.mau*y.mau;
	tong.nguyen=0;
	rutgon(tong);
	return tong;
}
honso tich(honso a, honso b)
{
	honso tich;
	honso x=doiso(a);
	honso y=doiso(b);
	tich.tu=x.tu*y.tu;
	tich.mau=x.mau*y.mau;
	tich.nguyen=0;
	rutgon(tich);
	return tich;
}
