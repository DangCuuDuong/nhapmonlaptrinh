#include<bits/stdc++.h>
using namespace std;

void input(int &n);
int count(int n);
bool primeNumber(int n);
void output(int n);

int main()
{
	int n;
	input(n);
	int result = count(n);
	output(result);
	return 0;
}

void input(int &n)
{
	cin >> n;
}

int count(int n)
{
	int rs = 0;
	for(int i = 1; i < n; i++)
	{
		if(primeNumber(i))
			rs += 1;
	}
	return rs;
}

bool primeNumber(int n)
{
	if(n <= 1) return false;
	if(n == 2 || n == 3) return true;
	int i = 2;
	while(i < n - 1)
	{
		if(n % i == 0) return false;
		i += 1;
	}
	return true;
}

void output(int rs)
{
	cout << rs;
}
