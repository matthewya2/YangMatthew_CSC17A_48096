/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Sum the numbers between 1 and 10
 * Problem 2 -> Multiply the numbers between 1 and 10
 * Problem 3 -> Divide the numbers between 1 and 10
 * Modified on Mar 21st, 2016
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
struct Weather{
    float totalMR;      //total monthly rain
    float tempH;        //highest temp for the month
    float tempL;        //lowest ""
    float avrgTmp;      //average temp for the month
};
struct MovieData{
    string Title;
    string Directr;
    unsigned short YearRel;    
    unsigned short HowLong;    //in minutes
};
struct MovieData2{
    string Title;
    string Directr;
    unsigned short YearRel;    
    unsigned short HowLong;    //in minutes
    float cost;
    float yr1pay;
};
struct Sales{
    string name;
    float first;
    float second;
    float third;
    float fourth;
    float total;
    float average;
};
struct Weather1{
    float totalMR;      //total monthly rain
    float tempH;        //highest temp for the month
    float tempL;        //lowest ""
    float avrgTmp;      //average temp for the month
};
struct SCinfo{          //soccer player's info
    string name;        //Name
    int number;         //player's number
    int points;         //player's points
};
struct Info{                        
    string name="EMPTY";            //Name
    string address="";              //street address
    string stateAd="";              //city state zip address
    long int phone=0000000000;      //customer's phone #
    long int balance=0;             //customer's account balance
    int lastPD=0;                   //Last Payment Date
};
struct Info2{                        
    string name="EMPTY";            //Name
    string topic="";                //topic
    long int phone=0000000000;      //customer's phone #
    float fee=0;                      //fee
};

enum Month{JANUARY,FEBRUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,
                                SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER};

