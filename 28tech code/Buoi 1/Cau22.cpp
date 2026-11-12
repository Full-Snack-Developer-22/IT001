#include <iostream>
using namespace std;
/*Bang ma ASCII :
a-z:97-122
A-Z:65-90
0-9:48-57
*/ 

int main () {
    char c; cin >>c;
    if(c>=65 && c<= 90) {
        char viet_thuong= int(c) + 32;
        cout << viet_thuong;
    }
    else {
        cout << c;
    }
    return 0;
    
}