/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on March 27, 2016, 6:40 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;



int main(int argc, char** argv) {
    //declare variables
    int weightL;     //weight in pounds
    int heightI;     //height in inches
    int BMI;
    
    
    //get weight and height
    cout << "What is your height in inches, "
            "and what is your weight in pounds?\n";
    cin  >> heightI >> weightL;
    
    //calculations
    BMI = weightL * 703 / (heightI * heightI);
    
    if (BMI < 18.5) {
        cout << "you are underweight";
    }
    else if (BMI > 25){
        cout << "you are overweight";
    }
    else cout << "you have a healthy BMI";
    return 0;
}

