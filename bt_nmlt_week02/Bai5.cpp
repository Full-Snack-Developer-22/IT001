#include <iostream>
using namespace std;
int main()
{
    double a, ans;
    int n;
    cin >> a >> n;
    ans= long long(a*n+0.5)/double(n);
    cout.precision(10);
    cout << ans;
    return 0;
}

