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

int randomNumber() {
  size_t x = rand () % 10 + 1;
  return x;
}

int main () {
    srand (time (0));
    int answer;
    
    // Array to store the random values
    int a[20];
    std::fill(a, a+20, 0);

  do {
      cout << endl;
      cout << "This program generates random numbers and tabulates the results." <<endl;
      
      cout << endl;
      
      for (int i=0; i<20; i++) {
          int num = rand() % 10 + 1;
          a[i]=num;
      }
      
      cout << "Original List Sorted";
      cout << endl;

      for (int i=0; i<20; i++) {
          sort(a,a+20);
          cout<< "a[" << i << "]: " << a[i] <<" ";
          cout<<endl;
      }
      
      //Print count of each number
      cout << endl;
      cout << "N Count" <<endl;
      for (int i=1; i<11; i++) {
          cout << i << ": " << count(a, a + 20, i) <<endl;
      }
   
      cout << endl;
      cout << "Try again? (1 = Yes; 0 = No) " << endl;
      cin >> answer;
      
      std::fill(a, a+20, 0);
    }
  
  while (answer == 1);

  system ("pause");
  return 0;
}
