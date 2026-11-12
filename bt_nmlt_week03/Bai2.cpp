#include <iostream>
using namespace std;

int tongUocChan(int n) {
    if (n % 2 != 0)  return -1;      

    int tong = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            int  j = n / i;           
            if (j != i && j % 2 == 0) tong += j;   
        }
    }
    return tong;
}

int main() {
    int n;
    cin >> n;
    cout << tongUocChan(n) << endl;
    return 0;
}