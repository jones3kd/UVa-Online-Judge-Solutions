/*
 * PROBLEM C: Mother Bear (UVa 10945)
 *
 * Author: Kelsey Jones
 *   Date: 9/18/2014
 */

#include <iostream>
#include <cstdio>
#include <ctype.h>

using namespace std;

int main()
{
    string line;
    while(getline(cin, line), line != "DONE")
    {
        string newLine = "";
             
        for(int num = 0; num < line.length(); num++)
            if(!ispunct(line[num])&&(line[num] != ',') && line[num] != ' ')
            {
                newLine += tolower(line[num]);
            }
       
        char firstLet = newLine[0];
        char lastLet = newLine[newLine.length()-1];
        
        while(newLine.length() > 1)
        {
            if(firstLet == lastLet)
            {
                newLine.erase(0,1);
                if(newLine.length() > 1)
                    newLine.erase(newLine.length()-1,newLine.length());
                
                firstLet = newLine[0];
                lastLet = newLine[newLine.length()-1];
            }
            else
                break;
        }        
        if(newLine.length() <= 1)
            cout << "You won't be eaten!" << endl;
        else
            cout << "Uh oh.." << endl;       
    }
}

