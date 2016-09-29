/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Sum the numbers between 1 and 10
 * Problem 2 -> Multiply the numbers between 1 and 10
 * Problem 3 -> Divide the numbers between 1 and 10
 * Modified on Mar 21st, 2016
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void sort(int*,int);
void average(int*,int);
void sort1(int*,int);
void average1(int*,int);
void sort2(int*,int,string[]);
void average2(int*,int);
int doSomething(int*,int*);
void arrSelectSort(int *[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int);
void arrSelectSort1(int *[], int);
 void showArray1(const int [], int);
 void showArrPtr1(int *[], int);
 void mean(int[],const int);
void median(int[],const int);
void mode(int[], const int);
//Execution Begins Here
int main(int argc, char** argv) {
    int choice;
    //General Menu Format
    do{
        //Display the selection
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 2"<<endl;
        cout<<"Type 3 to solve problem 3"<<endl;
        cout<<"Type 4 to solve problem 4"<<endl;
        cout<<"Type 5 to solve problem 5"<<endl;
        cout<<"Type 6 to solve problem 6"<<endl;
        cout<<"Type 7 to solve problem 7"<<endl;
        cout<<"Type 8 to solve problem 8"<<endl;
        cout<<"Type 9 to solve Mean medium mode problem"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case 1:{
                    int userI, *arr, *pntr;
    
    cout << "how large should the array be?"<<endl;
    cin >> userI;
    
    arr = new int [userI];  
    
    cout <<"please input each integer one at a time"
            " in order to fill the dynamic array."<<endl;
    for(int i=0;i<userI;i++){
        cin >> *(arr+i);
    }
    pntr=arr;
    for(int i=0;i<userI;i++){
        cout << *(pntr+i)<<setw(3);
    }
    
    delete [] arr;
                    break;
                }
                case 2:{
                    int userI, *scores;
    
    cout << " how many scores do you have?"<<endl;
    cin >> userI;
    
    scores = new int [userI];  
    
    cout <<"please input each score one at a time,"
            " pressing enter for each score."<<endl;
    for(int i=0;i<userI;i++){
        cin >> *(scores+i);
        while(*(scores+i)<0){
            cout<<"please pick a non-negative number.";
            cin>>*(scores+i);
        }
    }
    
    sort(scores, userI);
    
    average(scores, userI);
    
    delete [] scores;
    //Exit
                    break;
                }
                case 3:{
                    int userI, *scores;
    
    cout << " how many scores do you have?"<<endl;
    cin >> userI;
    
    scores = new int [userI];  
    
    cout <<"please input each score one at a time,"
            " pressing enter for each score."<<endl;
    for(int i=0;i<userI;i++){
        cin >> *(scores+i);
        while(*(scores+i)<0){
            cout<<"please pick a non-negative number.";
            cin>>*(scores+i);
        }
    }
    
    sort1(scores, userI);
    
    average1(scores, userI);
    
    delete [] scores;
    //Exit
                    break;
                }
                case 4:{
                    int userI, *scores;
    string *names;
    cout << " how many scores do you have?"<<endl;
    cin >> userI;
    
    scores = new int [userI];  
    names  = new string[userI];
    cout <<"please input The student's name, then their "
            "score one at a time."<<endl;
    for(int i=0;i<userI;i++){
        cin >> names[i];
        cin >> *(scores+i);
        while(*(scores+i)<0){
            cout<<"please pick a non-negative number.";
            cin>>*(scores+i);
        }
    }
    
    
    sort2(scores,userI,names);
    
    average2(scores, userI);
    
    delete [] scores;
    delete [] names;
    //Exit
                    break;
                }
                case 5:{
                    int *xptr,*yptr,value;
    int x, y;
    
    cout <<"pick an x and y"<<endl;
    
    cin>> x >> y;
    xptr=&x;
    yptr=&y;
    
    value=doSomething(xptr,yptr);
    
    cout <<value;
                    break;
                }
                case 6:{
                    int num_donations;
     cout << "what is the number of donations?"<<endl;
     cin>>num_donations;
     
     int donations[num_donations];
     
     cout<<"input the donations one at a time"<<endl;
     for (int i=0;i<num_donations;i++){
         cin >>donations[i];
     }
 // An array containing the donation amounts.
 

 // An array of pointers to int.
 int *arrPtr[num_donations];

 // Each element of arrPtr is a pointer to int. Make each
 // element point to an element in the donations array.
 for (int count = 0; count < num_donations; count++)
    arrPtr[count] = &donations[count];

 // Sort the elements of the array of pointers.
 arrSelectSort(arrPtr, num_donations);

 // Display the donations using the array of pointers. This
 // will display them in sorted order.
 cout << "The donations, sorted in ascending order are: \n";
 showArrPtr(arrPtr, num_donations);

 // Display the donations in their original order.
 cout << "The donations, in their original order are: \n";
 showArray(donations, num_donations);
                    break;
                }
                case 7:{
                    const int NUM_DONATIONS = 15; // Number of donations

 // An array containing the donation amounts.
 int donations[NUM_DONATIONS] = { 5, 100, 5, 25, 10,
 5, 25, 5, 5, 100,
 10, 15, 10, 5, 10 };

 // An array of pointers to int.
int *arrPtr[NUM_DONATIONS];

 // Each element of arrPtr is a pointer to int. Make each
 // element point to an element in the donations array.
 for (int count = 0; count < NUM_DONATIONS; count++)
 arrPtr[count] = &donations[count];

 // Sort the elements of the array of pointers.
 arrSelectSort1(arrPtr, NUM_DONATIONS);

 // Display the donations using the array of pointers. This
 // will display them in sorted order.
 cout << "The donations, sorted in descending order are: \n";
 showArrPtr1(arrPtr, NUM_DONATIONS);

 // Display the donations in their original order.
 cout << "The donations, in their original order are: \n";
 showArray1(donations, NUM_DONATIONS);
                    break;
                }
                case 8:{
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
                    break;
                }
                case 9:{
                    const int VAL=25;
    int array[VAL];
    
    
    for(int i=0,j=1;j<=VAL;j++,i++){
        if (i==4){i=0;}
        array[j]=i;        
    }
    int *ptrArry=array;
    
    cout << "this is the array of 0-3 repeating in a size "<< VAL<<
            " array"<<endl;
    
    for(int i=1;i<=VAL;i++){
        cout << array[i]<< " ";        
    } 
    cout <<endl<<endl;
    
    for(int i=1;i<=VAL;i++){                 //sort pointer array
        for(int j=i+1;j<=VAL;j++){ 
            if(ptrArry[i]>ptrArry[j]){ 
                ptrArry[i]=ptrArry[i]^ptrArry[j];
                ptrArry[j]=ptrArry[i]^ptrArry[j];
                ptrArry[i]=ptrArry[i]^ptrArry[j];
            }
        }
    }
    cout <<"this is the sorted version of the previous array"<<endl;
    for(int i=1;i<=VAL;i++){
        cout << ptrArry[i]<< " ";        
    }
    
 
    cout <<endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
            <<endl;
    mean(array,VAL);
    median(array,VAL);
    mode(array,VAL);
                    break;
                }
            default:{
                choice=15;
                }
        };
    }while(choice<=10);
    return 0;
}
void sort(int *scores,int userI){
    
    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<
            "Scores that are set in ascending order:"<<endl;
    for(int i=0;i<userI-1;i++){
        for(int j=i+1;j<userI;j++){
            if(*(scores+i)>*(scores+j)){
                *(scores+i)=*(scores+i)^*(scores+j);
                *(scores+j)=*(scores+i)^*(scores+j);
                *(scores+i)=*(scores+i)^*(scores+j);
            }
        }
    }
    for(int i=0;i<userI;i++){
        cout << *(scores+i)<<setw(4);
    }
    cout <<endl;
}
void average(int*scores,int userI){
    float average=0;
    
    cout <<"While the average is:"<<endl;
    
    for(int i=0;i<userI;i++){
    average+=*(scores+i);
    }
    average/=userI;
    cout <<average<<endl;
}
void sort1(int *scores,int userI){
    
    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<
            "Scores that are set in ascending order:"<<endl;
    for(int i=0;i<userI-1;i++){
        for(int j=i+1;j<userI;j++){
            if(*(scores+i)>*(scores+j)){
                *(scores+i)=*(scores+i)^*(scores+j);
                *(scores+j)=*(scores+i)^*(scores+j);
                *(scores+i)=*(scores+i)^*(scores+j);
            }
        }
    }
    for(int i=0;i<userI;i++){
        cout << *(scores+i)<<setw(4);
    }
    cout <<endl;
}
void average1(int*scores,int userI){
    float average=0;
    
    cout <<"While the average is:"<<endl;
    
    for(int i=1;i<userI;i++){
    average+=*(scores+i);
    }
    average=average/(userI-1);
    cout <<setprecision(2)<<fixed<<average<<endl<<
            "when the lowest score is dropped";
    
}
void sort2(int *scores,int userI,string names[]){
    string storage="";
    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<
            "Scores that are set in ascending order:"<<endl;
    for(int i=0;i<userI-1;i++){
        for(int j=i+1;j<userI;j++){
            if(*(scores+i)>*(scores+j)){
                *(scores+i)=*(scores+i)^*(scores+j);
                *(scores+j)=*(scores+i)^*(scores+j);
                *(scores+i)=*(scores+i)^*(scores+j);
                storage=*(names+i);
                *(names+i)=*(names+j);
                *(names+j)=storage;
            }
        }
    }

    

    for(int i=0;i<userI;i++){
        cout << names[i]<<"-"<<*(scores+i)<<setw(10);
    }
    cout <<endl;
}
void average2(int*scores,int userI){
    float average=0;
    
    cout <<"While the average is:"<<endl;
    
    for(int i=0;i<userI;i++){
    average+=*(scores+i);
    }
    average/=userI;
    cout <<average<<endl;
}
int doSomething(int *x, int *y){
    
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}
void arrSelectSort(int *arr[], int size)
 {
    int startScan, minIndex;
    int *minElem;

    for (startScan = 0; startScan < (size - 1); startScan++){
        minIndex = startScan;
        minElem = arr[startScan];
    for(int index = startScan + 1; index < size; index++){
        if (*(arr[index]) < *minElem){
            minElem = arr[index];
            minIndex = index;
        }
    }
    arr[minIndex] = arr[startScan];
    arr[startScan] = minElem;
}
 }
