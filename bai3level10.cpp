#include<iostream>
#include<string.h>
using namespace std;
void nhap (char S[]);
void dao_nguoc_chuoi(char S[]);
void xuat (char S[]);
int main ()
{
	char S[20];
	nhap (S);
	dao_nguoc_chuoi(S);
	xuat (S);
	return 0;
}
void nhap (char S[])
{
	cin>>S;
}
void dao_nguoc_chuoi(char S[])
{
	strrev(S);
}
void xuat (char S[])
{
	cout<<S;
}
