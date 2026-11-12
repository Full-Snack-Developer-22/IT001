#include <iostream>
#include <cmath>
int main()
{
    double a;
    int n;
    std::cin >> a >> n;
    double b1=a*n;
    double b2=round(b1);
    double b3=b2/n;
    std::cout.precision(10);
    std::cout << std::fixed;
    std::cout << b3;
    return 0;
}
