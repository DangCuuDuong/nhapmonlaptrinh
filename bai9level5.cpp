#include<bits/stdc++.h>
using namespace std;

void input(int &a, int &b, int &c, int &d);
void solve(int a, int b,int c, int d, int &ts, int &ms);
void output(int ts, int ms);

int main()
{
	int a,b,c,d,ts,ms;
	input(a,b,c,d);
	solve(a,b,c,d,ts,ms);
	output(ts,ms);
	return 0;
}

void input(int &a, int &b, int &c, int &d)
{
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
}

void solve(int a, int b, int c, int d, int &ts, int &ms)
{
	if(b == d){
		ts = a + c;
		ms = b;
	} else {
		ts = a*d + b*c;
		ms = b*d;
	}
	for(int i = 1; i <= ms; i++){
		if(ts % i == 0 && ms % i == 0){
			ts = ts / i;
			ms = ms / i;
		}
	}
}

void output(int ts, int ms)
{
	cout << ts << "/" << ms;
}
