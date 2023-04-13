#include<iostream>
using namespace std;
void nhap(int &n);
bool songuyento(int n);
void phantichthuasonguyento(int n);
void xuat(int n);
int main()
{
	int n;
	nhap(n);
	phantichthuasonguyento(n);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
bool songuyento(int n)
{
	int s=0;
	for (int i=1; i<=n; i=i+1)
		if (n%i==0)
			s=s+1;
	if (s==2)
		return true;
	else
		return false;
}
void phantichthuasonguyento(int n)
{
	for (int i=1; i<=n; i=i+1)
	{
		while (n%i==0 && songuyento(i))
		{
			xuat(i);
			n=n/i;
		}
	}
}
void xuat(int x)
{
	cout<<x<<" ";
}
