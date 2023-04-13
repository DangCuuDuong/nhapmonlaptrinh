#include <iostream>
using namespace std;
int timnhiphan(int A[],int trai,int phai,int x);
int main()
{
	int a,A[10000];
	int x;
	cin>>a;
	cin>>x;
	for (int i=0;i<a;i++)
	{
		cin>>A[i];
	}

	int kq=timnhiphan(A,0,a-1,x);
	cout<<kq;
}

int timnhiphan(int A[],int trai,int phai,int x){

	int giua=(trai+phai)/2;
	while(trai<=phai)
	{
		if(A[giua]==x)
			return giua;
		if(x>A[giua])
			return timnhiphan(A,giua+1,phai,x);
		else
			return timnhiphan(A,trai,giua-1,x);
	}
	return -1;
}

