#include <iostream>
using namespace std;
/*Bang ma ACSII:
a-z:97-122
A-Z:65-90
0-9:48-57*/
int main () {
    char c; cin >>c;
    if (c>='a' && c<='z' || c>='A' && c<='Z') {
        if (c=='z'|| c=='Z' ) {
            cout << "a";
        }
        else {
            if(c>='A' && c<='Z') {
                c+=32;
            }
            ++c;
            cout << c;
        }
    }
    else {
        cout << "INVALID";
    }
    return 0;
}