void print3(Sales);
void print2(MovieData2);
void print(MovieData);
//Execution Begins Here
int main(int argc, char** argv) {
    int choice;
    //General Menu Format
    do{
        
        //Display the selection
        cout<<"please note that i did not place the marksort_structure"<<endl<<
                " problem in this menu since the code was meant to be looked"
                <<endl<<" at and not the output of the code."<<endl;
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 2"<<endl;
        cout<<"Type 3 to solve problem 3"<<endl;
        cout<<"Type 4 to solve problem 4"<<endl;
        cout<<"Type 5 to solve problem 5"<<endl;
        cout<<"Type 6 to solve problem 6"<<endl;
        cout<<"Type 7 to solve problem 7"<<endl;
        cout<<"Type 8 to solve problem 8"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        cin>>choice;
        cin.ignore(20,'\n');
        //Solve a problem that has been chosen.
        switch(choice){
                case 1:{
    MovieData firstM;
    MovieData secondM;
    
    
    cout << "What is the Title of the first movie?"<<endl;
    getline(cin, firstM.Title);
    cout <<"Who is the director?"<<endl;
    getline(cin, firstM.Directr);
    cout <<"When was it released?"<<endl;
    cin >>firstM.YearRel;
    cout <<"How long was the movie in minutes?"<<endl;
    cin >>firstM.HowLong;
    cin.ignore(20,'\n');
    
    cout << "What is the Title of the second movie?"<<endl;
    getline(cin, secondM.Title);
    cout <<"Who is the director?"<<endl;
    getline(cin, secondM.Directr);
    cout <<"When was it released?"<<endl;
    cin >>secondM.YearRel;
    cout <<"How long was the movie in minutes?"<<endl;
    cin >>secondM.HowLong;
    
    print(firstM);
    
    print(secondM);
                    break;
                }
                case 2:{MovieData2 firstM;
    MovieData2 secondM;
    
    
    cout << "What is the Title of the first movie?"<<endl;
    getline(cin, firstM.Title);
    cout <<"Who is the director?"<<endl;
    getline(cin, firstM.Directr);
    cout <<"When was it released?"<<endl;
    cin >>firstM.YearRel;
    cout <<"How long was the movie in minutes?"<<endl;
    cin >>firstM.HowLong;
    cout <<"what was the cost to make this film?";
    cin >>firstM.cost;
    cout <<"what was the first year revenue of this movie?";
    cin >>firstM.yr1pay;
    cin.ignore(20,'\n');
    
    cout << "What is the Title of the second movie?"<<endl;
    getline(cin, secondM.Title);
    cout <<"Who is the director?"<<endl;
    getline(cin, secondM.Directr);
    cout <<"When was it released?"<<endl;
    cin >>secondM.YearRel;
    cout <<"How long was the movie in minutes?"<<endl;
    cin >>secondM.HowLong;
    cout <<"what was the cost to make this film?";
    cin >>secondM.cost;
    cout <<"what was the first year revenue of this movie?";
    cin >>secondM.yr1pay;
    
    print2(firstM);
    
    print2(secondM);
                    break;
                }
                case 3:{
    Sales north;
    Sales east;
    Sales south;
    Sales west;
    short count=0;  //counter
    
    do{
    if (count>0){cout << "please input numbers that arent negative,"
            "into these values"<<endl;}    
    cout << "North Division: "<<endl;
    north.name="North";
    cout << "What are the first quarter sales?"<<endl;
    cin >> north.first;
    cout <<"What are the second quarter sales?"<<endl;
    cin >> north.second;
    cout <<"What are the third quarter sales?"<<endl;
    cin >> north.third;
    cout <<"What are the fourth quarter sales?"<<endl;
    cin >>north.fourth;
    
    count++;
    }while(north.first<0 or north.second<0 or north.third<0 or north.fourth<0);
    
    north.total=north.first+north.second+north.third+north.fourth;
    north.average=north.total/4;
    count=0;
    
    do{
    if (count>0){cout << "please input numbers that arent negative,"
            "into these values"<<endl;}
    cout << "East Division: "<<endl;
    east.name="East";
    cout << "What are the first quarter sales?"<<endl;
    cin >> east.first;
    cout <<"What are the second quarter sales?"<<endl;
    cin >> east.second;
    cout <<"What are the third quarter sales?"<<endl;
    cin >> east.third;
    cout <<"What are the fourth quarter sales?"<<endl;
    cin >>east.fourth;
    count++;
    }while(east.first<0 or east.second<0 or east.third<0 or east.fourth<0);
    
    east.total=east.first+east.second+east.third+east.fourth;
    east.average=east.total/4;
    count=0;
    
    do{
    if (count>0){cout << "please input numbers that arent negative,"
            "into these values"<<endl;}
    cout << "South Division: "<<endl;
    south.name="South";
    cout << "What are the first quarter sales?"<<endl;
    cin >> south.first;
    cout <<"What are the second quarter sales?"<<endl;
    cin >> south.second;
    cout <<"What are the third quarter sales?"<<endl;
    cin >> south.third;
    cout <<"What are the fourth quarter sales?"<<endl;
    cin >>south.fourth;
    count++;
    }while(south.first<0 or south.second<0 or south.third<0 or south.fourth<0);    
    
    south.total=south.first+south.second+south.third+south.fourth;
    south.average=south.total/4;
    count=0;
    
    do{
    if (count>0){cout << "please input numbers that arent negative,"
            "into these values"<<endl;}
    cout << "West Division: "<<endl;
    west.name="West";
    cout << "What are the first quarter sales?"<<endl;
    cin >> west.first;
    cout <<"What are the second quarter sales?"<<endl;
    cin >> west.second;
    cout <<"What are the third quarter sales?"<<endl;
    cin >> west.third;
    cout <<"What are the fourth quarter sales?"<<endl;
    cin >>west.fourth;
    count++;
    }while(west.first<0 or west.second<0 or west.third<0 or west.fourth<0);    
    
    west.total=west.first+west.second+west.third+west.fourth;
    west.average=west.total/4;
    count=0;
   
    print3(north);
    
    print3(east);
    
    print3(south);
    
    print3(west);
                    break;
                }
                case 4:{
    const int MONTHS=12;
    Weather weather[MONTHS];
    short i;  //counter
    float totalYR=0;        //total yearly rain
    float avgMR;            //average monthly rain
    float avgAvgM=0;        //average of the average monthly temperature
    int monthH=0, monthL=0; //month where the highest temp is and lowest temp
    int lowT;           //highest temp
    int highT;          //lowest temp
    
    for(i=0;i<MONTHS;i++){
    cout << "What is the total rain for month "<< i+1 <<"?"<<endl;
    cin >> weather[i].totalMR;
    
    do{
    cout << "What is the highest temperature this month in fahrenheit?"<<endl;
    cin >> weather[i].tempH;
    //input validation
    if(weather[i].tempH<=(-100) || weather[i].tempH>=140){
        cout << "Please use temperatures higher than -100 and less than"
                " 140."<<endl;
    }
    }while(weather[i].tempH<=(-100) || weather[i].tempH>=140);
    
    do{
    cout <<"What is the lowest temperature this month"
            " in fahrenheit?"<<endl;
    cin >> weather[i].tempL;  
    //input validation
    if(weather[i].tempH<=(-100) || weather[i].tempH>=140){
        cout << "Please use temperatures higher than -100 and less than"
                " 140."<<endl;
    }
    
    }while(weather[i].tempL<=(-100) || weather[i].tempL>=140);
    }
    
    for(i=0;i<MONTHS;i++){        //average temperature of the month
    weather[i].avrgTmp=(weather[i].tempL+weather[i].tempH) / 2;
    }
    
    for(i=0;i<MONTHS;i++){
        totalYR+=weather[i].totalMR; 
    }
    
    for(i=0;i<MONTHS;i++){
        avgAvgM+=weather[i].avrgTmp;        
    }
    
    avgAvgM/=MONTHS;
    avgMR=totalYR/MONTHS;
    
    
    lowT=weather[0].tempL;
    highT=weather[0].tempH;
    for(i=0;i<MONTHS-1;i++){       
        if(lowT>weather[i+1].tempL){
            lowT=weather[i+1].tempL;
            monthL=(i+1);
        }
        
        if(highT<weather[i+1].tempH){
            highT=weather[i+1].tempH;
            monthH=(i+1);
        }
    }

    cout <<endl;
    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout <<"the average monthly rainfall is "<< avgMR <<"."<<endl;
    cout <<"The total yearly rainfall is "<< totalYR <<"."<<endl;
    cout <<"the highest temperature was "<< highT <<", and that occurred "
            "in month #"<< monthH+1 <<","<<endl;
    cout << "while the lowest was "<< lowT <<", and that occurred in month"
                    " #"<< monthL+1 <<endl;
    cout << "the monthly average temperature is "<<avgAvgM<<".";
    
                    break;
                }
                case 5:{
    const int MONTHS=12;
    Weather1 weather[MONTHS];
    short i;  //counter
    float totalYR=0;        //total yearly rain
    float avgMR;            //average monthly rain
    float avgAvgM=0;        //average of the average monthly temperature
    int monthH=0, monthL=0; //month where the highest temp is and lowest temp
    int lowT;           //highest temp
    int highT;          //lowest temp
    
    for(i=JANUARY;i<=DECEMBER;i++){
    cout << "What is the total rain for month "<< i+1 <<"?"<<endl;
    cin >> weather[i].totalMR;
    
    do{
    cout << "What is the highest temperature this month in fahrenheit?"<<endl;
    cin >> weather[i].tempH;
    //input validation
    if(weather[i].tempH<=(-100) || weather[i].tempH>=140){
        cout << "Please use temperatures higher than -100 and less than"
                " 140."<<endl;
    }
    }while(weather[i].tempH<=(-100) || weather[i].tempH>=140);
    
    do{
    cout <<"What is the lowest temperature this month"
            " in fahrenheit?"<<endl;
    cin >> weather[i].tempL;  
    //input validation
    if(weather[i].tempH<=(-100) || weather[i].tempH>=140){
        cout << "Please use temperatures higher than -100 and less than"
                " 140."<<endl;
    }
    
    }while(weather[i].tempL<=(-100) || weather[i].tempL>=140);
    }
    
    for(i=JANUARY;i<=DECEMBER;i++){        //average temperature of the month
    weather[i].avrgTmp=(weather[i].tempL+weather[i].tempH) / 2;
    }
    
    for(i=JANUARY;i<=DECEMBER;i++){
        totalYR+=weather[i].totalMR; 
    }
    
    for(i=JANUARY;i<=DECEMBER;i++){
        avgAvgM+=weather[i].avrgTmp;        
    }
    
    avgAvgM/=MONTHS;
    avgMR=totalYR/MONTHS;
    
    
    lowT=weather[JANUARY].tempL;
    highT=weather[JANUARY].tempH;
    for(i=JANUARY;i<DECEMBER;i++){       
        if(lowT>weather[i+1].tempL){
            lowT=weather[i+1].tempL;
            monthL=(i+1);
        }
        
        if(highT<weather[i+1].tempH){
            highT=weather[i+1].tempH;
            monthH=(i+1);
        }
    }

    cout <<endl;
    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout <<"the average monthly rainfall is "<< avgMR <<"."<<endl;
    cout <<"The total yearly rainfall is "<< totalYR <<"."<<endl;
    cout <<"the highest temperature was "<< highT <<", and that occurred "
            "in month #"<< monthH+1 <<","<<endl;
    cout << "while the lowest was "<< lowT <<", and that occurred in month"
                    " #"<< monthL+1 <<endl;
    cout << "the monthly average temperature is "<<avgAvgM<<".";
    
                    break;
                }
                case 6:{
    const int PLAYERS=12;   //players total
    SCinfo info[PLAYERS];   //structure array
    short i;                //counter
    int totalP=0;           //total points
    int playerH;            //player with highest points
    int highP;              //highest points
    
    for(i=0;i<PLAYERS;i++){
        cout <<"what is player #"<< i+1 <<"'s name?"<<endl;
        getline(cin,info[i].name);
        
        do{
        cout <<"what is his player number?"<<endl;
        cin >> info[i].number;
        if(info[i].number<0){cout<< "no negative numbers please."<<endl;}
        }while(info[i].number<0);
        do{
        cout << "how many points has he scored?"<<endl;
        cin >> info[i].points;
        if(info[i].points<0){cout<< "no negative numbers please."<<endl;}
        }while(info[i].points<0);
        
        cin.ignore(20,'\n');
    }
    
    for(i=0;i<PLAYERS;i++){
        totalP+=info[i].points;
    } 
    
    highP=info[0].points;  
    playerH=1;   
    for(int i=1;i<PLAYERS;i++){
        if(highP<info[i].points){
            highP=info[i].points;
            playerH=i;
        }
    }
    
    cout <<"-----------------------------------------------"<<endl;
    cout <<"the team earned "<< totalP << "points total."<<endl;
    cout <<"the highest amount of points is: "<<highP<<endl;
    cout <<"the player who scored those points is "<<info[playerH].name<<","
            <<endl<<"and his player number is"<<info[playerH].number<<endl;
    
    for(i=0;i<PLAYERS;i++){
    cout <<"________________________________________|"<<endl;
    cout <<"Player "<<info[i].name<<setw(15)<<
            "Player #"<<info[i].number<<setw(15)<<
            "points:"<<info[i].points<<"|"<<endl;
    }
                    break;
                }
                case 7:{
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
                    break;
                }
                case 8:{
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
                    break;
                }
                
            default:{
                choice=15;
                }
        };
    }while(choice<=10);
    return 0;
}
void print( MovieData md ){
    cout <<endl;
    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout <<"Title: "<<md.Title<<endl;
    cout <<"Director: "<<md.Directr<<endl;
    cout <<"Year released: "<<md.YearRel<<endl;
    cout <<"Length: "<<md.HowLong<<endl;
    
}
void print2( MovieData2 md ){
    float year1P;
    
    year1P=md.yr1pay-md.cost;
    
    cout <<endl;
    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout <<"Title: "<<md.Title<<endl;
    cout <<"Director: "<<md.Directr<<endl;
    cout <<"Year released: "<<md.YearRel<<endl;
    cout <<"Length: "<<md.HowLong<<endl;
    cout <<"The movie had a "<<year1P<< " revenue on the first year."<<endl;
    
}
void print3( Sales div ){
    
    cout <<endl;
    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout <<div.name<<" division."<<endl;
    cout <<"Earned: $"<<div.total<<" total."<<endl;
    cout <<"And has an average quarter sale of "<<div.average<<endl;
    
    
}