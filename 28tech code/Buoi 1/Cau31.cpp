#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;
int main () {
    ll a,b,c,d,e; cin >>a>>b>>c>>d>>e;
   ll max_1= max({a,b,c,d,e});
   ll min_1=min({a,b,c,d,e});
   ll min_2;
    if (a!=min_1 && a<min_2) min_2=a;
    if (b!=min_1 && b<min_2) min_2=b;
    if (c!=min_1 && c<min_2) min_2=c;
    if (d!=min_1 && d<min_2) min_2=d;
    if (e!=min_1 && e<min_2) min_2=e;
    cout << min_2;
return 0;

}