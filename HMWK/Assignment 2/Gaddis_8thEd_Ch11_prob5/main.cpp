/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  same as previous problem, but with enumerated stuff
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
struct Weather1{
    float totalMR;      //total monthly rain
    float tempH;        //highest temp for the month
    float tempL;        //lowest ""
    float avrgTmp;      //average temp for the month
};
enum Month{JANUARY,FEBRUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,
                                SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER};

//Program Execution Begins Here
int main(int argc, char** argv) {
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
    
    //Exit
    return 0;
}
