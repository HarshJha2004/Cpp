#include <iostream>
#include <string>
using namespace std;

int main(){
    int hours;

    cout << "Enter the Time (0-23) : ";
    cin >> hours;

    if(hours >= 8 && hours < 18){
        cout << "Shop is opened";
    } else {
        cout << "Shop is closed";
    }
     return 0;
}