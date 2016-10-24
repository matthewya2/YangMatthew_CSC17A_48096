/* 
 * File:   main.cpp
 * Author: Matthew Yang
 * Created on September 28, 2016, 2:01 PM
 * Purpose:  Shortest Sort using Array Structure
 *          Version 1 no sorting
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
#include <iomanip>
using namespace std;

//User Libraries
#include "EmpInfo.h"

//Global Constants

//Function Prototypes


//Execution Begin Here!
int main(int argc, char** argv) {
    int empNum;
    int moneyM;       //money made
    int counter[2] ={0};//counts so the function knows if it should output zero  
    
    cout << "how many employees will be using this program?"<<endl;
    cin >> empNum;
    
    EmpInfo *empInfo=new EmpInfo [empNum];
    
    for(int i=0;i<empNum;i++){
        cin.ignore(20,'\n');
        cout << "employee number "<<i+1<<"."<<endl;
        cout <<"what is your name?:";
        getline(cin, empInfo[i].name);
        
        do{
        cout << "how many hours do you work a week?"<<endl<<
                "no negative numbers please"<<endl;
        cin >>empInfo[i].hours;
        }while(empInfo[i].hours<0);
        do{
        cout <<"how much do you get paid to work?(ex. sam works for $10.50"
                " an hour, so sam inputs 10.5)"<<endl<<
                "no negative numbers please"<<endl;
        cin >> empInfo[i].rateP; 
        }while(empInfo[i].rateP<0)
        if (empInfo[i].hours<40){
            moneyM= (empInfo[i].rateP*empInfo[i].hours);                    
        }
        if (empInfo[i].hours>40 && empInfo[i].hours<=50){
            moneyM= (empInfo[i].rateP*40)+(empInfo[i].hours-40)
                    *(empInfo[i].rateP*2);
        }
        if (empInfo[i].hours>50){
            moneyM= (empInfo[i].rateP*40)+(empInfo[i].rateP*2*10)
                    +(empInfo[i].hours-50)*(empInfo[i].rateP*3);
        }
        
        
       

    
        cout <<endl<<"-Paycheck-"<<endl;
    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout <<"Company"<<endl;
    cout <<"Address"<<endl;
    cout <<"Name: "<<empInfo[i].name<<setw(15);
    cout <<"Amount: "<<moneyM<<endl<<endl<<endl;
    }
    
    
    
    delete [] empInfo;
}

