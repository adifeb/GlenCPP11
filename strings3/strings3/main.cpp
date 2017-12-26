//
//  main.cpp
//  strings3
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
    char name[10],name1[10];
    cout<<"enter your first name:";
    cin>>name;
    cout<<"enter your last name:";
    cin>>name1;
    cout<<"the length of the first name is:"<<strlen(name)<<endl;
    cout<<"the length of the last name is:"<<strlen(name1)<<endl;
    cout<<"the concatination of the two variables are:"<<strcat(name,name1)<<endl;
    char temp1[10],temp2[10];
    cout<<"the copy string of the 2 names="<<strcpy(temp1,name)<<strcpy(temp2,name1)<<endl;
    char com=strcmp(name,name1);
    if (com==0)
        cout<<com<<"the strings are equal"<<endl;
    else
        cout<<com<<"the strings  are not equal"<<endl;
}

