/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on October 22, 2016, 10:18 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

#include "statsResult.h"
void mrkSort(int*,int);
statsResult *avgMedMode(int *,int); 

int main(int argc, char** argv) {
    int size;
    int *array;
    
    
    cout <<"how big do you want your array?"<<endl;
    cin>>size;
    array = new int [size];
    
    cout <<"please input the array one number at a time"<<endl;
    for(int i=0;i<size;i++){
        cin>> array[i];
    }
    
    for(int i=0;i<size;i++){
        cout<< array[i]<<" ";
    }
    cout <<endl;
    avgMedMode(array,size);
    
    
     
    
    delete [] array;
    
    return 0;
}

statsResult *avgMedMode(int *array,int size){
    statsResult mmm;
    mrkSort(array,size);
    int count=0,maxFreq=0;
    for(int i=0;i<size-1;i++){
        if(array[i]==array[i+1]){
            count++;
            if(maxFreq<count)maxFreq=count;
        }else{
            count=0;
        }
    }
    mmm.maxFreq=maxFreq;
    cout<<"Mode Freq = "<<mmm.maxFreq+1<<endl;
    
    count=0;
    int nModes=0;
    for(int i=0;i<size-1;i++){
        if(array[i]==array[i+1]){
            count++;
            if(maxFreq==count)nModes++;
        }else{
            count=0;
        }
    }
    mmm.nModes=nModes;
    
    int *modeAry=new int[nModes+2];
    mmm.mode=new int [nModes];
    //Fill the array
    modeAry[0]=nModes;
    modeAry[1]=maxFreq+1;
    count=0;
    int indx=2;
    int j=0;
    for(int i=0;i<size;i++){
        if(array[i]==array[i+1]){
            count++;
            if(maxFreq==count){
                modeAry[indx++]=array[i];
                mmm.mode[j++]=array[i];
                
            }
            else{
            count=0;
            }
        }
    }
    cout<<"The number of modes = "<<
            mmm.nModes<<endl;
    cout<<"The max Frequency = "<<
            mmm.maxFreq+1<<endl;
    if(modeAry[0]==0){
        cout<<"The mode set = {null}"<<endl;
        return 0;
    }
    cout<<"The mode set = {";
    for(int i=0;i<mmm.nModes;i++){
        cout<<mmm.mode[i]<<" ";
    }
    cout<<"}"<<endl;
    delete []modeAry;
    delete []mmm.mode;
} 

void mrkSort(int *array,int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]>array[j]){
                array[i]=array[i]^array[j];
                array[j]=array[i]^array[j];
                array[i]=array[i]^array[j];
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<< array[i]<<" ";
    }
    cout <<endl;
}