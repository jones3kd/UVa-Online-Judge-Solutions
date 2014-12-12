/*
 * Brick Game (UVa 11875)
 *
 * Author: Kelsey Jones
 *   Date: 11/14/2014
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int cases;
    int teamSize = -1;
    
    cin >> cases;
    string line;
    
    int count = 0;
    while(cin >> teamSize, cases--)
    {
		int med = 0;
		int med2 = 0;
		int team[teamSize/2 + 2];
		for(int num = 0; num < teamSize/2 + 2; num++)
		{
			cin >> team[num];
			cerr << team[num] << endl;
		}
		
		if(teamSize % 2 == 0)
		{
			med = team[teamSize/2 - 1];
			med2 = team[teamSize/2];
			med = (med + med2)/2;
		}
		else
		{
			med = team[teamSize/2];
		}
		getline(cin,line);
		count++;
		printf("Case %d: %d",count, med);
		
		if(cases >= 0)
		{
			cout << endl;
		}
	}
}
