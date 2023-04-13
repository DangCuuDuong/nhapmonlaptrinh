#include <iostream>
using namespace std; 
void nhap(char &a);
char chu(char a);
void xuat(char kq);
int main()
{
	char a;
	nhap(a);
	char kq=chu(a);
	xuat(kq);
	return 0;
}
void nhap(char &a)
{
	cout<<"nhap chu:";
	cin>>a;
}
char chu(char a)
{
	if (a>='a' && a<='z')
		return a-32;
	if (a>='A' && a<='Z')
		return a+32;
}
void xuat(char kq)
{
	cout<<"Chu chuyen:"<<kq;
}

