//
//  main.cpp
//  q5
//
//  Created by aditya on 2/13/18.
//  Copyright © 2018 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n1,n2,oper=0, res = 0;
    cout<<"enter the two numbers:";
    cin>>n1>>n2;
    cout<<"enter the operators(+,-,*,/):";
    cin>>oper;
    switch(oper)
    {
        case'+':
            res= n1+n2;
            break;
        case'-':
            res=n1-n2;
            break;
        case'*':
            res=n1*n2;
            break;
        case'/':
            res=n1/n2;
            break;
        default:
            cout<<"invalid operator";
    }
    cout<<"calculated result is:"<<res<<endl;
}
