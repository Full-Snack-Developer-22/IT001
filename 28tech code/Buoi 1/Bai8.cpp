#include <iostream>
#include <cmath>
using namespace std;
int main () {
long long n;
cin >> n;
if ( n>=0 && n <= pow(10,6) ) {
    long long s=n*(n+1)/2;
    cout << s;
}
return 0;
}