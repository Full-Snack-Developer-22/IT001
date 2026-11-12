#include <iostream> 
using namespace std;
int main () {
    int day,month,year;
    cin >> day >> month>> year;
    if (year>0) {
        if ((year%4==0 && year%100!=0)||(year%400==0)){ // Năm nhuận
            if (month==4 || month==6 || month==9 || month==11) { // Tháng có 30 ngày
                if (day>=1 && day<=30) {
                    cout << day << "/" << month << "/" << year << " la ngay hop le." ;
                }
                else {
                    cout << day << "/" << month << "/" << year << " la ngay khong hop le.";
                }
            }
            else if (month==2){ // Tháng 2
                if (day >=1 && day <=29) {
                    cout <<day << "/" << month << "/" << year << " la ngay hop le.";
                }
                else {
                    cout << day << "/"<< month <<"/" << year << " la ngay khong hop le.";
                }
            }
            else if (month==1 || month==3|| month==5 ||month==7||month==8||month==12||month==10) // Tháng có 31 ngày
            {
                if (day>=1 &&day <=31) {
                    cout << day << "/" << month << "/" << year << " la ngay hop le.";
                }
                else {
                    cout << day << "/" << month << "/" << year << " la ngay khong hop le.";
                }
            }
            else {
            cout <<"Thang khong hop le.";
            }
            }
        else { // Năm không nhuận
            if (month==4 || month==6 || month==9 || month==11) {
                if (day>=1 && day<=30) {
                    cout << day << "/" << month << "/" << year << " la ngay hop le." ;
                }
                else {
                    cout << day << "/" << month << "/" << year << " la ngay khong hop le.";
                }
            }
            else if (month==2){
                if (day>=1 && day <=28) {
                    cout <<day << "/" << month << "/" << year << " la ngay hop le.";
                }
                else {
                    cout << day << "/" << month << "/" << year << " la ngay khong hop le.";
                }
            }
            else if (month==1 || month==3|| month==5 ||month==7||month==8||month==12||month==10)
            {
                if (day>=1 &&day <=31) {
                    cout << day << "/" << month << "/" << year << " la ngay hop le.";
                }
                else {
                    cout << day << "/" << month << "/" << year <<" la ngay khong hop le.";
                }
            }
            else {
            cout <<"Thang khong hop le.";
            }
        }
        
    }
    else {
        cout << "Nam khong hop le.";
    }
    return 0;
}
