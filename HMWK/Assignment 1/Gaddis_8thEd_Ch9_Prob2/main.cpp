/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void sort(int*,int);
void average(int*,int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int userI, *scores;
    
    cout << " how many scores do you have?"<<endl;
    cin >> userI;
    
    scores = new int [userI];  
    
    cout <<"please input each score one at a time,"
            " pressing enter for each score."<<endl;
    for(int i=0;i<userI;i++){
        cin >> *(scores+i);
        while(*(scores+i)<0){
            cout<<"please pick a non-negative number.";
            cin>>*(scores+i);
        }
    }
    
    sort(scores, userI);
    
    average(scores, userI);
    
    delete [] scores;
    //Exit
    return 0;
}
void sort(int *scores,int userI){
    
    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<
            "Scores that are set in ascending order:"<<endl;
    for(int i=0;i<userI-1;i++){
        for(int j=i+1;j<userI;j++){
            if(*(scores+i)>*(scores+j)){
                *(scores+i)=*(scores+i)^*(scores+j);
                *(scores+j)=*(scores+i)^*(scores+j);
                *(scores+i)=*(scores+i)^*(scores+j);
            }
        }
    }
    for(int i=0;i<userI;i++){
        cout << *(scores+i)<<setw(4);
    }
    cout <<endl;
}
void average(int*scores,int userI){
    float average=0;
    
    cout <<"While the average is:"<<endl;
    
    for(int i=0;i<userI;i++){
    average+=*(scores+i);
    }
    average/=userI;
    cout <<average<<endl;
}