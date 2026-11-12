#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
    double a,b,c;
    cin >> a >> b >> c;
    if (a>abs(b-c) && a<b+c){ 
        double p=(a+b+c)/2;
        double dien_tich=sqrt(p*(p-a)*(p-b)*(p-c));
        if (a==b||b==c||a==c) {
            if (a==b && b==c ) {
                cout << "Tam giac deu, dien tich = "<<fixed<<setprecision(2)<< dien_tich;
            }
            else {
                cout <<"Tam giac can, dien tich = " <<fixed<<setprecision(2)<< dien_tich;
                
            }
        }
        else if (pow(a,2)==pow(b,2)+pow(c,2)||pow(b,2)==pow(a,2)+pow(c,2)||pow(c,2)==pow(b,2)+pow(a,2)){
                if (a==b||b==c||a==c){
                    cout << "Tam giac can, dien tich = " <<fixed<<setprecision(2)<< dien_tich;
                }
                else {
                    cout << "Tam giac vuong, dien tich = "<<fixed<<setprecision(2)<< dien_tich;
                }
            } 
    else {
            cout << "Tam giac thuong, dien tich = " <<fixed<<setprecision(2)<< dien_tich;
        }
    }    
    else {
        cout << "Khong phai tam giac" ;
    }
    return 0;
}
