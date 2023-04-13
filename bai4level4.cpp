#include<bits/stdc++.h>
using namespace std;

void input(int &n);
bool sodoixung(int n);
void output(bool rs);

int main()
{
	int n;
	input(n);
	int result = sodoixung(n);
	output(result);
	return 0;
}

void input(int &n)
{
	cin >> n;
}

bool sodoixung(int n)
{
	int m = n;
	int sodao = 0;
	sodao += m % 10;
	m /= 10;
	while(m > 0)
	{
		sodao *= 10;
		sodao += m % 10;
		m /= 10;
	}
	if(sodao == n) 
		return true;
	else return false;
}

void output(bool rs)
{
	if(rs) cout << "Day la so doi xung";
	else cout << "Day khong la so doi xung";
}
