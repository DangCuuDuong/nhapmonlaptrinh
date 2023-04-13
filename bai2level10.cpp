#include<iostream>
#include<string.h>
using namespace std;
void nhap (int &n);
void doi_sang_he_nhi_phan(int n,char KQ2[]);
void doi_sang_he_bat_phan(int n,char KQ8[]);
void doi_sang_he_thap_luc_phan (int n,char KQ16[]);
void chon_thao_tac(int n,char KQ2[],char KQ8[],char KQ16[]);
void xuat (char KQ2[],char KQ8[],char KQ16[]);
int main ()
{
	int n,tt;
	char KQ2[20],KQ8[20],KQ16[20];
	nhap (n);
	doi_sang_he_nhi_phan(n,KQ2);
	doi_sang_he_bat_phan(n,KQ8);
	doi_sang_he_thap_luc_phan (n,KQ16);
	xuat (KQ2,KQ8,KQ16);
	return 0;
}
void nhap (int &n)
{
	cout<<"nhap n ";
	cin>>n;
}
void doi_sang_he_nhi_phan(int n,char KQ2[])
{
	int x=0;
	int dem=0;
	while (n!=0)
	{
		x=n%2;
		n=n/2;
		KQ2[dem]=x+'0';
		dem++;
	}
	KQ2[dem]='\0';
	strrev(KQ2);
}
void doi_sang_he_bat_phan(int n,char KQ8[])
{
	int x=0;
	int dem=0;
	while (n!=0)
	{
		x=n%8;
		n=n/8;
		KQ8[dem]=x+'0';
		dem++;
	}
	KQ8[dem]='\0';
	strrev(KQ8);
}
void doi_sang_he_thap_luc_phan (int n,char KQ16[])
{
	int x=0;
	int dem=0;
	while (n!=0)
	{
		x=n%16;
		n=n/16;
		if (x>=0&&x<=9)
		{
			KQ16[dem]=x+'0';
			dem++;
		}
		else
		{
			KQ16[dem]=x+'A'-10;
			dem++;
		}
	}
	KQ16[dem]='\0';
	strrev(KQ16);
}
void xuat (char KQ2[],char KQ8[],char KQ16[])
{
	cout<<KQ2<<"\n";
	cout<<KQ8<<"\n";
	cout<<KQ16<<"\n";
}

