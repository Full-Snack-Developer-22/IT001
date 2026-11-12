#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int a,b;
    cin >> a;
    cin >> b;
    int max=((a+b)+abs(a-b))/2;
    int min=((a+b)-abs(a-b))/2;
    cout << "max" << " "<< "=" << " " << max << endl;
    cout << "min" << " " << "="<< " " << min << endl;
    return 0;

}