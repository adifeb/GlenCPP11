//
//  main.cpp
//  q4
//
//  Created by aditya on 2/13/18.
//  Copyright © 2018 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the character to check:";
    cin>>ch;
    switch(ch)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
            cout<<ch<<"is a vowel";
            break;
    default:
            cout<<ch<<"is a consonant";
    }
}
