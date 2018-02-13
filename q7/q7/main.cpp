//
//  main.cpp
//  q7
//
//  Created by aditya on 2/13/18.
//  Copyright © 2018 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the year in 4 digits:";
    cin>>n;
    if(n%4==0)
        cout<<n<<"is a leap year";
    else
        cout<<n<<"is not a leap year";
}
