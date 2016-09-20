/* 
 * File:   main.cpp
 * Author: Matthew Yang
 *
 * Created on September 19, 9:34 PM
 */

#include <iostream>
using namespace std;

//global constants

int main(int argc, char** argv) {
//set variable types
    float celsius;
    float fahren; 
    
    cout << "What is the temperature in Celsius?"<<endl; 
            cin >> celsius;
            fahren = 1.8*celsius +32;
            cout<< "It is "<< fahren << " fahrenheit outside.";
                    
    return 0;
}

