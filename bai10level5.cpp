#include<bits/stdc++.h>
using namespace std;

void input(int &a, int &b);
void solve(int a, int b);
void output(int rs);

int main()
{
//	int a,b,ts,ms;
//	input(a,b);
	solve(10,99);
	return 0;
}

void input(int &a, int &b)
{
	cin >> a;
	cin >> b;
}

void solve(int a, int b)
{
	int char1, char2 = 0;
	for(int i = a; i <= b; i++){
		char1 = i % 10;
		char2 = i / 10;
		if(char1 * char2 == 2*(char1 + char2))
			output(i);
	}
}

void output(int rs)
{
	cout << rs << "\n";
}
