#include <bits/stdc++.h>
using namespace std;
void nhap(int A[],int m);
void tronmang(int A[],int B[],int nA,int nB,int C[],int &nC);
void xuat( int C[],int z);
int main()

{
	int A[100],nA,nB,B[100],C[200],nC;
	cin>>nA;
	nB=nA;
	nhap(A,nA);
	nhap(B,nB);
	tronmang(A,B,nA,nB,C,nC);
	xuat(C,nC);
	return 0;
	

}
void nhap(int A[],int m)
{	
	for (int i = 0; i < m; i++)
        cin >> A[i];
}
void tronmang(int A[],int B[],int nA,int nB,int C[],int &nC)
{
	int iA=0;
	int iB=0;
	nC=0;
	while (iA<nA && iB<nB)
	{
		C[nC++]=A[iA++];
		C[nC++]=B[iB++];
	}
	while (iA<nA)
		C[nC++]=A[iA++];
	while (iB<nB)
		C[nC++]=B[iB++];
}
void xuat(int a[],int n)
{
	for (int i=0;i<n;i++)
		cout<<a[i]<<"  ";
}
