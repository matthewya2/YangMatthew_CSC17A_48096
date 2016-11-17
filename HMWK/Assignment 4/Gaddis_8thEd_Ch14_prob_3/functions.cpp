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
#include "Number.h"

Number::Number(int number){
    date=number;
}
void Number::translate(){
    if (date<=31){
        month = "January";
        day =date;
    }
    else if (date<=59){
        month = "February";
        day = date-31;
    }
    else if (date<=90){
        month = "March";
        day = date-59;
    }
    else if (date<=120){
        month = "April";
        day = date-90;
    }
    else if (date<=151){
        month = "May";
        day = date-120;
    }
    else if (date<=181){
        month = "June";
        day = date-151;
    }
    else if (date<=212){
        month = "July";
        day = date-181;
    }
    else if (date<=243){
        month = "August";
        day = date-212;
    }
    else if (date<=273){
        month = "September";
        day = date-243;
    }
    else if (date<=304){
        month = "October";
        day = date-273;
    }
    else if (date<=334){
        month = "November";
        day = date-304;
    }
    else if (date<=365){
        month = "December";
        day = date-334;
    }
}