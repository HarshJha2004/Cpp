#include <iostream>
#include <string>
using namespace std;

int main(){
    string teaType;
    int cupsQuantity;
    cout << "Which tea would you like ?";
    getline(cin, teaType);

    cout << "How much Cups do you want?";
    cin >> cupsQuantity;

    cout << "The type of tea you ordered " << teaType << "and Cups is : " << cupsQuantity;
    return 0;
}