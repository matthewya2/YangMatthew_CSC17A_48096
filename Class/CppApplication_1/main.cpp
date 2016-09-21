/*
 * Programming Challenges - 11. Population
 * File Name: 11_Population.cpp
 * Purpose: predict the size of population
 * Date: 2015/07/11
 * Coder: Jiwon Yoo
 */

 // System Libraries
 #include <iostream>
 #include <iomanip>
 using namespace std;

 // Execution begins here
 int main(int argc, char** argv) {
 	// Declare and initialize variables
 	// user-input variables
 	float f_strtPop = 0.0f; // starting number of population
 	float f_popIncr = 0.0f; // the average population increase (in %)
 	unsigned int uI_nDays = 0; // number of days after to predict

 	// prompt the user for f_srtPopu, f_popIncr, and uI_nDays
 	cout << "What is the number of current population? ";
 	cin >> f_strtPop;
 	// input validation: strtPop >= 2
 	while(f_strtPop < 2) {
 		cout << "Starting population must be >= 2\n> ";
 		cin >> f_strtPop;
 	}

 	cout << "Enter the average daily population increase (in %): ";
 	cin >> f_popIncr;
 	// input validation: popIncr > 0
 	while(f_popIncr <= 0.0f) {
 		cout << "The percentage must be > 0\n> ";
 		cin >> f_strtPop;
 	}

 	cout << "Enter rhe number of days: ";
 	cin >> uI_nDays;
 	// input validation: nDays >= 1
 	while(uI_nDays < 1) {
 		cout << "The number of days must be >= 1\n> ";
 		cin >> f_strtPop;
 	}

 	// display header 
 	cout << setw(5) << "Day" << setw(20) << "Population\n";
 	cout << "-----------------------------\n";
 	cout.setf(ios::fixed);
 	cout.setf(ios::showpoint);
 	cout.precision(2);

 	cout << setw(4) << "0" << setw(16) << f_strtPop << endl;

 	// iterate through days and display the
 	// size of the future population
 	for(int day = 1; day <= uI_nDays; ++day) {
 		f_strtPop += f_strtPop * (f_popIncr/100); // new population
 		cout << setw(4) << day << setw(16) << f_strtPop << endl;
 	} // end for loop

 	return 0;
 } // end main
