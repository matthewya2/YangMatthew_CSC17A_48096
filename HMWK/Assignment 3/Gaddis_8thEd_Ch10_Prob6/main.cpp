/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=51;
    char phrase[SIZE];
    short vowels=0,consons=0;
    short totalVC;              //total consonants and vowels
    int i=0;

    cout << "What is the phrase you would like for me "
            "to count the vowels and consonants in? (no more than 50 chars)"<<endl;
    cin.getline(phrase,SIZE);
    
while (phrase[i] != '\0') {
		switch (phrase[i]) {
		case 'a':
                    vowels++;
                    break;
		case 'e':
                    vowels++;
                    break;
		case 'i':
                    vowels++;
                    break;
		case 'o':
                    vowels++;
                    break;
		case 'u':
                    vowels++;
                    break;      
                case 'y':
                    vowels++;
                    break;         
                case ' ':
                    break;
                
                default:
                    consons++;
                    break;
                }
                i++;
}
    totalVC=vowels+consons;
    
    cout <<"you have "<<vowels<<" vowels inside your chosen phrase."<<endl;
    cout <<"you have "<<consons<<" consonents inside your chosen phrase."<<endl;
    cout <<"you have "<<totalVC<<" total consonants and vowels"
            " inside your chosen phrase.";

    //Exit
    return 0;
}
