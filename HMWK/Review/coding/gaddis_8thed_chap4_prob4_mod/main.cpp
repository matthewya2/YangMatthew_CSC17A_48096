/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on September 19, 2016, 6:40 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int length1, width1, length2, width2, rect1, rect2;
    
    cout << "Please enter the width and length of the first rectangle\n";
    cin  >> width1 >> length1;
    cout << "Now enter the width and length of the second rectangle.\n";
    cin  >> width2 >> length2;
    
    //calculations
    rect1 = width1 * length1;
    rect2 = width2 * length2;
    
    if (rect1 > rect2) {
        cout << "The first rectangle has more area than the second";
    }
    else if (rect1 < rect2) {
        cout << "The second Rectangle has more area than the first";
    }
    else if (rect1 = rect2) {
        cout << "The two rectangles have the same area.";
    }
            return 0;
}

