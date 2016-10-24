/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
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
#include "Info.h"
//Global Constants

//Function Prototypes


//Execution Begin Here!
int main(int argc, char** argv) {
    int custs; 
    int balT=0, depoST=0, checkT=0, *checkV, *depoSV;
    
    cout << "how many customer's data will you be entering in?"<<endl;
    cin >> custs;

    Info *cInfo=new Info[custs];
    
    for (int i=0;i<custs;i++){
        cin.ignore(20,'\n');
        cout <<"What is your name?"<<endl;
        getline(cin, cInfo[i].Name);
        cout <<"what is your address?"<<endl;
        getline(cin, cInfo[i].Address);
        do{                                 //input validation
        cout <<"what is your ID number?(max 5 digits)"<<endl;
        cin>> cInfo[i].IDnum;
        }while(cInfo[i].IDnum<10000||cInfo[i].IDnum>99999);
        cout <<"what is your Balance at the beginning of the month?"<<endl;
        cin>> cInfo[i].Bal;
        cout <<"How many checks did you make?"<<endl;
        cin>> cInfo[i].Checks;
        cout <<"How many deposits did you receive?"<<endl;
        cin>> cInfo[i].DepoS;
        
        checkV = new int [cInfo->Checks];
        depoSV = new int [cInfo->DepoS];
        
        for(int c=0;c<cInfo->Checks;c++){        //check counter
            cout <<"what were the values of these checks?"<<endl;
            cout <<"enter check #"<<c+1<<": ";
            cin >> checkV[c];     
            checkT+=checkV[c];
        }
        
        cout << "your checks add up to $"<<checkT<<endl;
        
        for(int d=0;d<cInfo->DepoS;d++){        //Deposit counter
            cout <<"what were the values of these deposits?"<<endl;
            cout <<"enter deposit #"<<d+1<<": ";
            cin >> depoSV[d]; 
            depoST+=depoSV[d];
        }
        
        cout << "your deposits add up to $"<<depoST<<endl;
        
        balT=cInfo[i].Bal-checkT+depoST;
        cout << "your total balance in your account is $"<<balT<<"."<<endl;
       
        if(balT<0){
           balT-=15;
           cout << "since you have overdrawn your account money, you have been"
                   " fined $15. "<<endl<<"with this change, your account now holds a"
                   " balance of, $"<<balT;
           
        }
       
       cout << cInfo[i].Name << " lives on "<<cInfo[i].Address<<" and her ID"
               " number is "<<cInfo[i].IDnum<<"."<<endl<< "the total balance of"
               " his/her account is now, $"<<balT<<endl<<endl; 
    }
    
    
    delete []cInfo;
    delete []checkV;
    delete []depoSV;
    
}
