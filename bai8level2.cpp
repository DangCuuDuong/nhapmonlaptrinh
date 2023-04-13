#include<bits/stdc++.h>
using namespace std;
void nhap(int &n);
int chuyen(int n, string &k);
void xuat(char kq, string k);
int main() 
{
	int n;
	string k;
	nhap(n);
	int kq = chuyen(n, k);
	xuat(kq, k);
	return 0;
}
void nhap(int &n) 
{
	cin >> n;
}
int chuyen(int n, string &k) 
{
	switch (n) 
	{
		case 0:
			k = "Khong";
			return 1;
			break;
		case 1:
			k = "Mot";
			return 1;
			break;
		case 2:
			k = "Hai";
			return 1;
			break;
		case 3:
			k = "Ba";
			return 1;
			break;
		case 4:
			k = "Bon";
			return 1;
			break;
		case 5:
			k = "Nam";
			return 1;
			break;
		case 6:
			k = "Sau";
			return 1;
			break;
		case 7:
			k = "Bay";
			return 1;
			break;
		case 8:
			k = "Tam";
			return 1;
			break;
		case 9:
			k = "Chin";
			return 1;
			break;
		deafault:
			return 0;
	}
}
void xuat(char kq, string k) 
{
	if (kq == 1) 
	{
		cout << k;
	}
	else
	{
		cout << "Khong viet duoc";
	}
}
