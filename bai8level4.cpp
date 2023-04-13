#include<bits/stdc++.h>
using namespace std;

void input(int &n);
bool incNumber(int n);
void output(bool rs);

int main()
{
	int n;
	input(n);
	output(incNumber(n));
	return 0;
}

void input(int &n)
{
	cin >> n;
}

bool incNumber(int n)
{
	int j = n % 10;
	int i = 0;
	n /= 10;
	while(n > 0)
	{
		i = n % 10;
		if(i >= j) return false;
		j = i;
		n /= 10;
	}
	return true;
}

void output(bool rs)
{
	if(rs) cout << "So vua nhap tang dan";
	else cout << "So vua nhap khong tang dan";
}#include<bits/stdc++.h>
using namespace std;

void input(int &n);
bool decNumber(int n);
void output(bool rs);


