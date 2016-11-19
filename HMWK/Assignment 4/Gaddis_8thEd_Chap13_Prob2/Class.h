/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Card.h
 * Author: rcc
 *
 * Created on November 15, 2016, 2:44 PM
 */
#include <string>
#ifndef CARD_H
#define CARD_H

class Employee{
    private:
        string name;
        int idnum;
        string depart;
        string position;
    public: 
        Employee(string,string,int,string);
        void Print();

};

#endif /* CARD_H */

