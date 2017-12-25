//
//  main.cpp
//  strcpy
//
//  Created by aditya on 12/25/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char name[20],name2[20];
    cout<<"enter your name:";
    cin>>name;
    for(int i=0;name[i]!='/0';i++)
    {
        name2[i]=name[i];
    }
    cout<<"string 2:"<<name2;
    return 0;
}
