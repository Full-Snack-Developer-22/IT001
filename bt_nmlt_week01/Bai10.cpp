#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    double p = (a+b+c)/2;
    double S = sqrt(p*(p-a)*(p-b)*(p-c));
    cout <<fixed<<setprecision(2);
    cout << S << endl;
    return 0;
}