//
//  main.cpp
//  comparestring
//
//  Created by aditya on 12/18/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    char name1[20],name2[20];
    cout<<"enter name1:";
    gets(name1);
    cout<<"enter name2:";
    gets(name2);
    for(int i=0;name1[i]!='/0';i++)
    {
        if(name1==name2)
            cout<<"they are equal";
        else
            cout<<"they are not equal";
    }
    return 0;
}
