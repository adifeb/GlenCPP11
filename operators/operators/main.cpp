//
//  main.cpp
//  operators
//
//  Created by aditya on 12/11/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    char ch;
    float a,b,result;
    cout<<"enter two numbers:";
    cin>>a>>b;
    cout<<"enter the operators(+,-,*,/):";
    cin>>ch;
    if(ch=='+')
        result=a+b;
    else if(ch == '-')
        result=a-b;
    else if(ch =='*')
        result=a*b;
    else if(ch == '/')
        result=a/b;
    else
        cout<<"wrong operator";
    cout<<"the calculated result is:"<<result<<endl;
    return 0;
    
    
}
