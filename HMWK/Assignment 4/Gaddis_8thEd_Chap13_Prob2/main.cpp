/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;
#include "Class.h"

int main(int argc, char** argv) {
    string nom,dep,pos;
    int id;
    nom= "Susan Meyers";
    id=47899;
    dep="accounting";
    pos="Vice President";
    Employee emp1(nom, dep, id, pos);
    emp1.Print();
            
    nom= "Mark Jones";
    id=39119;
    dep="IT";
    pos="Programmer";
    Employee emp2(nom, dep, id, pos);
    emp2.Print();
    
    nom= "Joy Rogers";
    id=81774;
    dep="Manufacturing";
    pos="Engineer";
    Employee emp3(nom, dep, id, pos);
    emp3.Print();
    return 0;
}

