/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * 
 */

//System Libraries Here
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
struct SCinfo{          //soccer player's info
    string name;        //Name
    int number;         //player's number
    int points;         //player's points
};

//Program Execution Begins Here
int main(int argc, char** argv) {
    const int PLAYERS=12;   //players total
    SCinfo info[PLAYERS];   //structure array
    short i;                //counter
    int totalP=0;           //total points
    int playerH;            //player with highest points
    int highP;              //highest points
    
    for(i=0;i<PLAYERS;i++){
        cout <<"what is player #"<< i+1 <<"'s name?"<<endl;
        getline(cin,info[i].name);
        
        do{
        cout <<"what is his player number?"<<endl;
        cin >> info[i].number;
        if(info[i].number<0){cout<< "no negative numbers please."<<endl;}
        }while(info[i].number<0);
        do{
        cout << "how many points has he scored?"<<endl;
        cin >> info[i].points;
        if(info[i].points<0){cout<< "no negative numbers please."<<endl;}
        }while(info[i].points<0);
        
        cin.ignore(20,'\n');
    }
    
    for(i=0;i<PLAYERS;i++){
        totalP+=info[i].points;
    } 
    
    highP=info[0].points;  
    playerH=1;   
    for(int i=1;i<PLAYERS;i++){
        if(highP<info[i].points){
            highP=info[i].points;
            playerH=i;
        }
    }
    
    cout <<"-----------------------------------------------"<<endl;
    cout <<"the team earned "<< totalP << "points total."<<endl;
    cout <<"the highest amount of points is: "<<highP<<endl;
    cout <<"the player who scored those points is "<<info[playerH].name<<","
            <<endl<<"and his player number is"<<info[playerH].number<<endl;
    
    for(i=0;i<PLAYERS;i++){
    cout <<"________________________________________|"<<endl;
    cout <<"Player "<<info[i].name<<setw(15)<<
            "Player #"<<info[i].number<<setw(15)<<
            "points:"<<info[i].points<<"|"<<endl;
    }
    
    //Exit        
    return 0;
}
