//
//  main.cpp
//  day
//
//  Created by aditya on 12/12/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"enter the case below written in the code:";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"it is a monday"<<endl;
            break;
        case 2:
            cout<<"it is a tuesday"<<endl;
            break;
        case 3:
            cout<<"it is a wednesday"<<endl;
            break;
        case 4:
            cout<<"it is a thursday"<<endl;
            break;
        case 5:
            cout<<"it is a friday"<<endl;
            break;
        case 6:
            cout<<"it is a saturday"<<endl;
            break;
        case 7:
            cout<<"it is a sunday"<<endl;;
            break;
        default:
            cout<<"error!";
    }
    return 0;
}
