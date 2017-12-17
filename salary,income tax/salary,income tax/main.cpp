//
//  main.cpp
//  salary,income tax
//  
//  Created by aditya on 12/17/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    float inc=0,inctax=0;
    cout<<"enter the salary :";
    cin>>inc;
    
    if(inc>=9000)
        inctax=0.40*inc;
    else if(inc>=7500)
        inctax=0.30*inc;
    else if(inc<=7499)
        inctax=0.20*inc;
    
    cout<<"Your Income is: "<<inc<<" and income tax is: "<<inctax<<endl;
    return 0;
}

