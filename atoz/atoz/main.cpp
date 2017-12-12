//
//  main.cpp
//  atoz
//
//  Created by aditya on 12/12/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char ch;
    int i;
    cout<<"the alphabets are:";
    for(ch='A';ch<='Z';ch++)
    {
        cout<<" "<<ch<<":"<<int(ch);
        
    }
    for ( i=65; i<130; i++)
        cout <<char(i);
    
    cout<<endl;
    return 0;
}
