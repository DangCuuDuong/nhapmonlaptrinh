#include<iostream>
#include<string.h>
using namespace std;
void nhap (char A[],char B[]);
int hoan_doi(char A[],char B[]);
int kiem_tra(char A[],char B[]);
void xuat (int kt);
int main ()
{
	char A[40],B[40];
	nhap (A,B);
	int kt=kiem_tra(A,B);
	xuat(kt);
	return 0;
}
void nhap (char A[],char B[])
{
	cout<<"nhap chuoi A"<<"\n";
	gets(A);
	cout<<"nhap chuoi B"<<"\n";
	gets(B);
}
int hoan_doi(char A[],char B[])
{
	if (strlen(A)>=strlen(B))
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}
int kiem_tra(char A[],char B[])
{
	char H[40];
	char U[40];
	int c=0;
	if (hoan_doi(A,B)==0)
	{
		char*strcpy(char H,char A);
		char*strcpy(char U,char B);
	}
	if (hoan_doi(A,B)==1)
	{
		char*strcpy(char H,char B);
		char*strcpy(char U,char A);
	}
	int lenghtU=strlen(U);
	int lenghtH=strlen(H);
	for (int i=0;i<lenghtU;i++)
	{
		int dem=0;
		int x=U[i];
		for (int j=0;j<lenghtH;j++)
		{
			if(x!=H[j])
			{
				dem++;
			}
		}
		if (dem!=lenghtH)
		{
			c++;
		}
	}
	if (c==lenghtU)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
void xuat (int kt)
{
	if (kt==1)
	{
		cout<<"chuoi nay la con cua chuoi kia";
	}
	if (kt==0)
	{
		cout<<"chuoi nay khong la con cua chuoi kia";
	}
}
