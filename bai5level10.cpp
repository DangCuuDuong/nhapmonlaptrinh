#include<iostream>
#include<string.h>
using namespace std;
void nhap (char S[]);
void tim_vi_tri_xoa(char S[]);
void xoa_khoang_trang_thua(char S[],int vitri);
void xuat (char S[]);
int main ()
{
	char S[40];
	int vitri;
	nhap (S);
	tim_vi_tri_xoa(S);
	xuat(S);
	return 0;
}
void nhap (char S[])
{
	cin.getline(S,40);
}
void xoa_khoang_trang_thua(char S[],int vitri)
{
	int lenght=strlen(S);
	for (int i=vitri;i<lenght;i++)
	{
		S[i]=S[i+1];
	}
	S[lenght-1]='\0';
}
void tim_vi_tri_xoa(char S[])
{
	int lenght=strlen(S);
	for (int i=0;i<lenght;i++)
	{
		if (S[i]==' ' && S[i+1]==' ')
		{
			xoa_khoang_trang_thua(S,i);
			i--;
		}
		if (S[0]==' ')
		{
			xoa_khoang_trang_thua(S,0);
		}
		if (S[lenght]==' ')
		{
			xoa_khoang_trang_thua(S,lenght-1);
		}
	}
}
void xuat (char S[])
{
	cout<<S;
}
