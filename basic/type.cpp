//
//  search.cpp
//
//  Created by Nguyen Nhu Tuan on 9/12/17.
//  Copyright © 2017 Nguyen Nhu Tuan. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    // declaring variables:
    int a, b;
    int result;

    // process:
    a = 5;
    b = 2;
    a = a + 1;
    result = a - b;

    // print out the result:
    cout << result << endl;

    int e=5;               // initial value: 5
    int f(3);              // initial value: 3
    int g{2};              // initial value: 2
  
    e = e + f;
    result = e - g;
    cout << result << endl;

    int x=5,b1=10;  //declaring 2 variable of integer type    
    float f1=30.8;    
    char c='A';   

    // terminate the program:
    return 0;
}