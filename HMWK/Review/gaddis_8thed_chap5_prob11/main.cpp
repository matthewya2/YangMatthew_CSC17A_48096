/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on September 20, 2016, 10:13 PM
 */

#include <iostream>
#include <cmath>
using namespace std;

// f(x) prototypes
void calc(float, float, float);

int main(int argc, char** argv) {
    float start, days, growth;
    
    do{
    cout << "how many days will your species be growing?"<<endl<<
            "(must be at least 1)";
    cin >> days;
    }while(days<1);
    
    do{cout << "and how many species are alive as of now?"<<endl<<
            "(must be at least 2)";
    cin >>  start;
    }while(start<2);
    
    do{
    cout << "how fast is your species growing per day as a percentage? "<<endl<<
            "(must be more than 0)"<<endl;
    cin >>  growth;
    }while(growth<=0);
        
    calc(days,start,growth);
    
    return 0;
}

void calc(float days,float start,float growth)
{
    growth/=100; 
    for(int i=1;i<=days;i++){
        start+=start*growth;
        cout << "your species will grow to around "<<start<< " on day "
                <<i<<"."<<endl;
    }
    int finish=start;
    cout << "your species will grow to a size of "<<finish<<".";
}