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
int doSomething(int*,int*);
//Program Execution Begins Here
int main(int argc, char** argv) {
    int *xptr,*yptr,value;
    int x, y;
    
    cout <<"pick an x and y"<<endl;
    
    cin>> x >> y;
    xptr=&x;
    yptr=&y;
    
    value=doSomething(xptr,yptr);
    
    cout <<value;
    
}
int doSomething(int *x, int *y){
    
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}
