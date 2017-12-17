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
        if(avg>80)
            cout<<"you have passed with Distinction"<<endl;
        else if(avg>70)
            cout<<"you have passed with first class"<<endl;
    else if(avg>60)
        cout<<"yyou have passed second class"<<endl;
    else  if(avg>50)
        cout<<"you have passed third class"<<endl;
    else
        cout<<"you have failed"<<endl;
    cout<<"the average is:"<<avg;
}
