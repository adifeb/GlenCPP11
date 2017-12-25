//
//  main.cpp
//  strings2
//
//  Created by aditya on 12/25/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char name[3],i,oddstr[10];
    cout<<"enter the name:";
    for(i=0;i<10;i+=2)
    {
        cin>>name[i];
    }
    cout<<name;
    for(i=0;i<10;i++)
    {
        oddstr[i]=toupper(name[i]);
    }
    cout<<"the odd number in uppercase is:"<<oddstr;
}
