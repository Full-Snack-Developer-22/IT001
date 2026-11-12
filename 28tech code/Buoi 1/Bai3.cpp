#include <iostream>
#include <cmath>
using namespace std;
int main () {   
    int a,b,c;
    cin >> a >> b >> c;
    if (abs(a),abs(b),abs(c)>0 && a!=b){
        int S=a*(b+c) + b*(a+c);
        cout << S;
    }
    return 0;
}