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
struct MovieData{
    string Title;
    string Directr;
    unsigned short YearRel;    
    unsigned short HowLong;    //in minutes
    float cost;
    float yr1pay;
};

void print(MovieData);
//Program Execution Begins Here
int main(int argc, char** argv) {
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
    
    print(firstM);
    
    print(secondM);
    
    //Exit
    return 0;
}

void print( MovieData md ){
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