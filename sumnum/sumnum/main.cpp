//
//  main.cpp
//  sumnum
//
//  Created by aditya on 12/12/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,n1;
    cout<<"enter the number:";
    cin>>n;
    int sum=0;
    while(n>0)
    {
        n1=n%10;
        sum=sum+n1;
        n=n/10;
    }
    cout<<"sum of the digits is:"<<sum<<endl;
    return 0;
}
