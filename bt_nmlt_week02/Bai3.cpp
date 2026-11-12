#include <iostream> 
using namespace std;
int main () {
    double a,b;
    cin >> a>>b;
    if (a!=0 && b!=0){
        cout << "{" <<-b/a << "}";
    }
    if (a==0 && b!=0) {
        cout << "Ø";
    }
    if (a!=0 && b==0) {
        cout << 0;
    }
    if (a==0 && b==0) {
        cout <<"ℝ";
    }
    return 0;
}