/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 25, 2016, 9:51 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
float celsius(float);

int main(int argc, char** argv) {
    //declare variables
    float cels = 0;     //celsius converted
    int fahren;
    cout << "Fahrenheit" << setw(20) << "Celsius"<< endl;
    //get celsius values 0-20
    for (fahren=0;fahren<=20;fahren++){
        cout << fahren << setw(20) << fixed << showpoint << setprecision(2) << 
                celsius(fahren) << endl;
    }
    return 0;
}
float celsius(float fahren){
    //Celsius formula which = (5/9) * f-32
    return ((5/9.0f) * (fahren-32.0f));
}