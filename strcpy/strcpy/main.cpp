//
//  main.cpp
//  strcpy
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
    char name[20],name2[20];
    cout<<"enter your name:";
    cin>>name;
    strcpy(name2,name);
    cout<<"the copied string is:"<<name2<<endl;;
    return 0;
}
