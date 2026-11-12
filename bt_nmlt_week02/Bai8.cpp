#include <iostream> 
#include <cmath>
using namespace std;
int main () {
    double a,b,c;
    cin >> a>> b >>c;
    double denta=pow(b,2)-4*a*c;
    if (a!=0) {
         if (denta==0){
            cout << "PT co nghiem kep: x1 = x2 = " << -b/(2*a) ;
         }
         else if (denta>0) {
            double x1=(-b+sqrt(denta))/(2*a);
            double x2=(-b-sqrt(denta))/(2*a);
            cout <<"PT co hai nghiem phan biet:" << endl;
            cout <<"x1 = " << x1 << endl;
            cout <<"x2 = " << x2 ;
         }
         else {
            cout << "PTVN";
         }
    }
    return 0;
}