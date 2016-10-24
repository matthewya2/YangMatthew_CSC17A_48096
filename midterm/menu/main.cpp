//Dr. Mark E. Lehr
//October 4th, 2016
//Menu to be used for the midterm
//homework and final, etc....

//Library includes Here!!!
#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "Info.h"
#include "EmpInfo.h"
#include "statsResult.h"
//Global Constants Here!!!

//Function Prototypes Here!!!
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void mrkSort(int*,int);
statsResult *avgMedMode(int *,int); 

//Begin Execution Here!!!
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        case 6:    problem6();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=6);
    return 0;//If midterm not perfect, return something other than 1
}

void Menu(){
    cout<<"Menu for the Midterm"<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1(){
        cout<<"In problem # 1"<<endl<<endl;
        int custs; 
    int balT=0, depoST=0, checkT=0, *checkV, *depoSV;
    
    cout << "how many customer's data will you be entering in?"<<endl;
    cin >> custs;

    Info *cInfo=new Info[custs];
    
    for (int i=0;i<custs;i++){
        cin.ignore(20,'\n');
        cout <<"What is your name?"<<endl;
        getline(cin, cInfo[i].Name);
        cout <<"what is your address?"<<endl;
        getline(cin, cInfo[i].Address);
        do{                                 //input validation
        cout <<"what is your ID number?(max 5 digits)"<<endl;
        cin>> cInfo[i].IDnum;
        }while(cInfo[i].IDnum<10000||cInfo[i].IDnum>99999);
        cout <<"what is your Balance at the beginning of the month?"<<endl;
        cin>> cInfo[i].Bal;
        cout <<"How many checks did you make?"<<endl;
        cin>> cInfo[i].Checks;
        cout <<"How many deposits did you receive?"<<endl;
        cin>> cInfo[i].DepoS;
        
        checkV = new int [cInfo->Checks];
        depoSV = new int [cInfo->DepoS];
        
        for(int c=0;c<cInfo->Checks;c++){        //check counter
            cout <<"what were the values of these checks?"<<endl;
            cout <<"enter check #"<<c+1<<": ";
            cin >> checkV[c];     
            checkT+=checkV[c];
        }
        
        cout << "your checks add up to $"<<checkT<<endl;
        
        for(int d=0;d<cInfo->DepoS;d++){        //Deposit counter
            cout <<"what were the values of these deposits?"<<endl;
            cout <<"enter deposit #"<<d+1<<": ";
            cin >> depoSV[d]; 
            depoST+=depoSV[d];
        }
        
        cout << "your deposits add up to $"<<depoST<<endl;
        
        balT=cInfo[i].Bal-checkT+depoST;
        cout << "your total balance in your account is $"<<balT<<"."<<endl;
       
        if(balT<0){
           balT-=15;
           cout << "since you have overdrawn your account money, you have been"
                   " fined $15. "<<endl<<"with this change, your account now holds a"
                   " balance of, $"<<balT;
           
        }
       
       cout << cInfo[i].Name << " lives on "<<cInfo[i].Address<<" and her ID"
               " number is "<<cInfo[i].IDnum<<"."<<endl<< "the total balance of"
               " his/her account is now, $"<<balT<<endl<<endl; 
    }
    
    
    delete []cInfo;
    delete []checkV;
    delete []depoSV;
}

void problem2(){
        cout<<"In problem # 2"<<endl<<endl;
        int empNum;
    int moneyM;       //money made
    int counter[2] ={0};//counts so the function knows if it should output zero  
    
    cout << "how many employees will be using this program?"<<endl;
    cin >> empNum;
    
    EmpInfo *empInfo=new EmpInfo [empNum];
    
    for(int i=0;i<empNum;i++){
        cin.ignore(20,'\n');
        cout << "employee number "<<i+1<<"."<<endl;
        cout <<"what is your name?:";
        getline(cin, empInfo[i].name);
        
        do{
        cout << "how many hours do you work a week?"<<endl<<
                "no negative numbers please"<<endl;
        cin >>empInfo[i].hours;
        }while(empInfo[i].hours<0);
        do{
        cout <<"how much do you get paid to work?(ex. sam works for $10.50"
                " an hour, so sam inputs 10.5)"<<endl<<
                "no negative numbers please"<<endl;
        cin >> empInfo[i].rateP; 
        }while(empInfo[i].rateP<0);
        if (empInfo[i].hours<40){
            moneyM= (empInfo[i].rateP*empInfo[i].hours);                    
        }
        if (empInfo[i].hours>40 && empInfo[i].hours<=50){
            moneyM= (empInfo[i].rateP*40)+(empInfo[i].hours-40)
                    *(empInfo[i].rateP*2);
        }
        if (empInfo[i].hours>50){
            moneyM= (empInfo[i].rateP*40)+(empInfo[i].rateP*2*10)
                    +(empInfo[i].hours-50)*(empInfo[i].rateP*3);
        }
        
        
       

    
        cout <<endl<<"-Paycheck-"<<endl;
    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout <<"Company"<<endl;
    cout <<"Address"<<endl;
    cout <<"Name: "<<empInfo[i].name<<setw(15);
    cout <<"Amount: "<<moneyM<<endl<<endl<<endl;
    }
    
    
    
    delete [] empInfo;
}

void problem3(){
        cout<<"In problem # 3"<<endl<<endl;
        int size;
    int *array;
    
    
    cout <<"how big do you want your array?"<<endl;
    cin>>size;
    array = new int [size];
    
    cout <<"please input the array one number at a time"<<endl;
    for(int i=0;i<size;i++){
        cin>> array[i];
    }
    
    for(int i=0;i<size;i++){
        cout<< array[i]<<" ";
    }
    cout <<endl;
    avgMedMode(array,size);
    
    
     
    
    delete [] array;
}

void problem4(){
        cout<<"In problem # 4"<<endl<<endl;
        const int SIZE=4;
    char input[SIZE]={0};
    int intInp[SIZE]={0};
    char buffer[1];
    int bufferI;
    cin.ignore(20,'\n');
    cout <<"input the 4 integers you wish to encrypt."<<endl;
    cin.getline(input,SIZE+1);
    
    for (int i=0; i<SIZE;i++){
        buffer[0]=input[i];
        intInp[i] = atoi (buffer);
        if (intInp[i]>7){
            cout << "error, restart program please."<<endl;
            return ;
        }
        intInp[i]+=3;
        intInp[i]%=8;
    }
    


        
    bufferI=intInp[0];           //swaps 1 and 2
    intInp[0]=intInp[1];
    intInp[1]=bufferI;
    
    bufferI=intInp[2];           //swaps 3 and 4
    intInp[2]=intInp[3];    
    intInp[3]=bufferI;
    
    for (int i=0;i<SIZE;i++){
        cout <<intInp[i]<<" ";
    }
    cout <<endl;
    //decrypt part
    cout <<"input the 4 integers you wish to decrypt."<<endl;
    cin.getline(input,SIZE+1);
    
    for (int i=0; i<SIZE;i++){
        buffer[0]=input[i];
        intInp[i] = atoi (buffer);
        if (intInp[i]>7){
            cout << "error, restart program please."<<endl;
        }
        if (intInp[i]<4){
            intInp[i]+=5;
        }
        else{
            intInp[i]-=3;
        }
           
        
    
    }
    
    
    
    
    bufferI=intInp[0];           //swaps 1 and 2
    intInp[0]=intInp[1];
    intInp[1]=bufferI;
    
    bufferI=intInp[2];           //swaps 3 and 4
    intInp[2]=intInp[3];    
    intInp[3]=bufferI;
    
    for (int i=0; i<SIZE;i++){
        cout <<intInp[i]<<" ";
    }
}

void problem5(){
        cout<<"In problem # 5"<<endl<<endl;
        cout <<"a byte variable can hold up to 5!."<<endl;
    cout <<"a short can hold up to 7! "
            "while an unsigned short can hold up to 8!"<<endl;
    cout <<"an int can hold up to 12! which is the same for an unsigned int."<<endl;
    cout <<"a long can hold up to 12! which is the same for an unsigned long."<<endl;
    cout <<"a float can hold up to 12! which is the same for an unsigned float."<<endl;
    cout <<"a double can hold up to 12! which is the same for an unsigned double."<<endl;
}

void problem6(){
        cout<<"In problem # 6"<<endl<<endl;
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
}

void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}
statsResult *avgMedMode(int *array,int size){
    statsResult mmm;
    mrkSort(array,size);
    int count=0,maxFreq=0;
    for(int i=0;i<size-1;i++){
        if(array[i]==array[i+1]){
            count++;
            if(maxFreq<count)maxFreq=count;
        }else{
            count=0;
        }
    }
    mmm.maxFreq=maxFreq;
    cout<<"Mode Freq = "<<mmm.maxFreq+1<<endl;
    
    count=0;
    int nModes=0;
    for(int i=0;i<size-1;i++){
        if(array[i]==array[i+1]){
            count++;
            if(maxFreq==count)nModes++;
        }else{
            count=0;
        }
    }
    mmm.nModes=nModes;
    
    int *modeAry=new int[nModes+2];
    mmm.mode=new int [nModes];
    //Fill the array
    modeAry[0]=nModes;
    modeAry[1]=maxFreq+1;
    count=0;
    int indx=2;
    int j=0;
    for(int i=0;i<size;i++){
        if(array[i]==array[i+1]){
            count++;
            if(maxFreq==count){
                modeAry[indx++]=array[i];
                mmm.mode[j++]=array[i];
                
            }
            else{
            count=0;
            }
        }
    }
    cout<<"The number of modes = "<<
            mmm.nModes<<endl;
    cout<<"The max Frequency = "<<
            mmm.maxFreq+1<<endl;
    if(modeAry[0]==0){
        cout<<"The mode set = {null}"<<endl;
        return 0;
    }
    cout<<"The mode set = {";
    for(int i=0;i<mmm.nModes;i++){
        cout<<mmm.mode[i]<<" ";
    }
    cout<<"}"<<endl;
    delete []modeAry;
    delete []mmm.mode;
} 
void mrkSort(int *array,int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]>array[j]){
                array[i]=array[i]^array[j];
                array[j]=array[i]^array[j];
                array[i]=array[i]^array[j];
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<< array[i]<<" ";
    }
    cout <<endl;
}