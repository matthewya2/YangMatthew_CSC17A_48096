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
#include "Info.h"

int main(int argc, char** argv) {
    string sTemp;
    long int temp;
    const int SIZE=3;
    Info info[SIZE];
    
    for (int i=0;i<SIZE;i++){
        if (i==0){cout << "what is Your information? "<<endl;}
        if (i==1){cout << "what is your Family Member's info? "<<endl;}
        if (i==2){cout << "what is your Friend's info"<<endl;}
        
        
    cout << "input name"<<endl;
    cin  >> sTemp;
    info[i].setName(sTemp);
    
    
    cout << "Now input the address."<<endl;
    cin  >> sTemp;
    info[i].setAddress(sTemp);
    
    
    cout << "now input age"<<endl;
    cin  >> temp;
    info[i].setAge(temp);
    
    cout << "now input the Phone Number."<<endl;
    cin  >> temp;
    info[i].setPhone(temp);
    }
    
    
    //Exit
    return 0;
}

