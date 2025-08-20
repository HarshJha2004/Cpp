#include <iostream>
#include <string>

using namespace std;

int main(){
    
   string professionalIdentity;
   int cupCount;

   cout << "Enter your professional Identity " << endl;
   cin >> professionalIdentity;

   cout << "Enter the Cups you want : " << endl;
   cin >> cupCount;

   if(professionalIdentity == "student" || cupCount > 15){
    cout << "You are eligible for tea subciption";
   } else{
    cout << "you are not eligible for tea subcription";
   }
    return 0;
}