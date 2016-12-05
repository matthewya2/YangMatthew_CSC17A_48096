/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on December 4, 2016, 3:10 PM
 */

#include <cstdlib>
#include <iostream>
#include "employee.h"
using namespace std;


int main(int argc, char** argv) {
    float goal,bone,work,sal;   //goal/bonus/current money/salary
    float totSal;               //total salary
    int null=1;                 //void
    cout << "what is your production goal?"<<endl;
    cin >> goal;
    cout << "what is your bonus if you accomplish that salary goal?"<<endl;
    cin >> bone;
    cout <<"how much have you actually accomplished, money-wise?"<<endl;
    cin >> work;
    cout << "how much is your normal salary?"<<endl;
    cin>> sal;
    
    ShiftSupervisor SS(null);
    
    if (goal<=work){    SS.setSalary(bone,sal);}
    else{   SS.setSalary(sal);}
    totSal=SS.getSalary();
    cout <<"you have made, $"<<totSal<<endl;
    return 0;
    
}

