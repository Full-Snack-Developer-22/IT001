#include <iostream>
using namespace std;

int Check_Prime_Number (int n) {
    int empty=0;
    for (int i=1;i<=n;i++) {
        if (n%i==0) {
            empty+=1;
        }
    }
    for(int i=1;i<=n;i++) { 
    while (empty==2) {
        cout <<n;
    }}
}

int main () {
    int n; cin >>n;
    cout << Check_Prime_Number(n);
}