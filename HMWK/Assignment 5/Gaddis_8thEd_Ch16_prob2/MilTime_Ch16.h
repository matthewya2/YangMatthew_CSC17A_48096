/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MilTime.h
 * Author: Matthew
 *
 * Created on December 4, 2016, 10:50 PM
 */

#ifndef MILTIME_H
#define MILTIME_H

class Time
{   
protected:
    int hour;
    int min;
    int sec;
public:
    Time()
        {hour = 0; min = 0;}
    Time(int h, int m, int s)
        {hour = h; min = m;}
    int getHr() const
        {return hour;}
    int getMin() const
        {return min;}
};

class MilTime : public Time{
    private:
        int milHours;
        int milSeconds;
    public:
        MilTime(){
            milHours=0;
            milSeconds=0;
        }
        bool setTime(int,int);
        int getHour()const{
            return milHours;}
        int getStandHr()const{
            return hour;}

};


#endif /* MILTIME_H */

