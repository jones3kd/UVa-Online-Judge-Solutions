/*
 * Problem C: Hardwood Species (UVa 10226)
 *
 * Author: Kelsey Jones
 *   Date: 9/26/2014
 */

#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <map>

using namespace std;

int main()
{
    int cases;
    string line;
    string curTree;
    
    cin >> cases;
    getline(cin,line);
    getline(cin, line);
    
    while(cases--)
    {
    	int totalTrees = 0;

		map<string, int> trees;
		map < string , int >:: const_iterator it;
		
		curTree = " ";

		while(getline(cin, curTree), curTree != "") 
		{		
			trees[curTree]++;
			totalTrees++; 
		}
		
		for(it = trees.begin(); it != trees.end(); it++)
		{
			const char* name = it->first.c_str();
			double percent = 100.0 * it->second / totalTrees;

			printf("%s %.4f\n", name, percent);
		} 
		if(cases > 0)
			printf("\n");
	}
}
