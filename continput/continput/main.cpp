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
    cout<<"input a number:";
    while(cin>>input)
    {
    if(input>0)
        cout<<input<<"positive number";
    else if(input==0)
        cout<<input<<"zero";
    else if(input<0)
        cout<<input<<"negative number";
    else
        cout<<"press A to stop";
    }
    cout<<input<<"positive number"<<endl;;
    cout<<input<<"negative number"<<endl;
    cout<<input<<"zero"<<endl;
    
    
}
