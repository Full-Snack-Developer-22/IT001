#include <iostream>
using namespace std;
/*Bang ma ASCII :
a-z:97-122
A-Z:65-90
0-9:48-57
*/ 

int main () {
    char c; cin >>c;
    if((c>=65 && c<= 90)||(c>=97 && c <=122)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
}