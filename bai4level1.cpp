#include <iostream> 
using namespace std; 
void nhap(int&a,int&b);
int max(int max);
void xuat(int max);
int main() 
{ 
    int a, b, max;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    max = a;
    if(max < b) {
        max = b;
    }

    cout << "So lon nhat la " << max;
    return 0;
}
