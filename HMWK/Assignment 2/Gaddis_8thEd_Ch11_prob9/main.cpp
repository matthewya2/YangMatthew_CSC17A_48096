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
struct Info2{                        
    string name="EMPTY";            //Name
    string topic="";                //topic
    long int phone=0000000000;      //customer's phone #
    float fee=0;                      //fee
};

//Program Execution Begins Here
int main(int argc, char** argv) {
    const int CUSTOMERS=10;
    Info2 custInf[CUSTOMERS];
    int choice;                     //choice for the switch.
    int addCust,addCusi=5;          //how many customers to add, tracker.
    int limit;                      //limits the first for-loop.
    int choiC1, choiC2;             //which customer the user picks for
                                    //case 3, and what data of his to edit.
    
    
    //first five customers are here
    custInf[0].name=    "Mark Twain";
    custInf[0].topic=   "books";
    custInf[0].phone=   9514865881;
    custInf[0].fee=     5.5;
    
    custInf[1].name=    "Bob Ross";
    custInf[1].topic=   "painting";
    custInf[1].phone=   9514865882;
    custInf[1].fee=     5.5;
    
    custInf[2].name=    "Steve Jobs";
    custInf[2].topic=   "technology";
    custInf[2].phone=   9514865883;
    custInf[2].fee=     5.5;
    
    custInf[3].name=    "Michael Jordan";
    custInf[3].topic=   "BasketBall";
    custInf[3].phone=   9514865884;
    custInf[3].fee=     5.5;
    
    custInf[4].name=    "Tiger Woods";
    custInf[4].topic=   "Marital Counseling";
    custInf[4].phone=   9514865885;
    custInf[4].fee=     5.5;
    
    do{
    cout<<"what would you like to do?"<<endl;
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
                    "Topic: "<<custInf[i].topic<<endl<<
                    "Phone Number: "<<custInf[i].phone  <<endl<<
                    "fee: "<<custInf[i].fee<<endl;
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
                cout <<"Topic: ";
                getline(cin, custInf[i].topic);
                cout <<"Phone Number: ";
                cin  >>custInf[i].phone ;
                
                do{                                 //input validation
                    if(custInf[i].fee<0){
                        cout <<"no negative numbers please."<<endl;
                    }
                cout <<"Fee: ";
                cin  >>custInf[i].fee ;
                }while(custInf[i].fee<0);
            }
            
            addCusi+=addCust;
            
            break;
        case 3:
            cout <<"Which customer do you want to change?(1-10)"<<endl;
            cin>>choiC1;
            cout <<"do you want to edit his 1.(Name) 2.(Topic) "
                    "3.(Phone Number) 4.(Fee)"<<endl;
            cin>>choiC2;
            
            cin.ignore(20,'\n');
            cout <<"enter data: ";
            switch(choiC2)
            {
                case 1: 
                    getline(cin,custInf[choiC1-1].name);
                    break;
                case 2:
                    getline(cin,custInf[choiC1-1].topic);
                    break;
                case 3:
                    cin >> custInf[choiC1-1].phone;
                    break;
                case 4:
                    cin>>custInf[choiC1-1].fee;
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
