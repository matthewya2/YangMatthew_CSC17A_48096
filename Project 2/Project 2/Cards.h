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

#ifndef CARDS_H
#define CARDS_H

class Deck{
    private:
        int *freqofC;
        int cardpik;    //user's car pick
        int tTurns;     //total turns
        int *cards;
    public:
        Deck(int);
};


#endif /* CARDS_H */

