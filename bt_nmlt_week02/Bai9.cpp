#include <iostream> 
#include <iomanip>
using namespace std;
int main () {
    double toan,ly,hoa;
    cin >> toan >> ly >> hoa;
    double DTB = (toan+ly+hoa)/3;
    cout <<fixed<<setprecision(2) << "DTB = " <<DTB <<endl;
    if (DTB>=9 && DTB <=10) {
        cout << "Loai: XUAT SAC";
    }
    if (DTB>=8 && DTB <9 ) {
        cout << "Loai: GIOI";
    }
    if (DTB>=7 && DTB<8) {
        cout << "Loai: KHA";
    }
    if (DTB>=6 && DTB <7) {
        cout << "Loai: TB KHA";
    }
    if (DTB>=5 && DTB <6) {
        cout << "Loai: TB";
    }
    if (DTB>=4 && DTB <5){
        cout << "Loai: YEU";
    }
    if (DTB<4) {
        cout << "Loai: KEM";
    }
    return 0;
}