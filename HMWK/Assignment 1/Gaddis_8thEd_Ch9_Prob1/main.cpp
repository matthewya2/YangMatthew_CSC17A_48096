/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int userI, *arr, *pntr;
    
    cout << "how large should the array be?"<<endl;
    cin >> userI;
    
    arr = new int [userI];  
    
    cout <<"please input each integer one at a time"
            " in order to fill the dynamic array."<<endl;
    for(int i=0;i<userI;i++){
        cin >> *(arr+i);
    }
    pntr=arr;
    for(int i=0;i<userI;i++){
        cout << *(pntr+i)<<setw(3);
    }
    
    delete [] arr;
    //Exit
    return 0;
}
