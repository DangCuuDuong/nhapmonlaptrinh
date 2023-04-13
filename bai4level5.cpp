#include<bits/stdc++.h>
using namespace std;

void input(int &n);
bool squareNumber(int n);
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

bool squareNumber(int n)
{
	double canx = sqrt(n);
	if((int)canx == canx) 
		return true;
	else return false;
}

void output(int n)
{
	for(int i = 0; i < n; i++)
	{
		if(squareNumber(i))
			cout << i << " ";
	}
}
