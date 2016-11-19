/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;
#include "Inventory.h"

Inventory::Inventory(int id,int num,float money){
    setItemNumber(id);
    setQuantity(num);
    setCost(money);
    setTotalCost();
    cout <<"item ID is: ";
    getItemNumber();
    cout<<endl<<"items acquired: ";
    getQuantity();
    cout<<endl<<"item cost per individual: $";
    getCost();
    cout<<endl<<"Total Cost: $";
    getTotalCost();
    
}
void Inventory::setTotalCost(){
    totalCost=quantity*cost;
}