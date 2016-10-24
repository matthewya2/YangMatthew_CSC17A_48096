/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on October 22, 2016, 10:18 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const int SIZE=4;
    char input[SIZE]={0};
    int intInp[SIZE]={0};
    char buffer[1];
    int bufferI;
    cout <<"input the 4 integers you wish to encrypt."<<endl;
    cin.getline(input,SIZE+1);
    
    for (int i=0; i<SIZE;i++){
        buffer[0]=input[i];
        intInp[i] = atoi (buffer);
        if (intInp[i]>7){
            cout << "error, restart program please."<<endl;
            return 5;
        }
        intInp[i]+=3;
        intInp[i]%=8;
    }
    


        
    bufferI=intInp[0];           //swaps 1 and 2
    intInp[0]=intInp[1];
    intInp[1]=bufferI;
    
    bufferI=intInp[2];           //swaps 3 and 4
    intInp[2]=intInp[3];    
    intInp[3]=bufferI;
    
    for (int i=0;i<SIZE;i++){
        cout <<intInp[i]<<" ";
    }
    cout <<endl;
    //decrypt part
    cout <<"input the 4 integers you wish to decrypt."<<endl;
    cin.getline(input,SIZE+1);
    
    for (int i=0; i<SIZE;i++){
        buffer[0]=input[i];
        intInp[i] = atoi (buffer);
        if (intInp[i]>7){
            cout << "error, restart program please."<<endl;
        }
        if (intInp[i]<4){
            intInp[i]+=5;
        }
        else{
            intInp[i]-=3;
        }
           
        
    
    }
    
    
    
    
    bufferI=intInp[0];           //swaps 1 and 2
    intInp[0]=intInp[1];
    intInp[1]=bufferI;
    
    bufferI=intInp[2];           //swaps 3 and 4
    intInp[2]=intInp[3];    
    intInp[3]=bufferI;
    
    for (int i=0; i<SIZE;i++){
        cout <<intInp[i]<<" ";
    }
    return 0;
}

