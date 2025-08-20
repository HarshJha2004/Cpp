#include <iostream>
using namespace std;

int main(){
    int userTeaBags, addTeaBags;

    cout << "Enter the amount of tea bags you have : ";
    cin >> userTeaBags;

    if(userTeaBags < 10){
        addTeaBags = userTeaBags + 5;
        cout << "The total Tea Bags you have : " << addTeaBags << endl;
    } else{
        cout << "The total tea bags you have : " << userTeaBags << endl;
    }
   
    return 0;
}