#include <iostream>
#include <string>

using namespace std;

struct HOCSINH {
    string MSHS;
    string hoten;
    string ngaysinh;
    string diachi;
    string phai;
    float diemtb;
};

int main() {
    int n;
    cin >> n;
    
    HOCSINH ds_hs[n];
    
    for (int i = 0; i < n; i++) {
        cin >> ds_hs[i].MSHS;
        cin.ignore(); 
        getline(cin, ds_hs[i].hoten);
        cin >> ds_hs[i].ngaysinh;
        cin.ignore();
        getline(cin, ds_hs[i].diachi);
        cin >> ds_hs[i].phai;
        cin.ignore();
        cin >> ds_hs[i].diemtb;
    }
    
    for (int i = 0; i < n; i++) {
        cout  << ds_hs[i].MSHS << endl;
        cout <<  ds_hs[i].hoten << endl;
        cout <<  ds_hs[i].ngaysinh << endl;
        cout <<  ds_hs[i].diachi << endl;
        cout << ds_hs[i].phai << endl;
        cout <<  ds_hs[i].diemtb << endl;
    }
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (ds_hs[i].diemtb >= 5.0) {
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}

