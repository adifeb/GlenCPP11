//
//  main.cpp
//  fibonnaciseries
//
//  Created by aditya on 12/24/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int f1,f2,f3,cnt=2;
    f1=0;
    f2=1;
    cout<<f1<<f2<<endl;
    while(cnt<=10)
    {
        f3=f1+f2;
        cout<<f3<<endl;
        f1=f2;
        f2=f3;
        cnt++;
    }
    return 0;
}
