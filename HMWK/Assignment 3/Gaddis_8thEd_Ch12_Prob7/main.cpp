/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on October 16, 2016, 6:38 PM
 */


#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string fileN1,fileN2;
    fstream file1,file2;
        
    cout << "what is the name of the first file?"<<endl<<"note: you must "
            "end the name of the file with \".txt\" and with no spaces."<<endl;
    cin >> fileN1;
    cout << "what is the name of the second file?"<<endl;
    cin >> fileN2;
    
    file1.open(fileN1.c_str());
    file2.open(fileN2.c_str());
    
    file1<< "THE ROSES IN THE RIVER ARE WET. SEE SPOT RUN. I like sPOT.";
    
    
        file2 << file1;
        
        cout << file2;       
    
    
    
    file1.close();
    file2.close();
    return 0;
}