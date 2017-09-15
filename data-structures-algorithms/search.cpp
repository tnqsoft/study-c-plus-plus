//
//  search.cpp
//
//  Created by Nguyen Nhu Tuan on 9/12/17.
//  Copyright © 2017 Nguyen Nhu Tuan. All rights reserved.
//

#include <iostream>
#include "study/study.h"

using namespace std;

int main()
{
    int size = 10;
    int list[10] = {1, 1, 2, 3, 4, 5, 6, 7, 7, 10};
    int x = 10;
    int pos;
    study::Search search;
    study::Timer *timer = new study::Timer();

    cout << "Search Linear" << endl;
    timer->startTimer();
    pos = search.linearSearch(list, size, x);
    if (pos != -1)
    {
        cout << "Found x at position " << pos << endl;
    }
    else
    {
        cout << "Not Found x" << endl;
    }
    timer->stopTimer();

    //-------------------------------------------------------
    cout << "-----------------------------------------------" << endl;
    //-------------------------------------------------------

    cout << "Search Binary" << endl;
    timer->startTimer();
    pos = search.binarySearch(list, size, x);
    if (pos != -1)
    {
        cout << "Found x at position " << pos << endl;
    }
    else
    {
        cout << "Not Found x" << endl;
    }
    timer->stopTimer();

    // terminate the program:
    return 0;
}