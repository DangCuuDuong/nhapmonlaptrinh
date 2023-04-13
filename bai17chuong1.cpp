#include <bits/stdc++.h>
using namespace std;

void doctao();
void xuatvasapxep();

int main()
{
	doctao();
	xuatvasapxep();
	return 0;
}
void doctao()
{
	fstream xuat;
	xuat.open("SONGUYEN.INP", ios::out|ios::binary);
	if(xuat)
	{
		int dong[10];
		int n=1000;
		srand((unsigned)time(NULL));
		for(int i = 1; i <= n; i++)
		{
			for(int j = 0; j < 10; j++)
				dong[j] = rand()%1000;
			xuat.write(reinterpret_cast<char *>(&dong),sizeof(dong));
			xuat.write("\n",1);
			
		}
		xuat.close();
	}
}
void xuatvasapxep()
{
	fstream nhap("SONGUYEN.INP", ios::in|ios::binary);
	if(!nhap)
	{
		cout << "Khong the mo duoc file! Vui long thu lai.";
		exit(0);
	}
	cout << "-------------------"<<endl;
	int n = 0;
	int a[10000];
	ofstream xuat("SONGUYEN.OUT");
	while(true)
	{
		int docdong[10];
		nhap.read(reinterpret_cast<char *>(&docdong),sizeof(docdong));
		char skip;
		nhap.read(reinterpret_cast<char *>(&skip),sizeof(skip));
		if(nhap.eof())
			break;
		for(int i = 0; i < 10; i++)
		{
			a[n] = docdong[i];
			n++;
		}
	}
	for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
	for(int i = 0; i < n; i++)
	{
			xuat << a[i] << " ";
			if((i+1)%10 == 0)
				xuat << endl;
	}
	nhap.close();
    xuat.close();
}

