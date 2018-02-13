//
//  main.cpp
//  q6
//
//  Created by aditya on 2/13/18.
//  Copyright © 2018 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter the value for n:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        sum=sum+i;
    }
    cout<<"sum of the numbers are:"<<sum;
}
