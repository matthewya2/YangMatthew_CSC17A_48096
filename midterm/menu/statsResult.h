/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   statsResult.h
 * Author: Matthew
 *
 * Created on October 23, 2016, 3:55 PM
 */

#ifndef STATSRESULT_H
#define STATSRESULT_H


struct statsResult
{
    float avg;
    float median;
    int *mode;   //array containing the modes
    int nModes;  //number of modes in the array
    int maxFreq; //max frequency of modes
};




#endif /* STATSRESULT_H */

