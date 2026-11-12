#include <iostream>
#include <cmath>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
int main () {
    ull n;
    cin >> n;
    if (n>=1 && n<= pow(10,9)) {
        ll s=n*(n+1);
        cout << s;
    }
    return 0;

}