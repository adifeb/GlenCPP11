//
//  main.cpp
//  arithematic calculator
//
//  Created by aditya on 12/24/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
float n1,n2,res;
char oper;
    cout<<"enter the 2 numbers";
    cin>>n1>>n2;
    cout<<"enter an operator(+,-,*,/,%):";
    cin>>oper;
    switch(oper)
    {
        case'+':
            res=n1+n2;
            break;
        case'-':
            res=n1-n2;
            break;
        case'/':
            res=n1/n2;
            break;
        case'%':
            res=(int)n1%(int)n2;
            break;
        default:
            cout<<"invalid operator";
    }
    cout<<"the calculated result is:"<<res<<endl;
    return 0;
}
