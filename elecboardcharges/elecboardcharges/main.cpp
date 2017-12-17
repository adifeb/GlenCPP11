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
    if(units >=100)
    {
        charges=units*0.40;
    charges=charges+50;
    }
     else if(units<=200||units>100)
    {
        charges=units*0.50;
    charges=charges+50;
    }
      else if(units<=300||units>=200)
      {
            charges=units*0.60;
    charges=charges+50;
      }
     else
        charges=0;
    cout<<"meter charge payed by user:"<<charges<<endl;
            }
        
