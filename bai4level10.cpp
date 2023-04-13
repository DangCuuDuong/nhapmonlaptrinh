#include<iostream>
#include<string.h>
using namespace std;
void nhap (char S[]);
int dem_so_tu_cua_chuoi(char S[]);
void xuat (int sotu);
int main ()
{
	char S[20];
	nhap (S);
	int sotu=dem_so_tu_cua_chuoi(S);
	xuat(sotu);
	return 0;
}
void nhap (char S[])
{
	gets(S);
}
int dem_so_tu_cua_chuoi(char S[])
{
	int khoangtrang=0;
	int size=strlen(S);
	for (int i=0;i<size;i++)
	{
		if (isspace(S[i]))
		{
			khoangtrang++;
		}
	}
	int dem=size-khoangtrang;
	return dem;
}
void xuat (int sotu)
{
	cout<<sotu;
}
