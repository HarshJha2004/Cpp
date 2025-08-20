#include <iostream>
using namespace std;

int main(){
    int cups;
    float cupsPrice = 55;
    float finalPrice;

    cout << "Cups ? : ";
    cin >> cups;

    if(cups > 20){
        finalPrice = cupsPrice - (cupsPrice * 0.20);
        cout << "The total Bill is : " << finalPrice;
    } else if(cups >= 10 && cups <= 20){
        finalPrice = cupsPrice - (cupsPrice * 0.10);
         cout << "The total Bill is : " << finalPrice;
    } else {
        cout << "Sorrry no discount";
    }
    return 0;
}