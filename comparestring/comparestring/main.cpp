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
    bool flag=0;
    cout<<"enter name1:";
    cin>>name1;// used cin instead of gets because it is unsafe
    cout<<"enter name2:";
    cin>>name2;
    for(int i=0;name1[i]!='/0';i++) || for( i=0; name2[i]!=0;i++)
    {
        if(name1[i]==name2[i])
            flag=1;
        else
            flag=0;
        break;
    }
    if(flag==1)
        cout<<"they are equal"<<endl;
    else
        cout<<"they are not equal"<<endl;
    return 0;
}
