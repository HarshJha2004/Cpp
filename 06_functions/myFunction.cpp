// returnType functionName(parameters){
//  function body
// }

#include<iostream>
using namespace std;

int checkTemperature(int temperature){
    return temperature;
}

// declaration of function
void serveChai(int cups);

//  function overloading
void serveChai(string teaType = "Masala Tea") //this is called default parameter)
    {
    //formal parameter
        int cups = 4;
    cout << "Serving " << teaType << endl;
}

void makeChai(){
cout << "Boil water, adding Tea Leaves, adding  sugar, straining...";
}


int main(){
  int totalTemperature = checkTemperature(10);
  
  // serveChai(5); //it is also called actual parameter because the value is passing.
 
 // serveChai("lemon tea");

 // function calling time when no argument pass?
        serveChai();


}

//  definition of function
void serveChai(int cups){
    cout << "The total chai served is : " << cups;
}