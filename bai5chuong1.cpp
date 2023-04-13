#include <bits/stdc++.h>

using namespace std;

struct sophuc
{
	long long thuc,ao;
};

void nhapSP(sophuc &a);
void xuatSP(sophuc a);
sophuc tong(sophuc a, sophuc b);
sophuc hieu(sophuc a, sophuc b);
sophuc tich(sophuc a, sophuc b);

int main()
{
	sophuc SP[2];
	nhapSP(SP[0]);
	nhapSP(SP[1]);
	
	sophuc s = tong(SP[0], SP[1]);
    xuatSP(s);
	cout<<endl;
    sophuc h = hieu(SP[0], SP[1]);
    xuatSP(h);
	cout<<endl;
    sophuc t = tich(SP[0], SP[1]);
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
sophuc hieu(sophuc a, sophuc b)
{
	sophuc hieu;
	hieu.thuc=	a.thuc-b.thuc;
	hieu.ao= a.ao-b.ao;
	return hieu;
}
sophuc tich(sophuc a, sophuc b)
{
	sophuc tich;
	tich.thuc=	(a.thuc*b.thuc)-(a.ao*b.ao);
	tich.ao= (a.thuc*b.ao)+(b.thuc*a.ao);
	return tich;
}
