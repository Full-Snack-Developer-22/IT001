#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int a,b,c; cin >>a>>b>>c;
    if((a>abs(b-c)&& a<b+c)|| (b>abs(a-c)&& b>a+c) || (c>abs(a-b)&& c>a+b)){
        cout << "YES";
    }
    else {
        cout <<"NO";
    }
    return 0;
}