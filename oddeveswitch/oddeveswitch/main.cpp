//
//  main.cpp
//  oddeveswitch
//
//  Created by aditya on 12/12/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int rem,num;
    cout<<"enter the number :";
    cin>>num;
    rem=num%2;
    switch(rem)
    {
        case 0:
            cout<<"it is a even number "<<endl;
            break;
        case 1:
            cout<<"it is a odd number"<<endl;
            break;
        default:
            cout<<"error!"<<endl;
    }
    return 0;
}
