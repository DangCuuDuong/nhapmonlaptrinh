#include<bits/stdc++.h>
using namespace std;

void input(int &n);
int count(int n);
bool primeNumber(int n);
void output(int rs);

int main()
{
	int n;
	input(n);
	output(count(n));
	return 0;
}

void input(int &n)
{
	cin >> n;
}

int count(int n)
{
	int rs = 0;
	int i = 0;
	if(n == 0 || n == 1) rs = 0;
	while(n > 0)
	{
		i = n % 10;
		if(primeNumber(i)) rs += 1;
		n /= 10;
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
	cout << "Co tong cong " << rs << " chu so nguyen to";
}
