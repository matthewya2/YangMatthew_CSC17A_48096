/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;
#include "Info.h"

void Info::setName(string fulName){    
    name=fulName;
}
void Info::setAddress(string add){
        address = add;
}
void Info::setAge(int howOld){
        age = howOld;
}
void Info::setPhone(long int number){
        phone = number;
}

