#include<bits/stdc++.h>
using namespace std;
int he2(int n);
int he8(int n);
void he16(int n, int &n16, char to16[]);
int main()
{	int n,n16;
	char to16[1000];
	cin>>n;
	he2(n);
    cout<<endl;
	he8(n);
    cout<<endl;
	he16(n, n16, to16);
}
int he2(int n)
{
	if(n!=0)
	{
		he2(n/2);
		cout<<n%2;
	}
}
int he8(int n)
{
    int p = 0;
    int sohe8 = 0;
    while(n > 0){
        sohe8 += (n % 8) * pow(10, p);
        p++;
        n /= 8;
    }
    cout<<sohe8;
}
void he16(int n, int &n16, char to16[])
{
    n16 = 0;
    while (n > 0)
    {
        int x = n % 16;
        n /= 16;
        if (x < 10)
            to16[n16++] = x + '0';
        else
            to16[n16++] = x + 55;

        
    } 
    to16[n16] = '\0';
    strrev(to16);
    puts(to16);
}

