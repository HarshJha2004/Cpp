#include <iostream>
using namespace std;

int main(){
    int cupsQuantity, priceOfCups, totalPrice, discountedPrice;
    
    cout << "How much Cups you want ? : " << endl;
    cin >> cupsQuantity;

    cout << "What should you expecting the price of tea ? " << endl;
    cin >> priceOfCups;

    totalPrice = cupsQuantity * priceOfCups;
    
    if(totalPrice > 100){
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted price is " << discountedPrice << endl;
    } else{
        cout << "Total price is : " << totalPrice;
    }
   
    return 0;
}