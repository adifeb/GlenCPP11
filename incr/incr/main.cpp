//
//  main.cpp
//  incr
//
//  Created by aditya on 12/14/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,m,i;
    cout<<"enter a number:";
    cin>>n;
    cout<<"enter an increment:";
    cin>>m;
    for(i=0;i<n;i+=m)
    {
        cout<<i<<" ";
    }
    return 0;
}
