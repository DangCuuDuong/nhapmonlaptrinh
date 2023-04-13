#include<bits/stdc++.h>
using namespace std;

void input(int &n);
bool perfectNumber(int n);
void output(int n);

int main()
{
	int n;
	input(n);
	output(n);
	return 0;
}

void input(int &n)
{
	cin >> n;
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
		i ++;
	}
	if(sum == n) return true;
	else return false;
}

void output(int n)
{
	for(int i = 1; i < n; i++)
	{
		if(perfectNumber(i))
			cout << i << " ";
	}
}
