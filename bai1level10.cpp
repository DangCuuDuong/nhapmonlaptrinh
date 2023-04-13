#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
void nhap (char S[]);
int chuyen_he_16_sang_he_10(int n,char S[]);
void xuat (int kq);
int main ()
{
	char S[20],KQ[20];
	int n;
	nhap (S);
	int kq =chuyen_he_16_sang_he_10(n,S);
	xuat (kq);
	return 0;
}
void nhap (char S[])
{
	cin>>S;
}
int chuyen_he_16_sang_he_10(int n,char S[])
{
	strrev(S);
	int size=strlen(S);
	n=0;
	for (int i=0;i<size;i++)
	{
		if (S[i]>='0' && S[i]<='9')
		{
			n=n+(S[i]-'0')*pow(16,i);
		}
		else 
		{
			n=n+(S[i]-'A'+10)*pow(16,i);
		}
	}
	return n;
}
void xuat (int kq)
{
	cout<<kq;
}
