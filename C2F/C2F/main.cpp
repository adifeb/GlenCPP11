//
//  main.cpp
//  ctof
//
//  Created by aditya on 12/9/17.
//  Copyright © 2017 aditya. All rights reserved.
//this program takes in the input in celcius and converts to farheniet

#include <iostream>
using namespace std;
int main()
{
    // declare and initialize
    float cdeg,fdeg;
    //input
    cout<<"enter the value in celcius:";
    cin>>cdeg;
    //process
    fdeg=(cdeg*9/5)+32;
    //output
    cout<<"the value in farheniet is:"<<fdeg<<endl;
    return 0;
}

