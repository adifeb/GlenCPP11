//
//  main.cpp
//  total,result and average
//
//  Created by aditya on 12/17/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int e1,e2,e3,e4,e5;
    cout<<"print the marks in all the 5 subjects:";
    cin>>e1>>e2>>e3>>e4>>e5;
    int total=e1+e2+e3+e4+e5;
    cout<<"total marks of the student is:"<<total<<endl;
    int avg=(e1+e2+e3+e4+e5)/5;
    cout<<"average of all the 5 subjects are:"<<avg<<endl;
    if(avg>80)
        cout<<"you have passed 1st class"<<endl;
    else if(avg>70)
        cout<<"you have done well"<<endl;
    else if(avg>60)
        cout<<"you are progressing"<<endl;
    else  if(avg>50)
        cout<<"have to work hard"<<endl;
    else
        cout<<"you have failed"<<endl;
}
