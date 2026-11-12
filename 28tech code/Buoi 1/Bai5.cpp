#include <iostream>
#include <cmath>
#include <iomanip>
const float pi=3.14;
using namespace std;
int main () {
    int r;
    cin >>r;
    if (r>=1 && r<=pow(10,6)) {
        cout << fixed << setprecision(2);
        double chu_vi=2*pi*r;
        double dien_tich=pi*pow(r,2);
        cout << chu_vi << " " << dien_tich;
    }
    return 0;
}