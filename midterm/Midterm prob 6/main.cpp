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
    cout << "problem 6 A: "<<endl<<endl<<
            "2.325 "<<endl<<
            "Hex: 2.533  Octal: 2.246  Binary: 0010.0101 0011"<<endl<<
            "Float Representation: 4A66 6602"<<endl<<endl<<
            "0.1453125"<<endl<<
            "Hex: 0.2533  Octal: 0.11231463  Binary: .0010 0101 0011"<<endl<<
            "Float Representation: 4A66 66FE"<<endl<<
            "-----------------------------------------------------------"<<endl;
    cout <<"problem 6 B:"<<endl<<endl<<
            "Float Representation of -2.325     : B599 9902"<<endl<<
            "Float Representation of -0.1453125 : B599 99FE"<<endl<<
            "-----------------------------------------------------------"<<endl;
    cout <<"problem 6 C:"<<endl<<endl<<
            "5999 9901 == 1.4"<<endl<<
            "5999 9902 == 2.8"<<endl<<
            "A666 67FE == 0.175";
    return 0;
}

