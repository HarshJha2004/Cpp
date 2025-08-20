#include <iostream>
using namespace std;

int main(){
    int teaCups;

    cout << "Enter the tea Cups you want? ";
    cin >> teaCups;

    if(teaCups > 20 ){
        cout << "Congratulations, you got a Golden Badge from our shop" << endl;

    } else if(teaCups >= 10 && teaCups <= 20){
        cout << "Silver Badge";
    }else {
        cout << "Sorry";
    }
   
   
    return 0;
}