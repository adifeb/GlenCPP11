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
    int num,rem;
    cout<<"enter the number:";
    cin>>num;
    int sum=0;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    cout<<"sum of the digits is:"<<sum<<endl;
    return 0;
}
