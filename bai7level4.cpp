#include<bits/stdc++.h>
using namespace std;

void input(int &n);
bool solve(int n);
void output(bool rs);

int main()
{
	int n;
	input(n);
	output(solve(n));
	return 0;
}

void input(int &n)
{
	cin >> n;
}

bool solve(int n)
{
	int i = 0;
	if(n == 0) return false;
	while(n > 0)
	{
		i = n % 10;
		if(i % 2 != 0) return false;
		n /= 10;
	}
	return true;
}

void output(bool rs)
{
	if(rs) cout << "So vua nhap gom toan cac chu so chan";
	else cout << "So vua nhap khong gom toan cac chu so chan";
}
