/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;
#include "Date.h"

int main(int argc, char** argv) {
    Date date;
    int temp;
    bool error;
    cout << "what is the date? "<<endl;
    cout << "input the year first. (yyyy)"<<endl;
    cin  >> temp;
    date.setYear(temp);
    
    cout << "Now input the month. (mm)"<<endl;
    cin  >> temp;
    error=date.setMonth(temp);
    while(error==false){
        cout <<"please enter a valid month 1-12."<<endl;
        cin>>temp;
        error=date.setMonth(temp);
    }
    
    cout << "now input the day.(dd)"<<endl;
    cin  >> temp;
    error=date.setDay(temp);
    while(error==false){
        cout <<"please enter a valid day 1-31."<<endl;
        cin>>temp;
        error=date.setDay(temp);
    }
    
    date.print1();
    date.print2();
    date.print3();
    //Exit
    return 0;
}

