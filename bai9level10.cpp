#include<iostream>
#include<string.h>
using namespace std;
void nhap (char S[]);
int tim_vi_tri_can_in_hoa(int A[],char S[]);
void viet_chu_hoa(int solan,int A[],char S[]);
void xuat (char S[]);
int main ()
{
	char S[40];
	int A[100];
	nhap (S);
	int solan=tim_vi_tri_can_in_hoa(A,S);
	viet_chu_hoa(solan,A,S);
	xuat(S);
	return 0;
}
void nhap (char S[])
{
	gets(S);
}
void viet_chu_hoa(int solan,int A[],char S[])
{
	int lenght=strlen(S);
	S[0]=toupper(S[0]);
	for (int i=0;i<solan;i++)
	{
		int x=A[i]+1;
		S[x]=toupper(S[x]);
	}
}
int tim_vi_tri_can_in_hoa(int A[],char S[])
{
	int dem=0;
	int lenght=strlen(S);
	for (int i=1;i<=lenght;i++)
	{
		if (S[i]==' ')
		{
			A[dem]=i;
			dem++;
		}
	}
	return dem;
}
void xuat (char S[])
{
	cout<<S;
}
