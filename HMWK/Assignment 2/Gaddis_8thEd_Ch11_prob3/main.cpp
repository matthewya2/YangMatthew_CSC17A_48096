/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
struct Sales{
    string name;
    float first;
    float second;
    float third;
    float fourth;
    float total;
    float average;
};

void print(Sales);
//Program Execution Begins Here
int main(int argc, char** argv) {
    Sales north;
    Sales east;
    Sales south;
    Sales west;
    
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
    
    north.total=north.first+north.second+north.third+north.fourth;
    north.average=north.total/4;
    
    
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
    
    east.total=east.first+east.second+east.third+east.fourth;
    east.average=east.total/4;
    
    
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
    
    south.total=south.first+south.second+south.third+south.fourth;
    south.average=south.total/4;
    
    
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
    
    west.total=west.first+west.second+west.third+west.fourth;
    west.average=west.total/4;
    
   
    print(north);
    
    print(east);
    
    print(south);
    
    print(west);
    //Exit
    return 0;
}

void print( Sales div ){
    
    cout <<endl;
    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout <<div.name<<" division."<<endl;
    cout <<"Earned: $"<<div.total<<" total."<<endl;
    cout <<"And has an average quarter sale of "<<div.average<<endl;
    
    
}