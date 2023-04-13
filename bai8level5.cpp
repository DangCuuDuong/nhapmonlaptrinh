#include<bits/stdc++.h>
using namespace std;

void input(int &n);
int findMax(int n);
void output(int n);

int main()
{
	int n;
	input(n);
	int result = findMax(n);
	output(result);
	return 0;
}

void input(int &n)
{
	cin >> n;
}

int findMax(int n)
{
	int rs = 0;
	if(n % 2 != 0)
		return n;
	else 
	{
		for(int i = 1; i < n; i++)
		{
			if(n % i == 0 && i % 2 != 0)
				rs = i;
		}
	}
	
	return rs;
}

void output(int rs)
{
	cout << rs;
}
