/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on December 4, 2016, 10:44 PM
 */

#include <cstdlib>
#include <iostream>
#include "MilTime.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int milTime,milHour,milSec;
    int standH, standM;
    bool pm;
    
    cout <<"what time is it,(hours) in Military time?"<<endl;
    cin>>milTime;
    cout <<"how many seconds?"<<endl;
    cin>>milSec;
    MilTime mTime;
    pm=mTime.setTime(milTime,milSec);
    
    standH=mTime.getHr();
    standM=mTime.getMin();
    milHour=mTime.getHour();
    
    //output standard time
    cout <<"standard time is: "<< standH<<":"<<standM<<", and "<<milSec<<" seconds, ";
    if (pm==true){
        cout <<"P.M."<<endl;
    }
    else{cout <<"A.M."<<endl;}
    
    cout <<"Military time is: "<<milHour<<", and "<<milSec<<" seconds, ";
    if (pm==true){
        cout <<"P.M."<<endl;
    }
    else{cout <<"A.M."<<endl;}
    return 0;
}

