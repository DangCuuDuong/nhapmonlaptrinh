#include<iostream>
#include<string.h>
using namespace std;
void nhap (char S[]);
int tong_ky_tu_la_so_trong_chuoi(char S[]);
void xuat (int kq);
int main()
{
	char S[40];
	nhap (S);
	int kq=tong_ky_tu_la_so_trong_chuoi(S);
	xuat(kq);
	return 0;
}
void nhap (char S[])
{
	gets(S);
}
int tong_ky_tu_la_so_trong_chuoi(char S[])
{
	int tong=0;
	int lenght=strlen(S);
	for (int i=0;i<lenght;i++)
	{
		if (S[i]>='0' && S[i]<='9')
		{
			tong=tong+(S[i]-'0');
			cout<<tong<<"\t";
		}
	}
	return tong;
}
void xuat (int kq)
{
	cout<<kq;
}
