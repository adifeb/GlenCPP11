//
//  main.cpp
//  factnumrec
//
//  Created by aditya on 12/24/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<"the factorial of "<<n<<"="<<factorial(n);
    return 0;
}
int factorial(int n)
{
    if(n>1)
        return n*factorial(n-1);
    else
        return 1;
}
