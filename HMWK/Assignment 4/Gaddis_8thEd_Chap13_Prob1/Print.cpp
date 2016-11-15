/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

//System Libraries Here
#include <iostream>
using namespace std;
#include "Date.h"

bool Date::setDay(int d){
    bool success = false;
    if ( d > 0 && d < 32) {
        day = d;
        success = true;
    }
    return success;
}
bool Date::setMonth(int m){
    bool success = false;
    if ( m > 0 && m < 13) {
        month = m;
        success = true;
    }
    return success;
}
bool Date::setYear(int y){
        year = y;
}
void Date::print1(){
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}
void Date::print2(){
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}
void Date::print3(){
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}