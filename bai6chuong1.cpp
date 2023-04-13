#include <bits/stdc++.h>
using namespace std;

struct phanso
{
    long long  tu, mau;
};

void nhapPS(phanso &a);
void xuatPS(phanso a);
void rutgon(phanso &a);
phanso tong(phanso a, phanso b);
phanso hieu(phanso a, phanso b);
phanso tich(phanso a, phanso b);
phanso thuong(phanso a, phanso b);
void quydongPS(phanso a, phanso b);
void sosanhPS(phanso a, phanso b);

int main()
{
    phanso PS[2];
    nhapPS(PS[0]);
    nhapPS(PS[1]);

    phanso s = tong(PS[0], PS[1]);
    xuatPS(s);
	cout<<endl;
    phanso h = hieu(PS[0], PS[1]);
    xuatPS(h);
	cout<<endl;
    phanso t = tich(PS[0], PS[1]);
    xuatPS(t);
	cout<<endl;
    phanso th = thuong(PS[0], PS[1]);
    xuatPS(th);
	cout<<endl;
	quydongPS(PS[0], PS[1]);
	sosanhPS(PS[0], PS[1]);
    return 0;
}


void nhapPS(phanso &a)
{
	cin>>a.tu>>a.mau;
	while(a.mau==0)
		cin>>a.mau;
}
void xuatPS(phanso a)
{
	if (a.mau==0)
		cout<<a.tu;
	if (a.mau!=0)
		cout<<a.tu<<"/"<<a.mau;
}
void rutgon(phanso &a)
{
	int x=abs(a.tu);
	int y=abs(a.mau);
	int ucln=__gcd(x,y);
	a.tu/=ucln;
	a.mau/=ucln;
}
phanso tong(phanso a, phanso b)
{
	phanso tong;
	tong.tu=a.tu*b.mau+a.mau*b.tu;
	tong.mau=a.mau*b.mau;
	rutgon(tong);
	return tong;
}
phanso hieu(phanso a, phanso b)
{
	phanso hieu;
	hieu.tu=a.tu*b.mau-a.mau*b.tu;
	hieu.mau=a.mau*b.mau;
	rutgon(hieu);
	return hieu;
}
phanso tich(phanso a, phanso b)
{
	phanso tich;
	tich.tu=a.tu*b.tu;
	tich.mau=a.mau*b.mau;
	rutgon(tich);
	return tich;
}
phanso thuong(phanso a, phanso b)
{
    phanso thuong;
    
    thuong.tu = a.tu * b.mau;
    thuong.mau = a.mau * b.tu;
    rutgon(thuong);
    return thuong;
}
void quydongPS(phanso a, phanso b)
{
	if (a.mau == b.mau)
	{
		xuatPS(a);
		xuatPS(b);
	}
	else
	{
		phanso qd1, qd2;
		qd1.tu = a.tu * b.mau;
		qd1.mau = a.mau * b.mau;
		qd2.tu = b.tu * a.mau;
		qd2.mau = qd1.mau;
		xuatPS(qd1);
		cout<<"    ";
		xuatPS(qd2);
		cout<<endl;

	}
}
void sosanhPS(phanso a, phanso b)
{
	phanso qd1, qd2;
	qd1.tu = a.tu * b.mau;
	qd2.tu = b.tu * a.mau;
	if (qd1.tu>qd2.tu)
		cout<<"phan so 1 lon hon";
	if (qd1.tu==qd2.tu)
		cout<<"hai phan so bang nhau";
	if (qd1.tu<qd2.tu)
		cout<<"phan so 2 lon hon";
}

