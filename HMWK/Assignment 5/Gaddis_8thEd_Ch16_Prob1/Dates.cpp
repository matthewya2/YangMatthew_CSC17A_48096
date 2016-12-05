/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

//System Libraries Here
#include <iostream>
using namespace std;
#include "Date.h"

void Date::setDay(int d){
    if (d<0 || d>31) {
        string err="Wrong day";
        throw(err);
    }
    day=d;
}
void Date::setMonth(int m){
    if (m<1 || m>12) {
        string err="Wrong month";
        throw(err);
    }
    month=m;
}
void Date::setYear(int y){
        year = y;
}
void Date::print1(){
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}
void Date::print2(){
    switch(month){
        case 1: cout<<"January";break;
        case 2: cout<<"February";break;
        case 3: cout<<"March";break;
        case 4: cout<<"April";break;
        case 5: cout<<"May";break;
        case 6: cout<<"June";break;
        case 7: cout<<"July";break;
        case 8: cout<<"August";break;
        case 9: cout<<"September";break;
        case 10: cout<<"October";break;
        case 11: cout<<"November";break;
        case 12: cout<<"December";
    }
    cout<<" "<<day<<", "<<year<<endl;
}
void Date::print3(){
    cout<<day<<" ";
    switch(month){
        case 1: cout<<"January";break;
        case 2: cout<<"February";break;
        case 3: cout<<"March";break;
        case 4: cout<<"April";break;
        case 5: cout<<"May";break;
        case 6: cout<<"June";break;
        case 7: cout<<"July";break;
        case 8: cout<<"August";break;
        case 9: cout<<"September";break;
        case 10: cout<<"October";break;
        case 11: cout<<"November";break;
        case 12: cout<<"December";
    }
    cout <<" "<<year<<endl;
}