//
//  main.cpp
//  continput
//
//  Created by aditya on 12/13/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int input=0;
    
    do
    {
    cout<<"input a number or enter 99 to quit:";
    cin>>input;
        
    if(input>0)
        cout<<input<<" is a positive number"<<endl;
    else if(input<0)
        cout<<input<<" is a negative number"<<endl;
    else
        cout<<input<<" is zero"<<endl;
    } while ( input!=99);
    
}
