//
//  main.cpp
//  revnum
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
   int newnum=0;
    while(num>0)
    {
        rem=num%10;
        newnum=newnum*10+rem;
        num=num/10;
     }
    cout<<"reverse of number is:"<<newnum<<endl;
    return 0;
}
