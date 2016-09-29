/* 
 * File:   main.cpp
 * Author: Matthew Yang
 * Created on September 28, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries Here



//Function Prototypes Here
void sort2(int*,int,string[]);
void average2(int*,int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int userI, *scores;
    string *names;
    cout << " how many scores do you have?"<<endl;
    cin >> userI;
    
    scores = new int [userI];  
    names  = new string[userI];
    cout <<"please input The student's name, then their "
            "score one at a time."<<endl;
    for(int i=0;i<userI;i++){
        cin >> names[i];
        cin >> *(scores+i);
        while(*(scores+i)<0){
            cout<<"please pick a non-negative number.";
            cin>>*(scores+i);
        }
    }
    
    
    sort2(scores,userI,names);
    
    average2(scores, userI);
    
    delete [] scores;
    delete [] names;
    //Exit
    return 0;
}
void sort2(int *scores,int userI,string names[]){
    string storage="";
    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<
            "Scores that are set in ascending order:"<<endl;
    for(int i=0;i<userI-1;i++){
        for(int j=i+1;j<userI;j++){
            if(*(scores+i)>*(scores+j)){
                *(scores+i)=*(scores+i)^*(scores+j);
                *(scores+j)=*(scores+i)^*(scores+j);
                *(scores+i)=*(scores+i)^*(scores+j);
                storage=*(names+i);
                *(names+i)=*(names+j);
                *(names+j)=storage;
            }
        }
    }

    

    for(int i=0;i<userI;i++){
        cout << names[i]<<"-"<<*(scores+i)<<setw(10);
    }
    cout <<endl;
}
void average2(int*scores,int userI){
    float average=0;
    
    cout <<"While the average is:"<<endl;
    
    for(int i=0;i<userI;i++){
    average+=*(scores+i);
    }
    average/=userI;
    cout <<average<<endl;
}