/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   employee.h
 * Author: Matthew
 *
 * Created on December 3, 2016, 9:10 PM
 */
#include <string>
#include <cstdlib>
#include <iostream>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;

class Employee{
    private:
        string name;
        string number;
        string date;
    public:
        Employee (int shift){
            if (shift<1 || shift>2){
                string shiftEr="invalid number";
                throw (shiftEr);
            }}
        string getName()const{return name;}
        string getNumber()const{return number;}
        string getDate()const{return date;}
        void setName(string nom) {name = nom;}
        void setNum(string num) {number = num;}
        void setDate(string dat) {date = dat;}
};
class ProductionWorker : public Employee{
    private:
        int shift;
        float payRate;
    public:
        ProductionWorker(int shift):Employee(shift){};
        void setShift(int s){ 
            shift = s;  
        }
        void setPayRate(float pR) {payRate = pR;}
        int getShift()const{return shift;}
        int getPayRate()const{return payRate;}
};

class ShiftSupervisor : public Employee{
    private:
        float salary;
    public:
        ShiftSupervisor(int null):Employee(null){salary=0;}
        void setSalary(float bone,float sal){
            salary=sal+bone;
        }
        void setSalary(float sal){
            salary=sal;
        }
        float getSalary()const{return salary;}
        
};

#endif /* EMPLOYEE_H */

