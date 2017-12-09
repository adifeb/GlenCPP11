//
//  main.cpp
//  rootsnum
//
//  Created by aditya on 12/9/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //declare and initialize
    int a,b,c;
    float r1=0, r2=0, delta=0;
    //input
    cout<<"enter the three values:";
    cin>>a>>b>>c;
     //process
    if ( a==0 && b==0 )
    {
        cout << "No Roots or Solution";
        exit(0);
    }

    delta = ( (b*b) - (4*a*c ));
    if (delta < 0)
        cout << "No Roots "<<endl;
    else
        
    r1=  ( -1*b + (sqrt(delta) ))/ (2*a);
    r2=  ( -1*b - (sqrt(delta) ))/ (2*a);
    //output
    cout << r1 <<" " <<r2;
    
    return 0;
}
