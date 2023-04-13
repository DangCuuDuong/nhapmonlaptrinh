#include <iostream>

using namespace std; 
void nhap(int &nam);
void xuat(int nam);
int main()
{
    int nam;
    cout << "Nam: ";
    cin >> nam;
    if(((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0)) {
       cout << "Nam " << nam << " la nam nhuan" << endl;
    } else {
       cout << "Nam " << nam << " khong phai la nam nhuan" << endl;
    }

    return 0;
}
