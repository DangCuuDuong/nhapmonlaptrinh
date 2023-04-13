#include <bits/stdc++.h>

using namespace std;

struct sophuc
{
	long long thuc,ao;
};

void nhapSP(sophuc &a);
void xuatSP(sophuc a);
sophuc tong(sophuc a, sophuc b);
sophuc tich(sophuc a, sophuc b);

int main()
{	int n;
	sophuc SP[100];
	cin>>n;
	for (int i=0;i<n;i++)
	{
		nhapSP(SP[i]);
	}
	sophuc s = {0, 0};
	for (int i=0;i<n;i++)
	{
		s = tong(s, SP[i]);
	}
    xuatSP(s);
	cout<<endl;
	
	sophuc t = {1, 0};
	for (int i=0;i<n;i++)
	{
		t = tich(t, SP[i]);
	}
    xuatSP(t);
	cout<<endl;
    return 0;

}
void nhapSP(sophuc &a)
{
	cin>>a.thuc>>a.ao;
}
void xuatSP(sophuc a)
{
	if (a.ao>0)
	cout<<a.thuc<<"+"<<a.ao<<"i";
	else
	cout<<a.thuc<<a.ao<<"i";
}
sophuc tong(sophuc a, sophuc b)
{
	sophuc tong;
	tong.thuc=	a.thuc+b.thuc;
	tong.ao= a.ao+b.ao;
	return tong;
}

sophuc tich(sophuc a, sophuc b)
{
	sophuc tich;
	tich.thuc=	(a.thuc*b.thuc)-(a.ao*b.ao);
	tich.ao= (a.thuc*b.ao)+(b.thuc*a.ao);
	return tich;
}
