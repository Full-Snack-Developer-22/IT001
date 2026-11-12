#include <iostream> 
using namespace std;
int main () {
    int temperature;
    cout << "What is the outdoor temperature?" << endl ;
    cin >> temperature;
    cout << "What is your plan today?" << endl;
    if (temperature<=40) {
        if (temperature>=33) {
            cout << "Good day for swimming";
        }
        if (temperature>=24 && temperature <33){
            cout <<"Good day for golfing";
        }
        if (temperature>=10&&temperature<24) {
            cout<< "Good day to play tennis";
        }
        if (temperature<10) {
            cout << "Go to bed";
        }
    }
    
    return 0;
}