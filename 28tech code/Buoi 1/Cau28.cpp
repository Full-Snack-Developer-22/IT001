#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
    double a,b,c; cin >> a>>b>>c;
    double denta=b*b-4*a*c;
    if(a!=0){ 
    if(denta<0) {
        cout << "NO";
    }
    else if (denta==0){
        cout <<fixed<< setprecision(2)<<-b/(2*a);
    } 
    else {
        double x1=(-b+sqrt(denta))/(2*a);
        double x2=(-b-sqrt(denta))/(2*a);
        cout <<fixed<<setprecision(2)<<x1<< " " <<x2 ;
    }
}
    else {
        if (b==0&&c==0){
            cout << "INF";
        }
        else if (b!=0 && c==0){
            cout << "NO";
        }
        else {
            cout <<fixed<< setprecision(2) << -c/b;
        }
    }
    return 0;
}