#include <iostream>
using namespace std;
int main () {
    int t,n; cin >> t>>n;
    if(t && n <=0|| (t<1 || t>12)) {
        cout << "INVALID";
    }
    else {
        if (n%400==0 || (n%4==0 && n%100!=0)) {
            if(t==2) {
                cout << "29";
            }
            else if (t==4|| t==9||t==11||t==6) {
                cout << "30";
            } 
            else {
                cout << "31";
            }
            
        }
        else {
            if (t==2){
                cout << "28";
            }
            else if (t==4|| t==9||t==11||t=6) {
                cout << "30";
            } 
            else {
                cout << "31";
            }
        }
    }
    return 0;
}