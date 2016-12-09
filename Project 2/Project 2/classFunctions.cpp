/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Cards.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <cstring>  //strcat
using namespace std;

void Deck::Shuffle(){
    unsigned seed = time(0);        //creates randomness
    srand(seed);
    
    
    cards = new int [MAX];
    
    freqofC = new int [MAX/2];
    
    int num=0;
    
    
    for(int i=0; i<30; ++i) {
        int num = rand() % (MAX/2) + 1;
        
        while (freqofC[num-1]>=2) {         //makes sure that no card has the 
            num = rand() % (MAX/2) + 1;          //same value more than twice.
        }
        
        ++freqofC[num-1];
        
        cards[i] = num;
    }
            
       }



void Cards::Display(){
    string  cad1P2= "| 1 |",cad2P2= "| 2 |",
            cad3P2= "| 3 |",cad4P2= "| 4 |",
            cad5P2= "| 5 |",cad6P2= "| 6 |",
            cad7P2= "| 7 |",cad8P2= "| 8 |",
            cad9P2= "| 9 |",cad10P2="|10 |",
            cad11P2="|11 |",cad12P2="|12 |",
            cad13P2="|13 |",cad14P2="|14 |",
            cad15P2="|15 |",cad16P2="|16 |",
            cad17P2="|17 |",cad18P2="|18 |",
            cad19P2="|19 |",cad20P2="|20 |",
            cad21P2="|21 |",cad22P2="|22 |",
            cad23P2="|23 |",cad24P2="|24 |",
            cad25P2="|25 |",cad26P2="|26 |",
            cad27P2="|27 |",cad28P2="|28 |",
            cad29P2="|29 |",cad30P2="|30 |",
            cadP1="___", cadP3= "|___|", 
            X="| X |";
    
    
    //cards being turned into X's if they are removed from the game
    if (cards[0]==0){cad1P2=X;}    if (cards[1]==0){cad2P2=X;}
    
    if (cards[2]==0){cad3P2=X;}    if (cards[3]==0){cad4P2=X;}
    
    if (cards[4]==0){cad5P2=X;}    if (cards[5]==0){cad6P2=X;}
    
    if (cards[6]==0){cad7P2=X;}    if (cards[7]==0){cad8P2=X;}
    
    if (cards[8]==0){cad9P2=X;}    if (cards[9]==0){cad10P2=X;}
    
    if (cards[10]==0){cad11P2=X;}   if (cards[11]==0){cad12P2=X;}
    
    if (cards[12]==0){cad13P2=X;}   if (cards[13]==0){cad14P2=X;}
    
    if (cards[14]==0){cad15P2=X;}   if (cards[15]==0){cad16P2=X;}
    
    if (cards[16]==0){cad17P2=X;}   if (cards[17]==0){cad18P2=X;}
    
    if (cards[18]==0){cad19P2=X;}   if (cards[19]==0){cad20P2=X;}
    
    if (cards[20]==0){cad21P2=X;}   if (cards[21]==0){cad22P2=X;}
    
    if (cards[22]==0){cad23P2=X;}   if (cards[23]==0){cad24P2=X;}
    
    if (cards[24]==0){cad25P2=X;}   if (cards[25]==0){cad26P2=X;}
    
    if (cards[26]==0){cad27P2=X;}   if (cards[27]==0){cad28P2=X;}
    
    if (cards[28]==0){cad29P2=X;}   if (cards[29]==0){cad30P2=X;}
    
    
    //cards being displayed
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl;
    
    cout <<cad1P2<<" "<<cad2P2<<" "<<cad3P2<<" "<<cad4P2<<" "<<cad5P2<<" "
            <<cad6P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3
            <<endl;
    
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl; 
    
    cout <<cad7P2<<" "<<cad8P2<<" "<<cad9P2<<" "<<cad10P2<<" "<<cad11P2<<" "<<
            cad12P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<
            endl;
    
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl; 
    
    cout <<cad13P2<<" "<<cad14P2<<" "<<cad15P2<<" "<<cad16P2<<" "<<cad17P2<<" "
            <<cad18P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3
            <<endl;
    
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl; 
    
    cout <<cad19P2<<" "<<cad20P2<<" "<<cad21P2<<" "<<cad22P2<<" "<<cad23P2<<" "
            <<cad24P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3
            <<endl;
    
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl; 
    
    cout <<cad25P2<<" "<<cad26P2<<" "<<cad27P2<<" "<<cad28P2<<" "<<cad29P2<<" "
            <<cad30P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3
            <<endl<<endl;
    
    for(int i=0;i<MAX;i++){
        cout <<i+1<<":"<<cards[i]<<" ";
    }
    cout <<endl<<endl;
}

