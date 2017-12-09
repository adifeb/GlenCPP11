//
//  main.cpp
//  factorial of number
//
//  Created by aditya on 12/9/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    //Declare
    
    int i,factorial=1,inputnumber;
    
    // Get Input
    cout<<"enter a number:";
    cin>>inputnumber;
    
    // Processing
    for(i=2;i<=inputnumber;i++)
        factorial=factorial*i;
    
    //Output
    cout<<"Factorial of the number "<<inputnumber<<" is "<<factorial<<endl;
    return 0;
}
