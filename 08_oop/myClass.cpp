// list and array,vector is same thing
// Access modifiers :- public, private, protected, default access is private
#include <iostream>
#include <vector>
using namespace std;

class Chai {
    public:
        //data members / (attributes) / variables.
        string teaName; // name of the tea
        int servings; // Number of servings
        vector<string> ingredients; // list of ingredients for the tea


        //Member function (function)
        void displayChaiDetails(){
            cout << "Tea Name : " << teaName << endl;
            cout << "Servings : " << servings << endl;
            cout << "Ingredients : " ;
            // vector is a type of array, and in array perform some operations using loops.
            for(string ingredient : ingredients){
                cout << ingredient << " ";
            }
            cout << endl;

    }
};

int main(){

    // Making obj
    // className objName;
    Chai chaiOne;

    //access the class properties
    //objName.
    chaiOne.teaName = "Lemon tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"water", "lemon", "Honey", "Sugar", "tea leaves"};

    chaiOne.displayChaiDetails();



    //  more than one obj create for same class
    Chai chaiTwo;
    chaiTwo.teaName = "Masala Chai";
    chaiTwo.servings = 5;
    chaiTwo.ingredients = {"Water", "Masala", "Sugar", "milk", "Boiling", "Ginger"};
    return 0;
}