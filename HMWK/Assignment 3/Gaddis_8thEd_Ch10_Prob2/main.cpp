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
    char phrase2[SIZE];
    short chars;
    int i;
    
    
    cout << "What is the phrase you would like for me "
            "to reverse? (no more than 50)"<<endl;
    cin.getline(phrase,SIZE);
    
    chars=charCnt(phrase);    
    
    for (int j=chars-1,i=0;i<chars;j--,i++){
        phrase2[i]=phrase[j];
    }
    phrase2[chars]='\0';
    
    for (int i=0;phrase2[i]!='\0';i++){
        cout << phrase2[i];
        i+1;
    }
    
    

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
