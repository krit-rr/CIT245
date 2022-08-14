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
#include <iomanip>
using namespace std;

// Generate a random number between 1-6
int
dice ()
{
  int x = rand () % 6 + 1;
  return x;
}

// Simulate rolling 2 dice
int
rollTwoDice ()
{
  int roll1 = dice ();
  int roll2 = dice ();
  int sum = roll1 + roll2;
  return sum;
}

int
main ()
{
  size_t numOfRolls;
  int answer;
  // Initialize rand
  srand (time (0));

  // Array to store the 11 possible values: 2, 3...11, 12
  array < size_t, 11 > results =
  {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  do
    {
      cout << endl;
      cout << "This program rolls two dice and tabulates the results." <<endl;
      cout << "Please enter the number of rolls you want: ";
      cin >> numOfRolls;

      {
	// To go through the trials and add the sums to the array
	for (size_t trials = 0; trials < numOfRolls; trials++)
	  {
	    size_t sumDice = rollTwoDice ();
	    results[sumDice - 2]++;
	  }
	
	cout << endl;
	cout
	  << left << setw (5) << "Sum"
	  << left << setw (10) << "# Rolled"
	  << left << setw (15) << "Odds"
	  << left << setw (10) << "% Error" << endl;

	double nums, odds;
	
	for (size_t nums = 0; nums <= 10; ++nums)
	  {
	    //Sum
	    cout << left << setw (5) << nums + 2;
	    
	    // # Rolled
	    cout << left << setw (10) << results[nums];
	    { if (nums == 0 || nums == 10) { odds = 1.0 / 36.0 * numOfRolls; } 
	    else if (nums == 1 || nums == 9) { odds = 2.0 / 36.0 * numOfRolls; }
	    else if (nums == 2 || nums == 8) { odds = 3.0 / 36.0 * numOfRolls; }
	    else if (nums == 3 || nums == 7) { odds = 4.0 / 36.0 * numOfRolls; }
	    else if (nums == 4 || nums == 6) { odds = 5.0 / 36.0 * numOfRolls; }
	    else if (nums == 5) { odds = 6.0 / 36.0 * numOfRolls; } }
	    
	    //Odds
	    cout << left << setw (15) << odds;
	    
	    //% Error
	    cout<< left << setw (10) << abs (results[nums] - odds) / odds * 100;
	    cout << endl;
	    
	  }

	cout << endl;
	cout << "Try again? (1 = Yes; 0 = No) " << endl;
	cin >> answer;

	std::fill (results.begin (), results.end (), 0);
      }
    }
  while (answer == 1);

  system ("pause");
  return 0;
}