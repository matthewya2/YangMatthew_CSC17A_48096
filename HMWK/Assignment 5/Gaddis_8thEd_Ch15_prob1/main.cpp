/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on December 3, 2016, 8:29 PM
 */

#include <cstdlib>
#include <iostream>
#include "employee.h"
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string name, num, date;
    int shift;
    float pay;
    
    
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Enter number:"<<endl;
    cin>>num;
    cout<<"Enter date:"<<endl;
    cin>>date;
    cout<<"Enter 1 for day shift and 2 for night shift:"<<endl;
    cin>>shift;
    cout<<"Enter Hourly Pay:"<<endl;
    cin>>pay;
    
    try{
        ProductionWorker info (shift);
        info.setName(name);
        info.setNum(num);
        info.setDate(date);
        info.setShift(shift);
        info.setPayRate(pay);
        
        cout<<"Name: "<<info.getName()<<endl;
        cout<<"Date: "<<info.getDate()<<endl;
        cout<<"Number: "<<info.getNumber()<<endl;
        if(info.getShift()==1){
            cout <<"DayShift,"<<endl;
        }
        else{
            cout <<"NightShift,"<<endl;
        }
        cout<<"Hourly Pay: "<<info.getPayRate()<<endl;
    }
    catch(string shiftEr){
        cout <<"Error: "<< shiftEr;
    }
    
    
    
    
    return 0;
}

