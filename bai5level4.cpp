#include<bits/stdc++.h>
using namespace std;

void input(int &n);
int maxChar(int n);
void output(int rs);

int main()
{
	int n;
	input(n);
	output(maxChar(n));
	return 0;
}

void input(int &n)
{
	cin >> n;
}

int maxChar(int n)
{
	int max = 0;
	if(n == 0) return 0;
	while(n > 0)
	{
		if((n % 10) > max)
		{
			max = n % 10;
		}
		n /= 10;
	}
	return max;
}

void output(int rs)
{
	cout << rs << " la chu so lon nhat";
}
