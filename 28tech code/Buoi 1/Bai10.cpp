#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
    int n;
    cin >>n;
    if (n>=1 && n <=pow(10,9)) {
        double s=(n*1.0)/(n+1);
        cout <<fixed << setprecision(2) << s;
    } 
    return 0;

}