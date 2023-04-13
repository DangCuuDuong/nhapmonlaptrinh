#include<iostream>
using namespace std;
void nhap (int &nA,int &nB,int A[],int B[]);
int kiem_tra_A_phai_con_cua_B_khong(int nA,int nB,int A[],int B[]);
void xuat (int kq);
int main ()
{
	int nA,nB,A[100],B[100];
	nhap (nA,nB,A,B);
	int kt=kiem_tra_A_phai_con_cua_B_khong(nA,nB,A,B);
	xuat (kt);
	return 0;
}
void nhap (int &nA,int &nB,int A[],int B[])
{
	cout<<"nhap nA ";
	cin>>nA;
	cout<<"nhap A[i] "<<"\n";
	for (int i=0;i<nA;i++)
	{
		cin>>A[i];
	}
	cout<<"nhap nB ";
	cin>>nB;
	cout<<"nhap B[i] "<<"\n";
	for (int i=0;i<nB;i++)
	{
		cin>>B[i];
	}
}
int kiem_tra_A_phai_con_cua_B_khong(int nA,int nB,int A[],int B[])
{
	int j;int k=0;
	for (int i=0;i<nA;i++)
	{
		int xet=A[i];
		for (j=0;j<nB;j++)
		{
			if (xet==B[j])
			{
				break;
			}
		}
		if (j!=nB)
		{
			k++;
		}
	}
	if (k==nA)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
void xuat (int kq)
{
	if (kq==1)
	{
		cout<<"tat ca phan tu trong a deu co trong b";
	}
	if (kq==0)
	{
		cout<<"co phan tu trong a khong co trong b";
	}
}


