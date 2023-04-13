#include <iostream>
bool ngayhople(int d, int m, int y);
void ngaytieptheo(int& d, int& m, int& y);
using namespace std;
int main() {
    int d, m, y;
	cin>>d>>m>>y;

    if (ngayhople(d, m, y)) {
        ngaytieptheo(d, m, y);

        cout << "Ngay tiep theo: " << d << "/" << m << "/" << y << endl;
    }
    else {
        cout << "-1" << endl;
    }

    return 0;
}

bool ngayhople(int d, int m, int y) 
{
    if (y < 0 || (m < 1 || m > 12) ||(d < 1 || d > 31 ||  (d > 30 && (m == 4 || m == 6 || m == 9 || m == 11))  ) )
	{
        return false;
    }

    if (m == 2) {
        if (d > 29) {
            return false;
        }
        if (d == 29 && (y % 4 != 0 || (y % 100 == 0 && y % 400 != 0))) {
            return false;
        }
    }

    return true;
}

void ngaytieptheo(int& d, int& m, int& y) 
{
    int ngay;

    switch (m) {
        case 2:
            ngay = 28;
            if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {
                ngay = 29;
            }
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            ngay = 30;
            break;

        default:
            ngay = 31;
            break;
    }

    if (d == ngay) {
        d = 1;
        if (m == 12) {
            m = 1;
            y++;
        }
        else {
            m++;
        }
    }
    else {
        d++;
    }
}


