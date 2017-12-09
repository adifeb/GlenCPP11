//
//  main.cpp
//  square and cube of number
//
//  Created by aditya on 12/9/17.
//  Copyright © 2017 aditya. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int num,square,cube;
    cout<<"enter the side: ";
    cin>>num;
    square=num*num;
    cube=num*num*num;
    cout<<"the square of the number is: "<<square<<endl;
    cout<<"the cube of the number is: "<<cube<<endl;
    return 0;
}
