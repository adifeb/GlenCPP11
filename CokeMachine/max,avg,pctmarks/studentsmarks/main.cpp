//
//  main.cpp
//  max,avg,pctmarks
//
//  Created by aditya on 12/9/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    float maths,phy,chem, avg, pct;
    cout<<"enter marks in the 3 subjects ( M P C ): ";
    cin>>maths>>phy>>chem;
    if(maths>phy)
        cout<<"maths has the max marks"<<endl;
    if(phy>chem)
        cout<<"phy has the max marks"<<endl;
    else
        cout<<"chem has the highest marks"<<endl;
    
    avg=(maths+phy+chem)/3;
    cout<<"Average of all Subjects :"<<avg<<endl;
    
    pct=100*(maths+phy+chem)/300;
    cout<<"Percentage of total marks:"<<pct<<"%"<<endl;
    
    if(pct>90)
        cout<<"you got a A grade"<<endl;
    else if(pct>80)
        cout<<"you got a B grade"<<endl;
    else if(pct>70)
        cout<<"you got a C grade"<<endl;
    else if(pct>60)
        cout<<"you got a D grade"<<endl;
    else if(pct>50)
        cout<<"you got a E grade"<<endl;
    else
        cout<<"you failed"<<endl;
    return 0;
}
        
