/*
 * What is the Median? (UVa 10107)
 *
 * Author: Kelsey Jones
 *   Date: 9/19/2014
 */

#include <iostream>
#include <cstdio>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int num;
    vector<int> vec;
    int mid = 0;
    int midNum1, midNum2;
    int length = 0;
    
    while(cin >> num)
    {
        vec.push_back(num);
        length++;
        sort(vec.begin(),vec.end());

        if(length == 1)
            mid = vec.at(0);
        else if(length % 2 == 0)
        {
            midNum1 = vec.at(floor(length / 2));
            midNum2 = vec.at((floor(length / 2)) - 1);

            mid = (midNum1 + midNum2)/2;
        }
        else if(length % 2 != 0)
        {
            midNum1 = length / 2;
            
            mid = vec.at(midNum1);
        }
        cout << mid << endl;
    } 
}
