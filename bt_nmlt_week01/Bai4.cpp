#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    long long a,b;
    cin >> a;
    cin >> b;
    long long Tong= a+b;
    long long Tich= a*b;
    long long Hieu= a-b;
    double Thuong= a/b;
    cout << a << " "  << "+" << " "<< b << " " << "=" << " "  << Tong << endl;
    cout << a << " "  << "-" <<" "<< b << " "  << "=" << " " << Hieu << endl;
    cout << a << " "  << "x" <<" "<< b << " "  << "=" << " " << Tich << endl;
    cout <<fixed<<setprecision(2) << a << " "  << ":" << " "<< b << " "  << "=" << " " << Thuong << endl;
    return 0;


}