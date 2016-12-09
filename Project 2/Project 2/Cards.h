/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cards.h
 * Author: rcc
 *
 * Created on December 6, 2016, 2:42 PM
 */
#include <cstdlib>  //Rand and Set Random
#include <iostream>
using namespace std;

#ifndef CARDS_H
#define CARDS_H

class Deck{
    protected:
        int *freqofC;
        
        int *cards;
        
        int MAX;
        
    public:
        Deck(){
            MAX=30;
        }
        void Shuffle();
        
        ~Deck(){
            delete [] freqofC;
            delete [] cards;
        }
        
};

class Cards:public Deck{
    private:
        int cardPik[2];    //user's car pick
        
    public:
        void Pick();
        
        void Display();
        
        bool ElimCheck(bool);
        
};

class Game:public Cards{
    private:
        string Name;
        
        int Turns;
        
    public:
        Game(){
            Turns=0;
        }
        void Intro();
        
        void Turn();
        
        void operator++(int){
            this->Turns++;
        }
        void Score();
};


#endif /* CARDS_H */

