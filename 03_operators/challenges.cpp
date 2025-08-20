#include <iostream>
#include <string>

using namespace std;

int main(){
    int teaPacks, pricePerPack, totalPrice, addTax;

    cout << "Enter the Tea packs : " << endl;
    cin >> teaPacks;

    cout << "Enter the Price per pack : " << endl;
    cin >> pricePerPack;

    totalPrice = teaPacks * pricePerPack;

    addTax = totalPrice + (totalPrice * 0.10);
    cout << "The total price after adding tax : " << addTax;
    return 0;
}