#include <iostream>
using namespace std;
/*Bang ma ASCII :
a-z:97-122
A-Z:65-90
0-9:48-57
*/ 

int main () {
    char c; cin >>c;
    if((c>=65 &&c<=90)||(c>=97 && c<=122)){
        if (c>=65 &&c<=90) {
            if(c==90){ 
                cout << "a";
            }
            else {
            char viet_thuong= int(c)+32;
            char ke_tiep= int(viet_thuong) +1;
            cout << ke_tiep;
            }
        }
        else if (c>=97 && c<=122) {
            if(c==122) {
                cout << "a";
            }
            else {
                char ke_tiep=int(c)+1;
                cout << ke_tiep;
            }
        }
    }
    else {
        cout <<"INVALID";
    }
    return 0;
}