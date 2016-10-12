/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on October 11, 2016, 6:56 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    fstream file;
    const int SIZE=4;
    char data[SIZE] = {'A', 'B', 'C', 'D'};
    
    file.open("core.dat", ios::out | ios::binary);
    
    file.write(data,sizeof(data));
    
    for (int count = 0; count < SIZE; count++)
    cout << data[count] << " ";
    cout << endl;
    cout << ios::binary<< file;
    
    file.close();
    return 0;
}

