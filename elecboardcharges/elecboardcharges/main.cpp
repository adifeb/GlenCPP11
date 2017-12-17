//
//  main.cpp
//  elecboardcharges
//  Rules :
//  1 to 100 Units : 40 ps per unit
//  101 to 300 Units : 50 ps per unit
//  above 300 Units : 60 ps per Unit
//  Meter Charges = Rs 50
//  Created by aditya on 12/17/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    float units,slab1,slab2,slab3;
    cout<<"enter the units:";
    cin>>units;
    if(units >100)
    {
       slab1 =units;
        slab2=0;
        slab3=0;
    }
     else if(units>=100||units<=300)
    {
        slab1=100;
        slab2=units-100;
        slab3=0;
    }
      else if(units<=500)
      {
          slab1=100;
          slab2=200;
          slab3=units-300;
      }
     else
        units=0;
    int cost= (0.4*slab1+0.5*slab2+0.6*slab3)+50;
    cout<<"the total cost is:"<<cost;
    return 0;
}
        
