/* 
 * File:   main.cpp
 * Author: Matthew Yang
 * Created on September 26, 2016, 10:16 AM
 * Purpose:  
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables


//Function Prototypes Here
void mean(int[],const int);
void median(int[],const int);
void mode(int[], const int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int VAL=25;
    int array[VAL];
    
    
    for(int i=0,j=1;j<=VAL;j++,i++){
        if (i==4){i=0;}
        array[j]=i;        
    }
    int *ptrArry=array;
    
    cout << "this is the array of 0-3 repeating in a size "<< VAL<<
            " array"<<endl;
    
    for(int i=1;i<=VAL;i++){
        cout << array[i]<< " ";        
    } 
    cout <<endl<<endl;
    
    for(int i=1;i<=VAL;i++){                 //sort pointer array
        for(int j=i+1;j<=VAL;j++){ 
            if(ptrArry[i]>ptrArry[j]){ 
                ptrArry[i]=ptrArry[i]^ptrArry[j];
                ptrArry[j]=ptrArry[i]^ptrArry[j];
                ptrArry[i]=ptrArry[i]^ptrArry[j];
            }
        }
    }
    cout <<"this is the sorted version of the previous array"<<endl;
    for(int i=1;i<=VAL;i++){
        cout << ptrArry[i]<< " ";        
    }
    
 
    cout <<endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
            <<endl;
    mean(array,VAL);
    median(array,VAL);
    mode(array,VAL);
    
    //Exit
    return 0;
}
void mean(int array[],const int VAL){
    float mean=0; 
    
    for(int j=1;j<=VAL;j++){
        mean+=array[j];        
    }
    mean=mean/VAL;
    cout<< "the Mean is "<<mean<<"."<<endl;
}
void median(int array[],const int VAL){
    int middle=VAL/2, rest=VAL%2;
    middle+=rest;
    cout << "the Median is " << array[middle] << "."<<endl;
}
void mode(int array[],const int VAL){
    int zero=0,one=0,two=0,three=0;
        
    for(int i=1;i<=VAL;i++){      
        if (array[i]==0){zero++;}
        if (array[i]==1){one++;}
        if (array[i]==2){two++;}
        if (array[i]==3){three++;}
    }
    if (zero==one){
        if (zero==two){
            if (zero==three){
                cout<<"The Mode is all of the numbers, because they are "
                        "each used "<<zero<<" times each."
                        <<endl;
            }
            else{cout <<"The Mode are numbers 0,1 and 2, and are used "
                    << zero<<" times each."<<endl;}
        }
        else{cout <<"The Mode are numbers 0 and 1 which are used "
                << zero<< " times each."<<endl;}
    }
    else{cout <<"The Mode is the number 0, and is used "<< zero<< 
            " times each."<<endl;}
}