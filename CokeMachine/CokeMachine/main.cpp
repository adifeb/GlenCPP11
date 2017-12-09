//
//  main.cpp
//  CokeMachine
//
//  Created by aditya on 12/9/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    // declare and initialize
    int i;
    //input
    cout<<"Aditya's Coke Machine"<<endl;
    cout<<"1.coke"<<endl<<"2.pepsi"<<endl<<"3.sprite"<<endl<<"4.water"<<endl<<"5.ice tea"<<endl;
    cout<<"enter the choice of drink: ";
    cin>>i;
    //processing
    
    //output
    switch(i)
    {
    case 1:
            cout<<" Your Coke has been served, Enjoy :) "<<endl;
            break;
    case 2:
            cout<<" I didnt know that you like Pepsi, Enjoy :)"<<endl;
            break;
    case 3:
            cout<<"Enjoy your Sprite"<<endl;
            break;
    case 4:
            cout<<"Good choice.. Water is always good"<<endl;
            break;
    case 5:
            cout<<"Surprising that you like Ice Tea"<<endl;
            break;
    
default:
    cout<<"You must select a valid option"<<endl;
    }
    return 0;
}
    

