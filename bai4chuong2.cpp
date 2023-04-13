#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mang2chieu[100][100];
    int *mang1chieu;
    int a,dong,cot,k=0;
	cin>>dong;
	cin>>cot;
    mang1chieu=(int*)malloc(dong*cot*(sizeof(int)));

    for(int i=0;i<dong;i++)
        for(int j=0;j<cot;j++)
        {
            cin>>mang2chieu[i][j];
            mang1chieu[k]=mang2chieu[i][j];
            k++;    
        }
    
        
    for(int i=0;i<dong;i++)
        for(int j=0;j<cot;j++)
        {
           cout<<mang2chieu[i][j]<<" ";
        }
    

    
} 

