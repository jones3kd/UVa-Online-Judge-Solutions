/*
 * Digit Counting (UVa 1225)
 *
 * Author: Kelsey Jones
 *   Date: 11/7/2014
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int cases;
    int N;
    cin >> cases;
    
    for (int i = 0; i < cases; i++)
    {
		cin >> N;
		int arr[10] = {0};
		
		for(int num = 1; num <= N; num++)
		{
			int cur = num;
			while (cur > 0)
			{
				int count = cur % 10;
				arr[count]++;
				cur /= 10;
			}
		}
		//print out counts of numbers
		for(int num = 0; num < 9; num++ )
		{
			cout << arr[num] << " ";
		}
		cout << arr[9] << endl;
	}
}
