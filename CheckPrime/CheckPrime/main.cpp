//
//  main.cpp
//  prime or not
//
//  Created by aditya on 12/9/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    // Declare and Initialize Variables
    int n,i;
    bool isprime=true;
    
    // Get Input from User
    
    cout<<"enter a number:";
    cin>>n;
    
    // Process Data
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            isprime=false;
    else
        isprime=true;
    }
    
    // Output
    if(isprime)
    
        cout<<n<<" is a prime number"<<endl;
     else
        cout<<n<<" is not a prime number"<<endl;
}
    
    
        

