/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 21, 2016, 2:56 PM
 */

#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {
const int NAMES = 20;
string names[NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
"Griffin, Jim", "Stamey, Marty", "Rose, Geri",
"Taylor, Terri", "Johnson, Jill",
"Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
"James, Jean", "Weaver, Jim", "Pore, Bob",
"Rutherford, Greg", "Javens, Renee",
"Harrison, Rose", "Setzer, Cathy",
"Pike, Gordon", "Holland, Beth" };

for(int j=0;j<NAMES-1;j++){
        for(int i=j;i<NAMES;i++){
            if(names[j]>names[i]){
                string tmp=names[j];
                names[j]=names[i];
                names[i]=tmp;
            }
        }
}
for(int i=0;i<NAMES;i++){
    cout << names[i]<<endl;
}
    return 0;
}

