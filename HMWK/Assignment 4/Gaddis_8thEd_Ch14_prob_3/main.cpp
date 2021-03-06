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
#include "Number3.h"
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    int userIn;
    string month;
    int yester, tomo;
    
    cout << "what number will you pick to translate into the date?(0-365)"<<endl;
    cin >> userIn;
    //constructor
    Number number(userIn);
    //creates the date
    number.translate();
    //outputs date
    number.print();
    cout << endl;
    number++;
    cout << "Tomorrow's date is ";
    number.print();
    number--;
    number--;
    cout <<endl<< "Yesterday's date is ";
    number.print();

    //Exit
    return 0;
}

