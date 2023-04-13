#include<bits/stdc++.h>
using namespace std;

void input(int &n);
int count(int n);
bool squareNumber(int n);
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
	for(int i = 0; i < n; i++)
	{
		if(squareNumber(i))
			rs += 1;
	}
	return rs;
}

bool squareNumber(int n)
{
	double canx = sqrt(n);
	if((int)canx == canx) 
		return true;
	else return false;
}

void output(int rs)
{
	cout << rs;
}
