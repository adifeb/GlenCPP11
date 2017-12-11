//
//  main.cpp
//  slaes,commission
//
//  Created by aditya on 12/11/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    float sales,comm;
    cout<<"enter sales made by the salesman:";
    cin>>sales;
    if(sales>5000)
           comm=sales*0.15;
    else if(sales>14000)
        comm=sales*0.10;
    else if(sales>18000)
        comm=sales*0.08;
    else
        comm=0;
    cout<<"the commission is:"<<comm<<endl;
    return 0;
}
