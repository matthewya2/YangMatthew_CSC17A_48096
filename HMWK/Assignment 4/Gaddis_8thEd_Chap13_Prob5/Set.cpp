/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;
#include "RetailItem.h"

RetailItem::RetailItem(string descrip,int units,float price){
    description=descrip;
    unitsOnHand=units;
    priceOfItem=price;
}