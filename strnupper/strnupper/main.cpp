//
//  main.cpp
//  strnupper
//
//  Created by aditya on 12/25/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str[10];
    cout<<"enter the name:";
    cin>>str;
    cout<<"your name is:"<<str;
    for(int i=0;i<str[i];i++)
    {
        cout<<endl<<str[i]<<endl;
    }
    for(int i=0;i<str[i];i++)
    {
        str[i]=toupper(str[i]);
        cout<<endl<<str[i]<<endl;
    }
    return 0;
}
