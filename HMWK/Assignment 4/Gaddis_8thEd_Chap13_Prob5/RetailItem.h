/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RetailItem.h
 * Author: Matthew
 *
 * Created on November 18, 2016, 9:50 PM
 */
#include <string>
#include<iostream>

#ifndef RETAILITEM_H
#define RETAILITEM_H
class RetailItem{
    private:
        string description;
        int unitsOnHand;
        float priceOfItem;
    public:
        RetailItem(string,int,float);
        //I know that get functions in a class return what they are getting,
        //but cout-ing the values seem more smart in this situation
        void getdescrip(){cout<< description;}
        void getunits(){cout<< unitsOnHand;}
        void getprice(){cout << priceOfItem;}
};


#endif /* RETAILITEM_H */

