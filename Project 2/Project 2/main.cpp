/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on December 6, 2016, 2:39 PM
 */

#include <iostream> //I/O
#include <cstdlib>  //Rand and Set Random
#include <ctime>    //Utilize time to set the seed
#include <iomanip>  //Formatting output
#include <cstring>  //strcat
#include <string>   //names
#include <fstream>
#include "Cards.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    bool isDone = false;            //determines when game is done
    string intro;
    char *intrArr;
    fstream introPr;                //declares prologue file
    char line[1200];                    
    Game data;
    
    
    
    introPr.open("introInstructions.dat", ios::out | ios::binary);
    
    data.Intro();
    
    intro=  "This game is called the Card Matching Game. \n\n"
            "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
            "~~~~~~~~~~~~\n\n"
            "The goal of the game is to eliminate all the cards"
                    " you see below,\n"
            "which are numbered 1-30. All of which have one number underneath \n"
            
            "them from 1-13. These cards contain two of each number from 1-13.\n"
            
            "You eliminate these cards by first picking two of the 26 cards on\n"
            
            "the screen, one at a time. Then, I will flip them over, and tell\n"
            
            "you what number is underneath them. If these two cards match, "
            "then\n"
            "they are eliminated from the game, "
            "this will be indicated out loud,\n"
            "and I will draw an X on the card. If these cards do not match,"
            " then\n"
            "they will simply be placed back as they were before I flipped "
            "them.\n"
            "The game is over when all cards are eliminated,(when all cards "
            "have\n"
            "X's on top of them).\n\n"
            "NOTE: To get the full experience of this game, do not scroll up to\n"
            
            "see what I said a card was on a previous turn, "
            "this game is based on memory.\n\n"
             "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
                    "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n"
            "           GAME START!\n"
                "___________________________________\n";
    
    //outputs the intro and rules to the game into a binary file
    intrArr = new char[1200];
    strcpy(intrArr,intro.c_str());
    introPr.write(intrArr,1200);
    introPr.close();
    //reads them from the file
    introPr.open("introInstructions.dat", ios::in | ios::binary);
    introPr.seekg(0, ios::beg);
    introPr.read(line,1200);
    cout <<line;
    introPr.close();
    
    Cards card;
    card.Shuffle();
    
    do{
    data++;                         //operator overload counts turns
    card.Display();                 //displays cards
    data.Turn();                    //displays turns
    card.Pick();                    //receives input of card picks from user
    

    
    isDone=card.ElimCheck(isDone);
    
    }while(!isDone);        //finishes the program if 26 cards are eliminated
    
    return 0;
}

