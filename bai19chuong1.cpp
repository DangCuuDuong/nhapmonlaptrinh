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
	fstream songuyen("SONGUYEN.INP", ios::out);
	fstream chan("SOCHAN.INP", ios::out);
	fstream le("SOLE.INP", ios::out);
	cout << "-------------------------"<<endl;
	int n=10000;
	srand((unsigned)time(NULL));
	for(int i =0;i<n;i++)
	{
		int x=rand()%32768;
		songuyen<<x<<"  ";
		if(x%2!=0)
			le<<x<<" ";
		if(x%2 ==0)
			chan<<x<<"  ";
	}
	songuyen.close();
	chan.close();
    le.close();
}


	
