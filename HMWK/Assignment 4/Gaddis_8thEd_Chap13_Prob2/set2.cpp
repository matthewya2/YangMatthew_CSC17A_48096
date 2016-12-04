/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

//System Libraries Here
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "Class.h"


Employee::Employee(string nom, string dep,int id,string pos){
    name=nom;
    depart=dep;
    idnum=id;
    position=pos;
}
void Employee::Print(){
    cout <<name<<setw(15)<<idnum<<setw(20)<<depart<<setw(20)<<position<<endl;
}