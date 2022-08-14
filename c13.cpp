// Name: Krit Ravichander
// Class: CIT245

#pragma warning(disable: 4996)
#include<string>
#include<stdlib.h>
#include<time.h>
#include<cmath>
#include<iostream>
using namespace std;

void towerOfHanoi(int n, char s, char T, char t)
{
    if (n == 1) {
        cout << "Move disk " << n << " from rod " << s << " to rod " << T << endl;
        return; }

    towerOfHanoi(n - 1, s, T, t);
    cout << "Move disk " << n << " from rod " << s << " to rod " << T << endl;
    towerOfHanoi(n - 1, t, T, s);
}

int main() {
    double diskNumber;
    int again;

    do {
        cout << "Enter number of disks: " << endl;
        cin >> diskNumber;
        cout <<endl;

        cout << "Source = 1; Target = 2; Temporary = 3" << endl;
        towerOfHanoi(diskNumber, '1', '2', '3');

        cout << "2 to the " << diskNumber << " power = " << pow(2.0,diskNumber) <<endl;
        cout << "Number of moves = " << pow(2.0,diskNumber) - 1 <<endl;
        cout <<endl;

        cout << "Continue? (1 = Yes; 0 = No) " << endl;
        cin >> again;
        cout <<endl;

    } while (again == 1);

    system("pause");
    return 0;
}
