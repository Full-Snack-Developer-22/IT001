#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int a,b; cin >>a>>b;
    if (b>=1 && b<=a && a <=pow(10,18) ) {
        if (a%b==0){
            cout << a;
        }
        else {
            int thuong=a/b;
            cout << thuong*b;
        }
    }
}