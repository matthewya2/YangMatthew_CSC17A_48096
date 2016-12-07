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
#ifndef CARDS_H
#define CARDS_H

class Deck{
    protected:
        int *freqofC;
        int *cards;
        int MAX;
    public:
        
        void Shuffle();
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
        int Turns=0;
    public:
        void AddTurn(){
            Turns++;
        }
};


#endif /* CARDS_H */

