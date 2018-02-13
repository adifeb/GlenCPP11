//
//  main.cpp
//  q9
//
//  Created by aditya on 2/13/18.
//  Copyright © 2018 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int f1,f2,f3,cnt=2,n;
    cout<<"enter n:";
    cin>>n;
    f1=0;
    f2=1;
    cout<<f1<<f2;
    while(cnt<=n)
    {
        f3=f1+f2;
        cout<<f3;
        f1=f2;
        f2=f3;
        cnt++;
    }
    return 0;
}
