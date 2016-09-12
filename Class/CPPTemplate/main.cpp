/* 
 * File:   main.cpp
 * Author: Matthew
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Here

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int a;
    int *ptr;
    ptr=&a;
    *ptr=*&a;
    cout << ptr;
    //Input or initialize values Here
    
    //Process-Calculations Here
    
    //Output Here

    //Exit
    return 0;
}

