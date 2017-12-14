//
//  main.cpp
//  decr
//
//  Created by aditya on 12/14/17.
//  Copyright © 2017 aditya. All rights reserved.
// i=i-3 ( i-=3 )
// i=i+1 ( i++ )
//

#include <iostream>
using namespace std;
int main()
{
    int n,m,i;
    cout<<"enter the number:";
    cin>>n;
    cout<<"Enter decrement";
    cin>>m;
    for(i=n;i>1;i-=m)
    {
        cout<<i<<" ";
     
    
    }
}
