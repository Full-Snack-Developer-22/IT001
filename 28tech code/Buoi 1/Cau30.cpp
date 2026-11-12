#include <iostream>
using namespace std;
typedef long long ll;
int main () {
    ll a,b,c; cin>>a>>b>>c;
    if (double(a)/b==c||double(b)/c==a||double(c)/a==b){
        cout << "/";
    }
    else {
        cout <<"NOSOL";
    }
    return 0;
}