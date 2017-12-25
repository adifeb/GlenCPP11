//
//  main.cpp
//  eve1-n
//
//  Created by aditya on 12/12/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the last number:";
    cin>>n;
    cout<<"the even numbers between 1-n are:";
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            cout<<i<<" ";
    }
    return 0;
}
