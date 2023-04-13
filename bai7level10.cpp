#include<iostream>
#include<string.h>
using namespace std;
void nhap (int &pos,int &tt,char S[]);
void trich_n_phan_tu_dau_tien(int pos,char S[],char A[]);
void trich_n_phan_tu_cuoi_cung(int pos,char S[],char A[]);
void chon_thao_tac(int tt,int pos,char S[],char A[]);
void xuat(char A[]);
int main ()
{
	int pos,tt;
	char S[40],A[40];
	nhap (pos,tt,S);
	chon_thao_tac(tt,pos,S,A);
	xuat(A);
	return 0;
}
void nhap (int &pos,int &tt,char S[])
{
	cout<<"nhap chuoi "<<"\n";
	gets(S);
	cout<<"nhap thao thac can thuc hien ";
	cin>>tt;
	cout<<"nhap vi tri can trich ";
	cin>>pos;
}
void trich_n_phan_tu_dau_tien(int pos,char S[],char A[])
{
	int dem=0;
	for (int i=0;i<pos;i++)
	{
		A[dem]=S[i];
		dem++;
	}
}
void trich_n_phan_tu_cuoi_cung(int pos,char S[],char A[])
{
	int dem=0;
	int lenght=strlen(S);
	for (int i=pos;i<lenght;i++)
	{
		A[dem]=S[i];
		dem++;
	}
}
void chon_thao_tac(int tt,int pos,char S[],char A[])
{
	if (tt==1)
	{
		trich_n_phan_tu_dau_tien(pos,S,A);
	}
	if (tt==2)
	{
		trich_n_phan_tu_cuoi_cung(pos,S,A);
	}
}
void xuat(char A[])
{
	cout<<A;
}

