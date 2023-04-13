#include <bits/stdc++.h>
using namespace std;
void check(char A[]);
void xoaspace(char A[],int &n,int x);
void viethoa(char A[]);
int main()
{
    char A[100000];
    gets(A);
    check(A);
    viethoa(A);
    puts(A);
}
void check(char A[])
{
	int n=strlen(A);
	for (int i=0;i<n;i++)
	{	if (A[0] == ' ')
			xoaspace(A, n, 0);
		if (A[n - 1] == ' ')
			xoaspace(A, n, n - 1);
		if (A[i]==' ' && A[i+1]==' ')
		{
			xoaspace(A,n,i);
		}
	}
}
void xoaspace(char A[],int &n,int x)
{
	int vetrai=x;
	for(int i=vetrai;i<n;i++)
	{
		A[i]=A[i+1];
	}
	n--;
}
void viethoa(char A[])
{
	A[0]=toupper(A[0]);
}
