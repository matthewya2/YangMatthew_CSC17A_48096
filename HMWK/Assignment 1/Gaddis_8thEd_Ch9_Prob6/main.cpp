/* 
 * File:   main.cpp
 * Author: Matthew Yang
 * Created on September 28, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here



//Function Prototypes Here
void arrSelectSort(int *[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int);

 int main(){
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
 return 0;
 }
 //****************************************************************
 // Definition of function arrSelectSort. *
 // This function performs an ascending order selection sort on *
 // arr, which is an array of pointers. Each element of array *
 // points to an element of a second array. After the sort, *
 // arr will point to the elements of the second array in *
 // ascending order. *
 //****************************************************************

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

 //***********************************************************
 // Definition of function showArray. *
 // This function displays the contents of arr. size is the *
 // number of elements. *
 //***********************************************************

 void showArray(const int arr[], int size){
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
 }

 //***************************************************************
 // Definition of function showArrPtr. *
 // This function displays the contents of the array pointed to *
 // by arr. size is the number of elements. *
 //***************************************************************
 void showArrPtr(int *arr[], int size)
 {
    for (int count = 0; count < size; count++)
        cout << *(arr[count]) << " ";
        cout << endl;
 }