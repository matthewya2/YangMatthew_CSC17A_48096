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
    
    cout << "what is the date? "<<endl;
    cout << "input the year first. (yyyy)"<<endl;
    cin  >> temp;
    date.setYear(temp);
    
    try{
        cout << "Now input the month. (mm)"<<endl;
        cin  >> temp;
        date.setMonth(temp);

        cout << "now input the day.(dd)"<<endl;
        cin  >> temp;
        date.setDay(temp);
    }
    catch(string err){
        cout <<"error: "<<err<<endl;
    }
    
    date.print1();
    date.print2();
    date.print3();
    //Exit
    return 0;
}

