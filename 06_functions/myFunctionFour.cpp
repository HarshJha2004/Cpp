#include <iostream>
using namespace std;

// lamda function : libraries/Frameworks ki jaan.

    int main(){

        /* [](){
    
        

    }*/

        //lamda
        auto preparedChai = [](int cups){
            cout << "Preparing "  << cups << " cups of tea" << endl;
        };

        preparedChai(4);
        return 0;
    }