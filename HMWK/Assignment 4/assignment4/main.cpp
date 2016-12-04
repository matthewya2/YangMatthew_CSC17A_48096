/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on November 19, 2016, 11:05 AM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
//Begin Execution Here!!!
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        case 6:    problem6();break;
        case 7:    problem6();break;
        case 8:    problem6();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=8);
    return 0;
}

void Menu(){
    cout<<"Menu for Assignment 4"<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1(){
        cout<<"In chapter 14 problem 1"<<endl<<endl;
}

void problem2(){
        cout<<"In chapter 14 problem 2"<<endl<<endl;
}

void problem3(){
        cout<<"In chapter 14 problem 3"<<endl<<endl;
}

void problem4(){
        cout<<"In chapter 13 problem 1"<<endl<<endl;
}

void problem5(){
        cout<<"In chapter 13 problem 1"<<endl<<endl;
}

void problem6(){
        cout<<"In chapter 13 problem 1"<<endl<<endl;
}

void problem7(){
        cout<<"In chapter 13 problem 1"<<endl<<endl;
}

void problem8(){
        cout<<"In chapter 13 problem 1"<<endl<<endl;
}


void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}