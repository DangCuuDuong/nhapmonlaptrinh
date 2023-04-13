#include <bits/stdc++.h>
using namespace std;
void nhap(int D[], int &n);
void them(int D[], int &n, int x, int vT);
void xoa(int D[], int &n, int vT);
void sua(int D[], int n, int x, int vT);
void tim(int D[], int n, int x);
void xuat(int D[], int n);
int main()
{
	int D[100000];
	int n, a, b, x, y, z, vT;
	nhap(D, n);
	cin >> vT >> x >>b >> a >> y >> z;
	them(D, n, x, vT);
	xuat(D, n);
	sua(D, n, a, b);
	xuat(D, n);
	xoa(D,n, y);
	xuat(D, n);
	tim(D, n, z);
	return 0;
}
void nhap(int D[], int &n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> D[i];
}
void them(int D[], int &n, int x, int vT)
{
	for (int i = n; i > vT; i--)
	{
		D[i] = D[i - 1];
	}
	n += 1;
	D[vT] = x;

}
void xoa(int D[], int &n, int vT)
{
	for (int i = vT; i < n; i++)
	{
		D[i] = D[i + 1];
	}
	n -= 1;

}
void sua(int D[], int n, int x, int vT)
{
	D[vT] = x;

}
void tim(int D[], int n, int x)
{
	D[n] = x;
	int i = 0;
	while (D[i] != x)
		i++;
	if (i < n)
		cout << i;
	else
		cout << -1;
}
void xuat(int D[], int n)
{
	for (int i = 0; i < n; i++)
		cout << D[i] << " ";
	cout << "\n";
}
