//
//  main.cpp
//  strcmp
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
    char n1[20],n2[20],com;
            cout<<"enter the 1st string:";
            cin>>n1;
    cout<<"enter 2nd string:";
    cin>>n2;
    com=strcmp(n1,n2);
    if(com==0)
        cout<<"strings are equal"<<endl;
    else
        cout<<"strings are not equal"<<endl;
    return 0;
}
