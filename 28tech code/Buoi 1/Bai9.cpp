#include <iostream>
#include <cmath>
typedef long long ll;
using namespace std;
int main () {
    ll n;
    cin >> n;
    if (n >= 0 && n<=pow(10,6)) {
        ll s= n*(n+1)*(2*n+1)/6;
        cout << s;

    }
    return 0;

}