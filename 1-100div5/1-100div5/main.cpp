//
//  main.cpp
//  1-100div5
//
//  Created by aditya on 12/10/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    //declare
    int i,num;
    //input
    cout<<"enter the last number:";
    cin>>num;
    cout<<"the numbers divisible by 5:"<<endl;
    
    //process
    //output
    for(i=1;i<num;i++)
    {
        if(i%5==0)
            cout<<i<<" ";
    }
    return 0;
}

