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
    int i;
    //input
    cout<<"the numbers divisible by 5 between 1 to 100 are:";
    //process
    //output
    for(i=1;i<100;i++)
    {
        if(i%5==0)
            cout<<i<<" "<<endl;
    }
    return 0;
}

