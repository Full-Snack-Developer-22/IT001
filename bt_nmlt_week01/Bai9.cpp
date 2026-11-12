#include <iostream>
#include <cmath>
using namespace std;
int main () {
    char c1,c2;
    int x;
    cin >> c1 >> c2 >> x;
    int ma_c1= int(c1);
    int ma_c2= int(c2);
    int khoang_cach= abs(ma_c1-ma_c2);
    char viet_hoa_c1= int(c1)-32;
    char viet_hoa_c2= int (c2)-32;
    int ma
    cout << "Ma ASCII cua ky tu `" << c1 << "'," << " `" << c2 << "' lan luot la " << ma_c1 << " va" << " " << ma_c2 <<endl;
    cout << "Khoang cach giua 2 ky tu `" << c1 << "'" << ", " << "`" << c2 << "' " <<"la " << khoang_cach<<endl;
    cout << "Dang viet hoa cua `" << c1 << "' " << "la `" << viet_hoa_c1 <<"'"<< endl;
    cout << int(viet_hoa_c2) << " la ma ASCII cua ky tu `" << viet_hoa_c1 << "'" ;
    return 0;
}