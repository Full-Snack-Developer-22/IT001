#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int a,b,c;
    cin >>a>>b>>c;
    if(((a>abs(b-c))&& (a<b+c))|| ((b>abs(a-c))&& (b<a+c)) || ((c>abs(a-b))&& (c<a+b))) {
        if(a==b&& b==c) {
            cout << "1";
        }
        else if (a==b||b==c||a==c) {
            cout << "2";
        }
        else if (pow(a,2)==pow(b,2)+pow(c,2)||pow(b,2)==pow(a,2)+pow(c,2)||pow(c,2)==pow(a,2)+pow(b,2)) {
            cout << "3";
        }
        else {
            cout <<"4";
        }
    }
    else {
        cout << "INVALID";
    }
    return 0;
}