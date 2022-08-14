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
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    //Euclidean algorithm
    if (b == 0)
      return a;
      return gcd(b, a % b);
   }

void reduce(int n, int d) {
    int factor;
    factor = gcd(n,d);
    n = n/factor;
    d = d/factor;
    
    cout << "The gcd is: " << factor <<endl;
    cout << "Your fraction reduced is: " << n << "/" << d <<endl;
}

int main() {
    int numerator, denominator;
    int tryAgain;
    
    do
    {
        cout << "This program takes a numerator and denominator and reduces to lowest terms." << endl;

        cout << "Enter the numerator: ";
        cin >> numerator;
        cout << "Enter the denominator: ";
        cin >> denominator;
        cout <<endl;

        gcd(numerator, denominator);
        reduce(numerator, denominator);


        cout << endl;
        cout << "Try again? (1 = Yes; 0 = No) " << endl;
        cin >> tryAgain;

    } while (tryAgain == 1);

    system("pause");
    return 0;
}
