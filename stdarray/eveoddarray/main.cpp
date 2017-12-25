//
//  main.cpp
//  stdarray
//
//  Created by aditya on 12/25/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int i, evencnt=0, oddcnt=0;
    int even[5], odd[5],num;
    for(i=0;i<10;i++)
    {
    cout<<"enter the numbers:";
    cin>>num;
    }
    for (i=0;i<10;i++)
    {
        if (i%2==0)
        {
            even[evencnt]=i;
            evencnt++;
        }
        else
        {
            odd[oddcnt]=i;
            oddcnt++;
        }
        
    }
    
    for(i=0;i<10;i++)
    {
        cout<<"the even number are:"<<even[i]<<endl;
    }
        for (i=0;i<10;i++)
        {
            cout<<"the odd numbers are:"<<odd[i]<<endl;
        }
        return 0;
}
