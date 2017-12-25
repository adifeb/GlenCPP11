//
//  main.cpp
//  std2arr
//
//  Created by aditya on 12/25/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int marks[5],i;
    cout<<"enter the marks of the student:";
    for(i=0;i<5;i++)
    {
    cin>>marks[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"the marks are:"<<marks[i]<<endl;
    }
    return 0;
}

