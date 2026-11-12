#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    if (n==-1) {
        cout << "-1";
    }
    else if (n>=0) {
        for (int i=0; i<=n;i++) {
            if (n%i==0) {
                int sum=0;
                sum+=1;
                cout << sum;
            }
        }
    }
    return 0;
}