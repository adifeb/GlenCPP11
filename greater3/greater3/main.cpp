//
//  main.cpp
//  greater3
//
//  Created by aditya on 12/11/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    
    int a,b,c;
    cout<<"enter the numbers:";
    cin>>a>>b>>c;
    if(a>b)
        cout<<a<<"is greater"<<endl;
 else if(b>c)
        cout<<b<<"is greater"<<endl;
    else
        cout<<c<<"is greater"<<endl;
    return 0;
}

