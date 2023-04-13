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
void quydongPS(phanso a, phanso b);
void Bubble_Sort(phanso a[],int n);
int sosanhPS(phanso a, phanso b);

int main()
{
    int n;
	phanso PS[100];
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
    xuatPS(s);
    cout<<endl;
    Bubble_Sort(PS, n);
    cout<<"nho nhat:";
    xuatPS(PS[0]);
	cout << endl;
    cout<<"lon nhat:";
    xuatPS(PS[n-1]);
    cout << endl;
    for(int i=0;i<n;i++)
    {
        xuatPS(PS[i]);
        cout<<endl;
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
phanso hieu(phanso a, phanso b)
{
	phanso hieu;
	hieu.tu=a.tu*b.mau-a.mau*b.tu;
	hieu.mau=a.mau*b.mau;
	rutgon(hieu);
	return hieu;
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
int sosanhPS(phanso a, phanso b)
{
	phanso qd1, qd2;
	qd1.tu = a.tu * b.mau;
	qd2.tu = b.tu * a.mau;
	if (qd1.tu>qd2.tu)
		return 0;
	if (qd1.tu==qd2.tu)
		return 0;
	if (qd1.tu<qd2.tu)
		return -1;
}

void Bubble_Sort(phanso a[],int n)
{
	int i, j;
	for (i=0; i<n-1; i++)
	{
		for (j=n-1; j>i; j--)
		{
			if(sosanhPS(a[j], a[j-1])==-1)
			{
				swap(a[j], a[j-1]);
			}
		}
	}
}


