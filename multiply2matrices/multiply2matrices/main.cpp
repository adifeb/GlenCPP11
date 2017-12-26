//
//  main.cpp
//  multiply2matrices
//
//  Created by aditya on 12/26/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    cout<<"enter the elements for A:";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            cin>>a[i][j];
    }
    cout<<"enter the elements for B:";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            cin>>b[i][j];
    }
    cout<<"product of the two matrixes are:";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=0;
            for(int k=0;k<2;k++)
                c[i][j]=c[i][j]+a[i][j]*b[i][j];
            cout<<c[i][j]<<" ";
        }
    }
}
