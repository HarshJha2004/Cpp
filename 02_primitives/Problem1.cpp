#include <iostream>
#include <string>
using namespace std;

int main(){
    string teaType;
    float teaPrice;
    char teaGrade;

    cout << "The tea type is : ";
    getline(cin,teaType);

    cout << "The price of Tea is : ";
    cin >> teaPrice;

    cout << "The rating is :  ";
    cin >> teaGrade;


    cout << "The tea type is " << teaType << "\n and the price is " << teaPrice << "\n and Grade is : " << teaGrade;
    return 0;
}