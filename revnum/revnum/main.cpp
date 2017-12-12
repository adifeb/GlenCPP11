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
    int n,n1;
    cout<<"enter the number:";
    cin>>n;
   int rev=0;
    while(n!=0)
    {
        n1=n%10;
        rev=rev*10+n1;
        n=n/10;
     }
    cout<<"reverse of number is:"<<rev<<endl;
    return 0;
}
