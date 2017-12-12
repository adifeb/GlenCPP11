//
//  main.cpp
//  100-1div5
//
//  Created by aditya on 12/12/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    cout<<"the numbers divisible by 5 are:";
    for(int i=100;i>1;i--)
    {
        if(i%5==0)
            cout<<i<<" ";
    }
    
    return 0;
}
