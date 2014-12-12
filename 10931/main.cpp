/*
 * Parity (UVa 10931)
 *
 * Author: Kelsey Jones
 *   Date: 11/14/2014
 *
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int curNum = -1;
    while(cin >> curNum, curNum != 0)
    {
    	int count = 0;
    	string binNum = "";
    	string revBit = "";
    	int curInt = curNum;
    	
    	while (curInt > 0)
    	{
    		if(curInt % 2 == 0)
    			binNum += "0";
    		else
    		{
    			binNum += "1";
    			count++;
    		}
    		curInt /= 2;
    	}
    	
    	for(int num = binNum.length() - 1; num >= 0; num--)
    		revBit += binNum[num];
    	
    	printf("The parity of %s is %d (mod 2).\n", revBit.c_str() ,count);
	}
}
