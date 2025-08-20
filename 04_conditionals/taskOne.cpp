#include <iostream>
#include <string>
using namespace std;

int main(){
    string teaType;

    cout << "Enter Tea type : " << endl;
    cin >> teaType;

    if(teaType == "Green Tea"){
        cout << "Order confirmed : ";
    }
    return 0;
}