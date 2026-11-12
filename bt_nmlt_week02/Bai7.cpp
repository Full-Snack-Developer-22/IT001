#include <iostream>
using namespace std;
int main () {
    float a,b,c;
    cin >>a>>b>>c ;
    if (a<b && a<c) {
        if (b<c) {
            cout << a << " " << b << " " << c;}
        else if (c<b) {
            cout << a << " " << c << " " << b;
        }
    }
    if (b<a && b <c) {
        if (a<c) {
            cout << b << " " << a << " " << c;
        }
        else if (c<a) {
            cout << b << " " << c << " " << a;
        }
        }    
    if (c<a && c<b) {
        if (a<b) {
            cout << c << " " << a << " " << b;
        }
        else if (b<a) {
            cout << c << " " << b << " " << a;
        }
        else {
            cout << c << " " << a << " " << b;
        }
        }
    else if (a==b) {
        if (c<a) {
            cout << c << " "  << a << " " << a;
        }
        else {
            cout << a << " " << a << " " << c;
        }
    }
    else if (b==c) {
        if (a<b) {
            cout << a << " " << b << " " << b;
        }
        else {
            cout << b << " " << b << " " << a;
        }
    }
    else if (a==c) {
        if (b<a) {
        cout << b << " " << a << " " << a;
        }
        else {
            cout << a << " " << a << " " << b;
        }
    }
    else if ((a==b && b==c) ) {
        cout << a << " " << a << " " << a;
    }
        return 0;
    }

    
