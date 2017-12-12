//
//  main.cpp
//  multiplication table
//
//  Created by aditya on 12/12/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value for printing the multiplication table:";
    cin>>n;
    cout<<"the multiplication table of "<<n<<":"<<" " ;
    for(int i=0;i<=15;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}
