#include <iostream>
using namespace std;

int main(){
    // array - continous memory allocation, no matter it's shape is top-to-bottom, left-to-right, and vice-verse

    // in c++, array have same datatypes

    int chaiTemperature[5] = {84, 20, 55, 90, 54};

    cout << "Chai temperatures : ";

    // important skill to print an array using loops
    for(int i = 1 ; i <= 5 ; i++){

        //Access the index value in brackets
        cout << chaiTemperature[i] << " degree C \n";
    }
    return 0;
}