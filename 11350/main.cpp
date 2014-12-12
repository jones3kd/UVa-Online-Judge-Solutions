/*
 * K-Stern-Brocot Tree (UVa 11350)
 *
 * Author: Kelsey
 *   Date: 9/14/2014
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int cases;
    long curNum[2];
    long right[2]; // storing the numer and demon for right and left
    long left[2]; // in an array, 0 is num, 1 is denom
    string directions;
    string line;
    char curDirect;

    cin >> cases;
    getline(cin, line);
    
    while(cases--)
    {
		getline(cin, directions);
		right[0] = 1;
		right[1] = 0;
		left[0] = 0;
		left[1] = 1;
		curNum[0] = 1;
		curNum[1] = 1;
		
		for(int num = 0; num < directions.length(); num++)
		{
			curDirect = directions[num];
			
			if(curDirect == 'R')
			{
				left[0] = curNum[0];
				left[1] = curNum[1];
			}
			else
			{
				right[0] = curNum[0];
				right[1] = curNum[1];
			}
			curNum[0] = left[0] + right[0];
			curNum[1] = left[1] + right[1];
		}
		cout << curNum[0] << "/" << curNum[1] << endl;
	}
}
