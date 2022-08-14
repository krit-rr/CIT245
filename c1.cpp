// Name: Krit Ravichander
// Class: CIT245


#pragma warning(disable: 4996)
#include<string>
#include<stdlib.h>
#include<time.h>
#include<cmath>
#include<iostream>
using namespace std;


int main() {
    double guess, input, r;
    
    cout << "Enter a number and I will apply the Babylonian square root algorithm: " << endl;
    cin >> input;
    
    double sq = sqrt(input);
    guess = input/2;

    while (abs (guess - sq) >= .001) {
        r = input/guess;
        guess = (guess+r)/2;
        cout << "guessing " << guess << endl;
    }
  
  cout << "The Babylons algorithm gives " << guess << endl;
  cout << "Checking " << guess << " * " << guess << " = " << guess * guess << endl;
  cout << "Press any key to continue... ";

  system("pause");
  return 0;

}