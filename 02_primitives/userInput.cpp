#include <iostream>
using namespace std;

int main(){

    string userTea;
    int teaQunatity;

    cout << "What would you like to order in tea? \n";
    getline(cin, userTea);

    cout << "How many cups of " << userTea << "would you like to have ?";
    cin >> teaQunatity;

    cout << userTea;
    cout << teaQunatity;

    return 0;
}