/* 
 * File:   main.cpp
 * Author: Matthew
 * Created on September 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int  month, year1, day, a400,ansr4 year2;
    
    do{
        cout<< "enter a valid month (1-12)"<<endl;
        cin >> month;
    }while(month<1 or month>12);
    
    do{
        cout<< "enter a valid year"<<endl;
        cin >> year1;
    }while(year1<1);
    
        if (month=1,3,5,7,8,10,12){
            day=31;
        }
        if (month=4,6,9,11){
            day=30;
        }
    
    
    if (month=2){
        year1=year2;
        year2=year2%100
        if (year1=0){
            year1=year2;
            year2=year2%400
            if (0=year%400){
                day=28;
            }
        }
        if (0=year%4){
            day=28;
        }
        else(day=28);
    }
    
    cout << day<<endl;
    
    //Exit
    return 0;
}

