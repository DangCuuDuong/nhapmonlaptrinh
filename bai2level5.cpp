#include<bits/stdc++.h>
using namespace std;

void input(int &n);
int count(int n);
bool perfectNumber(int n);
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
		if(perfectNumber(i))
			rs += 1;
	}
	return rs;
}

bool perfectNumber(int n)
{
	int sum = 0;
	int i = 1;
	while(i < n)
	{
		if(n % i == 0)
		{
			sum = sum + i;
		} 
		i = i + 1;
	}
	if(sum == n) return true;
	else return false;
}

void output(int rs)
{
	cout << rs;
}
