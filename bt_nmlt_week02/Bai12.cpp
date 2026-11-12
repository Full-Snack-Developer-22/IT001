#include <bits/stdc++.h>
using namespace std;
int CheckPrimeNumber (int n) {
    if (n==1) 
    return -1;
    int empty=0;
    for (int i=1;i<=n;i++) {
        if (n%i==0)
        empty+=1;
    }
    if (empty==2) 
    return 1;
    else
    return 0;
}
int main () {
    int n; cin >> n;
    cout << CheckPrimeNumber(n);
    return 0;
}