#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main () {
    ll n;
    cin >> n;
    if (n >=1 && n<pow(10,16)){
        if(n%2==0) {
            ll s=n/2;
            cout << s;
        }
        else {
            ll s=((n-1)/2) -n;
            cout << s;
        }
    }
    return 0;
}