/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on August 20, 2016, 2:35 PM
 */

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
   //declare variables
    const int SIZE=12;
    int userIn[SIZE];
    float max, min;
    float total=0,avg=0;
    
    // gets values from user 
    for(int i=0;i<SIZE;i++){
        cout<<"enter the amount of rainfall for month "<<i+1<<" in inches"<<endl;
        cin >> userIn[i];
    }
    //finds the total rainfall
    for (int y;y<SIZE;y++){
        total+=userIn[y];
    }
    
    //finds the average rainfall
    avg=total/SIZE;
    
    // find the max value of inputs
    max = userIn[0];
    for(int j=1;j<SIZE;j++){
        if (userIn[j]>max){
        max = userIn[j];
        }
    }
    min = userIn[0];
    for(int j=1;j<SIZE;j++){
        if (userIn[j]<min){
        min = userIn[j];
        }
    }
    
     //sort
    for(int j=0;j<SIZE-1;j++){
        for(int i=j+1;i<SIZE;i++){
            if(userIn[j]>userIn[i]){
                userIn[j]=userIn[j]^userIn[i];
                userIn[i]=userIn[j]^userIn[i];
                userIn[j]=userIn[j]^userIn[i];
            }
        }
    }        
    
    //displays values
    cout<< "the average rainfal per month in inches is "<< avg<<endl;
    cout<< "the total rainfall is "<<total<<" inches"<<endl;
    cout<< "this is the max rainfall in inches "<<max<<endl;
    cout<< "and this is the min rainfall in inches "<<min<<endl;
    cout<<endl<<"greatest amount of rain to lowest:"<<endl;
    //find
    int beginning=0, middle, end=SIZE-1;
    
    for(int i=0;i<SIZE;i++){
        cout<< userIn[i]<<" ";
    }
    
    //exit
    return 0;
}

