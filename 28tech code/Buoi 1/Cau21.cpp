#include <iostream>
using namespace std;
/*Bang ma ASCII :
a-z:97-122
A-Z:65-90
0-9:48-57
*/ 

int main () {
    char c; cin >>c;
    if(c>=48 && c<= 57) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
    
}