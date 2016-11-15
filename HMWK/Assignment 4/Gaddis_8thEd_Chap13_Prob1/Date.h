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

#ifndef CARD_H
#define CARD_H

class Date{
    private:
        int month;
        int day;
        int year;
    public: 
        void print1();                
        void print2();
        void print3();
        bool setDay(int day);
        bool setMonth(int month);
        bool setYear(int year);
};

#endif /* CARD_H */

