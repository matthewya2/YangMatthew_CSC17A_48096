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
#include "RetailItem.h"

int main(int argc, char** argv) {
    string descrip;
    int units;
    float price;
    descrip="jacket";
    units=12;
    price=59.95;
    
    RetailItem item1(descrip,units,price);
    item1.getdescrip();
    cout<<setw(20);
    item1.getunits();
    cout<<setw(10);
    item1.getprice();
    cout<<endl;
    
    descrip="Designer Jeans";
    units=40;
    price=34.95;
    
    RetailItem item2(descrip,units,price);
    item2.getdescrip();
    cout<<setw(10);
    item2.getunits();
    cout<<setw(10);
    item2.getprice();
    cout<<endl;
    
    descrip="Shirt";
    units=20;
    price=24.95;
    
    RetailItem item3(descrip,units,price);
    item3.getdescrip();
    cout<<setw(20);
    item3.getunits();
    cout<<setw(10);
    item3.getprice();
    cout<<endl;
    //Exit
    return 0;
}

