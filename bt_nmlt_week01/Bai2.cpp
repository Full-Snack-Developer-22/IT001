#include <iostream>
using namespace std;
int main () {
    float Do_F;
    cin >> Do_F;
    float Do_C= (Do_F - 32)/1.8;
    float Do_K= Do_C + 273.15;
    cout << Do_C << " " << Do_K;
    return 0;
}