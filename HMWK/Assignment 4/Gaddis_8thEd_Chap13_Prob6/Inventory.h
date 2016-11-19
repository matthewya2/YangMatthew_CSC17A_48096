/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Inventory.h
 * Author: Matthew
 *
 * Created on November 18, 2016, 10:40 PM
 */

#ifndef INVENTORY_H
#define INVENTORY_H
class Inventory{
    private: 
        int itemNumber;
        int quantity;
        float cost;
        float totalCost;
    public:
        Inventory(){
            itemNumber=0;
            quantity=0;
            cost=0.00;
            totalCost=0.00;
        }
        Inventory(int,int,float);
        void setItemNumber(int id){
            itemNumber=id;
        }
        void setQuantity(int num){
            quantity=num;
        }
        void setCost(float money){
            cost=money;
        }
        void setTotalCost();
        //I know that get functions in a class return the value, but cout-ing
        //them makes more sense in this application
        void getItemNumber(){cout<<itemNumber;}
        void getQuantity(){cout<<quantity;}
        void getCost(){cout<< cost;}
        void getTotalCost(){cout<<totalCost;}
};

#endif /* INVENTORY_H */

