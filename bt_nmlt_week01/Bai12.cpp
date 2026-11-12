#include <iostream>
using namespace std;
int main () {
    long long A;
    cin >> A;
    long long dau= (A>0) - (A<0);
    cout << dau*A;
    return 0;

}