/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "Inventory.h"

int main(int argc, char** argv) {
    int id;
    int num;
    float money;
    
    cout<< "what is the ID number of the item?"<<endl;
    cin>>id;
    cout<<"how many units are there?"<<endl;
    cin>>num;
    cout<<"what is their individual cost?"<<endl;
    cin>>money;
    Inventory Unit(id,num,money);
    
    return 0;
}

