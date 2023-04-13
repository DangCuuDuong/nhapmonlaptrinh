#include <bits/stdc++.h>
using namespace std;
void xuat();
int main()
{
	xuat();
	return 0;
}
void xuat()
{
	fstream chan("SOCHAN.INP", ios::out);
	int n =100;
	int dem = 0;
	for (int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			chan<<i<<" ";
			cout<<i<<" ";
			dem+=1;

		}
		if((dem+1)%30==0)
		{
			cout<<endl;
		}
			
	}
	chan.close();

}
