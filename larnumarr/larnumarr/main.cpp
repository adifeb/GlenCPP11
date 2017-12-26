//
//  main.cpp
//  larnumarr
//
//  Created by aditya on 12/25/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int arr[50],size,i,large;
    cout<<"enter the size of the array:";
    cin>>size;
    cout<<"enter the elements of the array:";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    large=arr[0];
    for(i=1;i<size;i++)
    {
        if(large<arr[i])
            large=arr[i];
    }
    cout<<"the largest element present is:"<<large<<endl;
    return 0;
}
