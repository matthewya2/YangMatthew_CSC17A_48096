/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on September 21, 2016, 5:47 PM
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const int DAYS=30,MONTHS=3;         //days and months
    char both[DAYS][MONTHS];            //2D array
    ifstream inputfile;                 //define txt file
    int rainy=0, sunny=0, cloudy=0;     //total rainy cloudy and sunny days
    int rainy1=0, sunny1=0, cloudy1=0;  //June rainy cloudy and sunny days
    int rainy2=0, sunny2=0, cloudy2=0;  //July rainy cloudy and sunny days
    int rainy3=0, sunny3=0, cloudy3=0;  //august rainy cloudy and sunny days
    
    inputfile.open("numbers.txt");      //open file
    
    for (int j=0;j<DAYS;j++){           //input letters into array
        for (int i=0;i<MONTHS;i++){
            inputfile>>both[j][i];
        }   
    }
    inputfile.close();                  //close file

    for (int i=0;i<MONTHS;i++){         //output values in array
        for (int j=0;j<DAYS;j++){
            cout<<both[j][i];
        }
    cout <<endl;
    }
    cout<<endl<<endl;
    
    for (int j=0;j<DAYS;j++){               //count total rainy cloudy 
        for (int i=0;i<MONTHS;i++){         //and sunny days
            if (both[j][i]=='R'){rainy++;}
            if (both[j][i]=='C'){cloudy++;}
            if (both[j][i]=='S'){sunny++;}
        }
    }
    for (int j=0;j<DAYS;j++){               //count monthly rainy cloudy
        if(both[j][0]=='R'){rainy1++;}        //and sunny days
        if(both[j][0]=='C'){cloudy1++;} 
        if(both[j][0]=='S'){sunny1++;} 
    }
    for (int j=0;j<DAYS;j++){               //count monthly rainy cloudy
        if(both[j][1]=='R'){rainy2++;}        //and sunny days
        if(both[j][1]=='C'){cloudy2++;} 
        if(both[j][1]=='S'){sunny2++;} 
    }
    for (int j=0;j<DAYS;j++){               //count monthly rainy cloudy
        if(both[j][2]=='R'){rainy3++;}        //and sunny days
        if(both[j][2]=='C'){cloudy3++;} 
        if(both[j][2]=='S'){sunny3++;} 
    }
    
    cout<< "there are "<<rainy<<" rainy days in all."<<endl;
    cout<< "there are "<<cloudy<<" cloudy days in all."<<endl;
    cout<< "there are "<<sunny<<" sunny days in all."<<endl<<endl;
    
    cout<< "there are "<<rainy1<<" rainy days in June."<<endl;
    cout<< "there are "<<cloudy1<<" cloudy days in June."<<endl;
    cout<< "there are "<<sunny1<<" sunny days in June."<<endl<<endl;
    
    cout<< "there are "<<rainy2<<" rainy days in July."<<endl;
    cout<< "there are "<<cloudy2<<" cloudy days in July."<<endl;
    cout<< "there are "<<sunny2<<" sunny days in July."<<endl<<endl;
    
    cout<< "there are "<<rainy3<<" rainy days in August."<<endl;
    cout<< "there are "<<cloudy3<<" cloudy days in August."<<endl;
    cout<< "there are "<<sunny3<<" sunny days in August."<<endl<<endl;
    
    cout << "the month that had the most rain was, ";
    if (rainy1>rainy2 && rainy1>rainy3){cout<<"June.";}
    if (rainy2>rainy1 && rainy2>rainy3){cout<<"July.";}
    if (rainy3>rainy1 && rainy3>rainy2){cout<<"August.";}
    
    return 0;
}

