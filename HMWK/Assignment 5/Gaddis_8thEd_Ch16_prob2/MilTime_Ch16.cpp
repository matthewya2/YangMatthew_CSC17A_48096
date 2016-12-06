/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MilTime.cpp
 * Author: Matthew
 *
 * Created on December 4, 2016, 11:06 PM
 */

#include <cstdlib>
#include <string>
#include  "MilTime_Ch16.h"
using namespace std;

bool MilTime::setTime(int miltime,int seconds){    
    bool pm=false;   
    milHours=miltime;
    milSeconds=seconds;
    
    min=miltime%100;        
    miltime-=min;            
    hour=miltime/100;
    sec=seconds;
    if (sec>59){
        string BadSeconds="Invalid second Value.";
        throw(BadSeconds);
    }
    
    if (milHours>2359){
        string BadHour="Invalid Hour Value.";
        throw(BadHour);
    }
    
    if (hour>11){
        pm=true;
        if(hour>12){hour-=12;}
        return pm;
    }
    return pm;
}