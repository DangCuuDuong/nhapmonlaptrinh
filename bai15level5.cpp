#include<bits/stdc++.h>
using namespace std;

void input(int &n, float &x);
float solve(int n, float x);
void output(float n);

int main()
{
	int n;
	float x;
	input(n,x);
	float result = solve(n,x);
	output(result);
	return 0;
}

void input(int &n, float &x)
{
	cin >> n;
	cin >> x;
}

float solve(int n, float x)
{
	float s = sqrt(x);
	for(int i = 0; i < n; i++){
		s = sqrt(x + s);
	}
	return s;
}

void output(float rs)
{
	cout << rs;
}