void showArray(const int arr[], int size){
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
 }
void showArrPtr(int *arr[], int size)
 {
    for (int count = 0; count < size; count++)
        cout << *(arr[count]) << " ";
        cout << endl;
 }
void arrSelectSort1(int *arr[], int size)
 {
 int startScan, minIndex;
 int *minElem;

 for (startScan = 0; startScan < (size - 1); startScan++)
 {
 minIndex = startScan;
 minElem = arr[startScan];
 for(int index = startScan + 1; index < size; index++)
 {
 if (*(arr[index]) > *minElem)
 {
 minElem = arr[index];
 minIndex = index;
 }
 }
 arr[minIndex] = arr[startScan];
 arr[startScan] = minElem;
}
 }
void showArray1(const int arr[], int size)
 {
 for (int count = 0; count < size; count++)
 cout << arr[count] << " ";
 cout << endl;
 }
void showArrPtr1(int *arr[], int size)
 {
 for (int count = 0; count < size; count++)
 cout << *(arr[count]) << " ";
 cout << endl;
 }
void mean(int array[],const int VAL){
    float mean=0; 
    
    for(int j=1;j<=VAL;j++){
        mean+=array[j];        
    }
    mean=mean/VAL;
    cout<< "the Mean is "<<mean<<"."<<endl;
}
void median(int array[],const int VAL){
    int middle=VAL/2, rest=VAL%2;
    middle+=rest;
    cout << "the Median is " << array[middle] << "."<<endl;
}
void mode(int array[],const int VAL){
    int zero=0,one=0,two=0,three=0;
        
    for(int i=1;i<=VAL;i++){      
        if (array[i]==0){zero++;}
        if (array[i]==1){one++;}
        if (array[i]==2){two++;}
        if (array[i]==3){three++;}
    }
    if (zero==one){
        if (zero==two){
            if (zero==three){
                cout<<"The Mode is all of the numbers, because they are "
                        "each used "<<zero<<" times each."
                        <<endl;
            }
            else{cout <<"The Mode are numbers 0,1 and 2, and are used "
                    << zero<<" times each."<<endl;}
        }
        else{cout <<"The Mode are numbers 0 and 1 which are used "
                << zero<< " times each."<<endl;}
    }
    else{cout <<"The Mode is the number 0, and is used "<< zero<< 
            " times each."<<endl;}
}