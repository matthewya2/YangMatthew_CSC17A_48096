/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int charCnt(char *);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=51;
    char phrase[SIZE];
    short chars;

    
    
    cout << "What is the phrase you would like for me "
            "to count the characters in? (no more than 50)"<<endl;
    cin.getline(phrase,SIZE);
    
    chars=charCnt(phrase);
    cout <<"you have "<<chars<<" characters inside your chosen phrase.";
    

    //Exit
    return 0;
}
int charCnt(char *phrase){
    short chars=0;
    
    
    while(*phrase != '\0'){
        chars++;
        phrase++;
    }
    
    
    return chars;
}
