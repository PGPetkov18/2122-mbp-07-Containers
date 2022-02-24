// 2021-mbp-07-Containers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<set>
#include<iterator>
#include<cstring>
using namespace std;

set<string>::iterator it;
bool contains(set<string>setToCheck,string valueToCheck)
{
    for (it = setToCheck.begin(); it != setToCheck.end(); ++it) {
        if (*it == valueToCheck) {
            return true;
        }
    }
    return false;
}

void unionWith(set<string> setA, set<string>setB) {
    set<string>setTemp;

    for (it = setA.begin(); it != setA.end(); ++it) {
        setTemp.insert(*it);
    }
    for (it = setB.begin(); it != setB.end(); ++it) {
        if (!contains(setTemp, *it))
        {
            setTemp.insert(*it);
      }

    }
    for (it = setTemp.begin(); it != setTemp.end(); ++it) {
        cout << *it << "/";
    }
}




int main()
{
    set<string> setA = { "ivan","kaloan","kiril","mario" };
    set<string> setB = { "martin","mario","petar","kiril" };
    unionWith(setA, setB);
}

