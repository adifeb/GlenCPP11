//
//  main.cpp
//  sumavgarr
//
//  Created by aditya on 12/25/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int arr[5],i,sum=0;
    cout<<"enter the numbers";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;
    cout<<(float)sum/5<<endl;
    return 0;
}
