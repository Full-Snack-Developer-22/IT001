#include <iostream>
#include <iomanip>
using namespace std;
int main () {
double a;
cin >> a;
double Chu_Vi = a*4;
double Dien_Tich = a*a;
cout <<fixed<<setprecision(2);
cout << "Chu vi: " << Chu_Vi << endl;
cout << "Dien tich: " << Dien_Tich << endl;
return 0;
}