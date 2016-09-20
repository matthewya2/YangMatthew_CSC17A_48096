/* 
 * File:   main.cpp
 * Author: Matthew Yang
 *
 * Created on September 19, 9:34 PM
 */
#include <iomanip>
#include <iostream>
using namespace std;

//global constants

int main(int argc, char** argv) {
//set variable types
    float yen, euro, dollar; 
    
    cout << "How many US dollars do you have that you want to convert into "
            "Yen, and then euros respectively?"<<endl; 
            cin >> dollar;
            
        yen = 101.89*dollar;
        euro= 0.90*dollar;
        cout<<showpoint;
            cout<< "You have "<< yen <<setprecision(2)<<fixed<<" yen, and "
                    << euro << " euros.";
                    
    return 0;
}

