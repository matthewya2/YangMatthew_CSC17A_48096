/* 
 * File:   main.cpp
 * Author: Matthew Yang
 * Created on September 26, 2016, 10:16 AM
 * Purpose:  
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables


//Function Prototypes Here
void mode(int[], const int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int val,*array;
    
    
    cout << "how big should the array be?"<<endl;    
    cin >>val;
    
    array = new int [val];
    
    
    cout <<"input the values of the array."<<endl;
    for(int i=0;i<val;i++){
    cin >>*(array+i);
    }
   
    for(int i=0;i<=val-1;i++){                 //sort pointer array
        for(int j=i+1;j<val;j++){ 
            if(*(array+i)>*(array+j)){ 
                *(array+i)=*(array+i)^*(array+j);
                *(array+j)=*(array+i)^*(array+j);
                *(array+i)=*(array+i)^*(array+j);
            }
        }
    }
    
    for (int i=0;i<val;i++){
        cout << array[i];
    }
    cout <<endl;
    
    int lastnum=*(array+0), mode=1, count=1;
    
    for (int i=0;i<val;i++){
        if(lastnum==*(array+i)){count++;}
        else{
            lastnum=*(array+i);
            if (count>mode){
                mode=count;
                count=0;
            }
        }
    }
         mode=count;      
    
        cout << mode;        
    

    delete [] array;
    //Exit
    return 0;
}
