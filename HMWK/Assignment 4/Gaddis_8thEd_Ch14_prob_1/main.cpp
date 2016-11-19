/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;
#include "Numbers.h"
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    int userIn;
    
    
    cout << "what number will you pick to translate into english?(0-9999)"<<endl;
    cin >> userIn;
    //constructor
    Numbers number(userIn);
    
   


    //Exit
    return 0;
}

