//
//  main.cpp
//  alphabetconsonant
//
//  Created by aditya on 12/12/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the character to check if it is a vowel or consonant:";
    cin>>ch;
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
         case'u':
            cout<<"it is a vowel"<<endl;
            break;
        default:
            cout<<"it is a consonant"<<endl;
    }
    return 0;
}
