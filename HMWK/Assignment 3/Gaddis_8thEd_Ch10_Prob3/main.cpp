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
int wordCnt(char *);
int avgWrds(char *,int[]);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=51;
    char phrase[SIZE];
    short words;
    short avg;
    
    
    cout << "What is the phrase you would like for me "
            "to count the words in? (no more than 50)"<<endl;
    cin.getline(phrase,SIZE);
    
    words=wordCnt(phrase);
    cout <<"you have "<<words<<" words inside your chosen phrase.";
    

    //Exit
    return 0;
}
int wordCnt(char *phrase){
    short words=1;
    
    
    while(*phrase != '\0'){
        if (*phrase==' '){words++;}
        phrase++;
    }
    
    
    return words;
}