void Cards::Pick(){
    cout <<"what is the first card you want to check?"<<endl;
    
    cin >>cardPik[0];
    
    
    while(cardPik[0]<1 || cardPik[0]>MAX) {
        cout<<"you must pick a card that exists on the screen above,"
                "and that does not have an X on it.";
        cin>>cardPik[0];
    }
    
    
    while(cards[cardPik[0]-1]==0){
        cout << "You have already picked that card. Please pick a card"
                " that is on the board, and that does not have an X on it.";
        cin  >> cardPik[0];
    }

    cout <<"how about your second?"<<endl;
    
    cin>>cardPik[1];
    
    
    while (cardPik[1]<1 || cardPik[1]>MAX) {
        cout << "you must pick a card "
            "that exists on the screen above, and that does not have an X "
            "on it."<<endl;
        cin >>cardPik[1];
    }
    
    while (cardPik[0]==cardPik[1]){
            cout << "you must pick a number that is different than the first "
                    <<endl<<"card you have picked. Pick another card for your"
                    " second card."<<endl;
            cin >>cardPik[1];
        }
    
    
    while(cards[cardPik[1]-1]==0){
        cout << "You have already picked that card. Please pick a card"
                " that is on the board, and that does not have an X on it.";
        cin  >> cardPik[1];
    }
    
    //outputs the results of the cards
    cout << endl << "Card number "<< cardPik[0]<<" has a "<<
            cards[cardPik[0]-1]<<" under it." <<endl;
    
    cout <<"Card number "<< cardPik[1]<<" has a "<<
            cards[cardPik[1]-1]<<" under it." <<endl<<endl;
    
    
    //if the cards have the same number underneath them, they are eliminated
        if (cards[cardPik[0]-1]==cards[cardPik[1]-1]){ 
            cout <<"Cards "<<cardPik[0]<< " and " <<cardPik[1] <<
                    " are eliminated." << endl<<endl;
            
            
        cards[cardPik[0]-1]=0;         //sets card pick back to zero
        cards[cardPik[1]-1]=0;         
        }
    
}

bool Cards::ElimCheck(bool isDone){
    int cnt=0;    
    
    for(int i=0;i<MAX;i++)
        cards[i]=0;
    
    
        for(int i=0; i<MAX; ++i){
            if( cards[i]==0 ) ++cnt;
        }
        if(cnt==MAX) isDone = true;
    
        // displays the number of terminated cards
        cout << "You have eliminated " << cnt << " cards out of 30." << endl;
        
        if(cnt<0 || cnt>30){
            string error;
            
            error ="an error has occurred, exiting program.";
            throw error;
        }
        return isDone;
            
        
}



void Game::Intro(){
    const int nameF = 26;               //used for name total length of full name
    const int nameS = 13;               //used for second name length
    
    char fName[nameF];                  //first name
    char sName[nameS];                  //second name
    
    cout <<"please enter your first Name with a space after: ";
    cin.getline(fName,nameS);
    
    cout <<"please enter your second Name: ";
    cin.getline(sName,nameS);
    
    strcat(fName,sName);
    
    Name=fName;
    
    cout << "Hello, "<<fName<<"!"<<endl;
}

void Game::Turn(){
    cout <<"This is turn: "<<Turns<<endl;
}

void Game::Score(){
    cout << "You have Won! you have completed the game in " <<Turns<<
            " turns.";

    cout << endl;
    
        //gives special message if you had a perfect game
    switch (Turns){
            case 15: cout << "WOW! A perfect game! You're amazing!!";
            
 
    }
    
        //tells you how well you did on the game if you did not have 
        //a perfect game
    
    if (Turns>15 && Turns<=20){
        cout <<"That was a pretty awesome game!";
    }
    if (Turns>=21 && Turns<25){
        cout << "That was a pretty good game, although you can do better.";
    }
    if (Turns>=26 && Turns<=34){
        cout << "a decent game. Try again!";
    }
    if (Turns>35){
        cout << "That was a not so good game. replay?";
    }
    cout << endl;
    cout << "Thanks for playing, "<<Name;
}