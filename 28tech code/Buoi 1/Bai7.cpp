#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
    int do_C;
    cin >> do_C;
    if (do_C >0 && do_C <= pow(10,6)) {
        double do_F=(do_C * 9.0/5) +32;
        cout <<fixed<< setprecision (2)<< do_F;
    }
    return 0;
}
