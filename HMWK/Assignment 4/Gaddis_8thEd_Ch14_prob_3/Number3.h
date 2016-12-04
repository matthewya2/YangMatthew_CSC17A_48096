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
class Number{
    private:
        int date;
        string month;
        int day;
    public:
        Number(int);
        void translate();
        void print(){
            cout <<month<<" "<<day;
        } 
        void operator++(int){
            
            this->date++;
            if (date==366){date=1;}
            translate();
            
        }
        void operator--(int){
            
            //Number temp(date);
            this->date--;
            if (date==0){date=365;}
            translate();
            
        }
        
};


#endif /* NUMBER_H */

