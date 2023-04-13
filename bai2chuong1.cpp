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
void quydongPS(phanso a, phanso b);
phanso tich(phanso a, phanso b);
void sosanhPS(phanso a[],int n);
phanso nghichdao(phanso a);

int main()
{
    int n;
	phanso PS[100];
	phanso gan;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		nhapPS(PS[i]);
	}

        phanso s = {0,1};
    for (int i=0;i<n;i++)
    {
        s=tong(s,PS[i]);
    }
        phanso t = {1,1};
    for (int i=0;i<n;i++)
    {
        t=tich(t,PS[i]);
    }
    xuatPS(s);
    cout << endl;
    xuatPS(t);
    cout<<endl;

    cout<<"lon nhat:";
	sosanhPS(PS, n);
    cout << endl;
    for (int i=0;i<n;i++)
    {
        gan=nghichdao(PS[i]);
        xuatPS(gan);
        cout << endl;
    }
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

	}
}
void sosanhPS(phanso a[],int n)
{
	phanso qd1,qd2,max;
	max=a[0];
	for(int i=0;i<n;i++)
	{
		qd1.tu = max.tu * a[i].mau;
		qd2.tu = a[i].tu * max.mau;
		if (qd1.tu<qd2.tu)
		{ 
			max=a[i];
		}
	}
	xuatPS(max);
}


phanso tich(phanso a, phanso b)
{
	phanso tich;
	tich.tu=a.tu*b.tu;
	tich.mau=a.mau*b.mau;
	rutgon(tich);
	return tich;
}
phanso nghichdao(phanso a)
{
	phanso dao;
	dao.tu=a.mau;
	dao.mau=a.tu;
	return dao;
}

