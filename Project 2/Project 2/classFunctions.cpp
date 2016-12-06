/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Cards.h"
Deck::Deck(int maxSize){
    cards = new int [maxSize];
    freqofC = new int [maxSize/2];
    int num=0;
    
    for(int i=0; i<maxSize; ++i) {
        int num = rand() % (maxSize/2) + 1;
        while (freqofC[num-1]>=2) {         //makes sure that no card has the 
            num = rand() % (maxSize/2) + 1;          //same value more than twice.
        }
        ++freqofC[num-1];
        cards[i] = num;
    }
            
       }