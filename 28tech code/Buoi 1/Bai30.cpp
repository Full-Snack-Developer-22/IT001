#include <iostream>
using namespace std;
int main () {
    float mark_1a,mark_1b,mark_2,mark_3; cin >> mark_1a>> mark_1b >> mark_2>>mark_3;
double medium_of_sum = (mark_1a + mark_1b + 2*mark_2 + 3*mark_3)/7;
    if (medium_of_sum>=8) {
        cout << "GIOI";
    }
    else if( medium_of_sum >=6.5) {
        cout <<"KHA";
    }
    else if ( medium_of_sum>=5) {
        cout << "TRUNG BINH";
    }
    else
        cout << "YEU";
    
return 0;

}