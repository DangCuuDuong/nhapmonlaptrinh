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
	fstream xuat("SONGUYEN.INP", ios::out);
	cout << "-------------------------"<<endl;
    int A[32768] = {0};
    int n = 10000;
    srand((unsigned)time(NULL));
    for(int i = 0; i < n; i++)
	{
    	int x = rand()%32768;
    	if(A[x] == 0)
		{
    		A[x] = 1;
    		xuat << x << " ";
		}
    		
	}
    xuat.close();
}
