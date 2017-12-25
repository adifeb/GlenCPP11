//
//  main.cpp
//  leapyear
//
//  Created by aditya on 12/11/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the year in 4 digits:";
    cin>>a;
    if(a%4==0)
        cout<<a<<"is a leapyear"<<endl;
    else
        cout<<a<<"is not a leapyear"<<endl;
}
