#include <iostream>
#include <cmath>
#include <iomanip>
typedef long long ll;
using namespace std;
int main () {
    int a,b;
    cin >> a >> b;
    if (a>=-pow(10,9) && a<= pow(10,9) && b>= pow(10,-9) && b<=pow(10,9) && b!=0) {
        cout << a+b << " " << a-b << " " << ll(a)*b << " " <<fixed<<setprecision(2)<< 1.0*a/b;
    }
    return 0;

}