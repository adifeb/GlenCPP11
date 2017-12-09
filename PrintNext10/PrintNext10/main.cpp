//
//  main.cpp
//  next  10nos after another
//
//  Created by aditya on 12/9/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    //Declare and Initialize  
    int n,i, sum=0, product=1;
    //Input
    cout<<"enter a number:";
    cin>>n;
    cout<<"next 10 numbers after "<<n<<" are ";
    //Processing
    for(i=n+1;i<=n+10;i++)
    {
        cout<<i<<" ";
        sum=sum+i;
        product=product*i;
    }
    //Output
    cout<<endl;
    cout<<"Sum of the next 10 digits after "<<n<<" is "<<sum<<endl;
    cout<<"Product of the next 10 digits is "<<product<<endl;
    return 0;
    
    
}
