/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   functions.cpp
 * Author: rcc
 *
 * Created on November 17, 2016, 1:25 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
#include "Numbers.h"


void Numbers::print(){
    int buffer;
    string lessThan20[20] = {"zero", "one", "two", "three", "four", "five", 
                             "six", "seven", "eight", "nine", "ten", "eleven", 
                             "twelve", "thirteen", "fourteen", "fifteen", 
                             "sixteen", "seventeen", "eighteen", "nineteen"};
    
    string tens[10] = {" ", "ten", "twenty", "thirty", "fourty", "fifty", 
                       "sixty", "seventy", "eighty", "ninety" };
    
    string hundred = "hundred";
    string thousand = "thousand";
    
    buffer=number/1000;
    if (buffer>0){
        cout<<lessThan20[buffer]<<" "<<thousand<<" ";
        number%=1000;
    }
    
    buffer=number/100;
    if (buffer>0){
        cout <<lessThan20[buffer]<<" "<<hundred<<" ";
        number%=100;
    }
    
    if(number>=20){
        buffer=number/10;
        if(buffer>0){
            cout << tens[buffer]<<" ";
        }
    }
    else if (number>=10){
        cout <<lessThan20[number]<<" ";
        return;
    }
    number%=10;
    if(number>0){
    cout <<lessThan20[number];
    }
        
    
    
}