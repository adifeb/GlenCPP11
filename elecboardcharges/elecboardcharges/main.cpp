//
//  main.cpp
//  elecboardcharges
//
//  Created by aditya on 12/17/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    float units,charges;
    cout<<"enter the units:";
    cin>>units;
    if(units ==100)
        charges=0.04+50;
   else if(units==200)
        charges=0.05+50;
     else   if(units==300)
            charges=0.06+50;
    else
        charges=0;
    cout<<"meter charge payed by user:"<<charges<<endl;
            }
        
