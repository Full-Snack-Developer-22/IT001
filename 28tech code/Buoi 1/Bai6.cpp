#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1,x2,y1,y2 >= pow(10,-6) && x1,x2,y1,y2 <= pow(10,6) ) {
        double khoang_cach=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        cout <<fixed << setprecision(2) << khoang_cach;
    }
    return 0;
}