/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Numbers.h
 * Author: rcc
 *
 * Created on November 17, 2016, 1:23 PM
 */

#ifndef NUMBER_H
#define NUMBER_H
class Numbers{
    private:
        int number;
    public:
        Numbers(int userIn){
            number=userIn;
            print();
        }
        void print();
};


#endif /* NUMBER_H */

