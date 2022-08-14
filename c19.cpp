// Name: Krit Ravichander
// Class: CIT245

#pragma warning(disable : 4996)
#include <string>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <array>
#include <iterator>
#include <algorithm>
#include <map>
#include <iostream>
using namespace std;

int main() {
    cout << endl;
    map<string, int> people;
    people.insert(pair<string, int>("Lisa Brown",123456789));
    people.insert(pair<string, int>("Paul Brown",123456790));
    people.insert(pair<string, int>("Mary Smith",123456791));
    people.insert(pair<string, int>("John Smith",123456792));
    
    map<string, int>::iterator itr;
    cout << "Iterating through container and retriving all the people: " <<endl;
    for (itr = people.begin(); itr != people.end(); ++itr) {
        cout << "Person " << itr->second << ": " << itr->first << '\n';
    }
    cout << endl;

    map<string, int>::iterator finder;
    cout << "Looking for John Brown: " <<endl;
    finder = people.find("John Brown");
    if (finder == people.end()) {cout << "Person not found" ;}
    else {cout << "Person found: " << finder->first << "(" << finder->second << ")" <<endl;}
    cout << endl;
    cout << endl;

    cout << "Looking for Paul Brown: " <<endl;
    finder = people.find("Paul Brown");
    if (finder == people.end()) {cout << "Person not found" ;}
    else {cout << "Person found: " << finder->first << " (" << finder->second << ")" <<endl;}
    cout << endl;

    system("pause");
    return 0;
}