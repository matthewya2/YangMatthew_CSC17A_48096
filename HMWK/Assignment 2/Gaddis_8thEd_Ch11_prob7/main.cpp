/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * 
 */

//System Libraries Here
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
struct Info{                        
    string name="EMPTY";            //Name
    string address="";              //street address
    string stateAd="";              //city state zip address
    long int phone=0000000000;      //customer's phone #
    long int balance=0;             //customer's account balance
    int lastPD=0;                   //Last Payment Date
};

//Program Execution Begins Here
int main(int argc, char** argv) {
    const int CUSTOMERS=10;
    Info custInf[CUSTOMERS];
    int choice;                     //choice for the switch.
    int addCust,addCusi=5;          //how many customers to add, tracker.
    int limit;                      //limits the first for-loop.
    int choiC1, choiC2;             //which customer the user picks for
                                    //case 3, and what data of his to edit.
    
    
    //first five customers are here
    custInf[0].name=    "Mark Twain";
    custInf[0].address= "0001 Barnaby Rd";
    custInf[0].stateAd= "Riverside, CA, 92501";
    custInf[0].phone=   9514865881;
    custInf[0].balance= 45001;
    custInf[0].lastPD=  01052016;
    
    custInf[1].name=    "Bill Nye";
    custInf[1].address= "0002 Barnaby Rd";
    custInf[1].stateAd= "Riverside, CA, 92502";
    custInf[1].phone=   9514865882;
    custInf[1].balance= 100002;
    custInf[1].lastPD=  01062016;
    
    custInf[2].name=    "Kyle Summers";
    custInf[2].address= "0003 Barnaby Rd";
    custInf[2].stateAd= "Riverside, CA, 92503";
    custInf[2].phone=   9514865883;
    custInf[2].balance= 45003;
    custInf[2].lastPD=  01052016;
    
    custInf[3].name=    "Corwin Tommerson";
    custInf[3].address= "0004 Barnaby Rd";
    custInf[3].stateAd= "Riverside, CA, 92504";
    custInf[3].phone=   9514865884;
    custInf[3].balance= 45004;
    custInf[3].lastPD=  01052016;
    
    custInf[4].name=    "Dr. Phil";
    custInf[4].address= "0005 Barnaby Rd";
    custInf[4].stateAd= "Riverside, CA, 92505";
    custInf[4].phone=   9514865885;
    custInf[4].balance= 45005;
    custInf[4].lastPD=  01052016;
    
    do{
    cout<<endl<<"what would you like to do?"<<endl;
    cout<<"1. display all data in the array."<<endl;
    cout<<"2. enter more customers, and their data."<<
            " (the program already has "<<addCusi<<" customers info,"<<endl<<
            "  it cannot hold more than 10)"<<endl;
    cout<<"3. edit a specific piece of a customers info"<<endl;
    cin >>choice;
        
    switch(choice)
    {
        case 1:
            for(int i=0;i<CUSTOMERS;i++){
                cout <<"___________________________"<<endl<<
                    "Name: "<<custInf[i].name<<endl<<
                    "Street Address: "<<custInf[i].address<<endl<<
                    "State Address: "<<custInf[i].stateAd<<endl<<
                    "Phone Number: "<<custInf[i].phone  <<endl<<
                    "Balance: "<<custInf[i].balance<<endl<<
                    "Last Payment: "<<custInf[i].lastPD<<endl;
            }
            cout <<"___________________________"<<endl<<endl;
            
            break;
        case 2:
            if (addCusi>=10){cout <<"there is no more free space left,"
                    "this program only holds 10 customers at once"<<endl;
            break;
            }
            cout <<"How many customers would you like to add?"<<endl;
            cin>>addCust;
            limit=addCusi+addCust;
            
            for(int i=addCusi;i<limit;i++){
                cin.ignore(20,'\n');
                cout <<"Name: ";
                getline(cin, custInf[i].name);
                cout <<"Street Address: ";
                getline(cin, custInf[i].address);
                cout <<"State Address: ";
                getline(cin, custInf[i].stateAd);
                cout <<"Phone Number: ";
                cin  >>custInf[i].phone ;
                
                do{                                 //input validation
                    if(custInf[i].balance<0){
                        cout <<"no negative numbers please."<<endl;
                    }
                cout <<"Balance: ";
                cin  >>custInf[i].balance;
                }while(custInf[i].balance<0);
                
                cout <<"Last Payment: ";
                cin  >>custInf[i].lastPD;
                cout <<endl;
            }
            
            addCusi+=addCust;
            
            break;
        case 3:
            cout <<"Which customer do you want to change?(1-10)"<<endl;
            cin>>choiC1;
            cout <<"do you want to edit his 1.(Name) 2.(Street Address) "
                    "3.(State Address)"<<endl<<"4.(Phone Number) 5.(Balance) "
                    "or his 6.(Last Payment)?"<<endl;
            cin>>choiC2;
            
            cin.ignore(20,'\n');
            cout <<"enter data: ";
            switch(choiC2)
            {
                case 1: 
                    getline(cin,custInf[choiC1-1].name);
                    break;
                case 2:
                    getline(cin,custInf[choiC1-1].address);
                    break;
                case 3:
                    getline(cin,custInf[choiC1-1].stateAd);
                    break;
                case 4:
                    cin>>custInf[choiC1-1].phone;
                    break;
                case 5:
                    do{
                        if(custInf[choiC1-1].balance<0){
                            cout <<"no negative numbers please."<<endl;
                        }
                    cin>>custInf[choiC1-1].balance;
                    }while(custInf[choiC1-1].balance);
                    
                    break;
                case 6:
                    cin>>custInf[choiC1-1].lastPD;  
                    break;
                default: continue;
            
            }
            
            break;
        default:
            choice=15;
    }
    }while(choice!=15);
    //Exit        
    return 0;
}
