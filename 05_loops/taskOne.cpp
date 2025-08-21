#include <iostream>
using namespace std;

int main(){
    int teaCups;

    cout << "Enter the number of teacups : " << endl;
    cin >> teaCups;

    while (teaCups > 0) {
        cout << "The tea is serving : " << teaCups << endl ;
        teaCups--;
    }
    return 0;
}