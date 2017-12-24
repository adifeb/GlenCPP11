//
//  main.cpp
//  multiplication table
//
//  Created by aditya on 12/24/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the the value to print the multiplication table:";
    cin>>n;
    cout<<"multiplication table of n:";
    for(i=1;i<15;i++)
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
return 0;
}
