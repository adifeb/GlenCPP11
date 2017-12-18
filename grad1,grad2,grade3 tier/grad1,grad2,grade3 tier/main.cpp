//
//  main.cpp
//  grad1,grad2,grade3 tier
//
//  Created by aditya on 12/17/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    float name,sal,da,hr,tot = 0;
    cout<<"enter the name of the person:";
    cin>>name;
    cout<<"enter the salary of the person:";
    cin>>sal;
    if(sal>10000)
    {
        da=0.4*sal;
        hr=0.3*sal;
     }
    else if(sal>5000||sal<10000)
    {
        da=0.4*sal;
    hr=0.25*sal;
    }
    else if(sal>2000||sal<5000)
    {
        da=0.3*sal;
    hr=0.2*sal;
     }
    else
    {
        da=0.3*sal;
        hr=0.15*sal;
     }
    tot=da+hr+sal;
    cout<<"the pay slip of the user is:"<<name<<sal<<da<<hr<<tot;
    return 0;
}
