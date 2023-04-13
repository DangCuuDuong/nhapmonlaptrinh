#include<iostream>
using namespace std;
void nhap(int &n);
bool thu(int x);
void lietke(int n);
int main()
{ 	
	int n;
	nhap(n);
 	lietke(n); 
	return 0; 
} 
void nhap(int &n)
{ 	
	cin>>n; 
} 
bool  thu(int n)
{   
	int sum=0; 
	for (int i=1 ; i<=n ; i++ )
 	{   
	 	if (n%i==0) 
		{ 
			sum++;
		}
	}
 	if (sum==2) 
	 	
		 return true;
	
	else 
	
		return false ;
		
} 
void  lietke(int n)
{ 	
	for (int i=1;i<n;i++)
	{	 
		if (thu(i)==true) 
		{	
			cout<<i<<" ";
		} 
	} 
}
