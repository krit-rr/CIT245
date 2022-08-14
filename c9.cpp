// Name: Krit Ravichander
// Class: CIT245

#pragma warning(disable : 4996)
#include <string>
#include <stdlib.h>
#include <stack>
#include <time.h>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int run;

  do {
    cout << "This program reverses a string using the STL stack" << endl;
    char *s = (char *)malloc(80);
    stack<char> reverse;

    cout << "Enter your string of less than 80 characters followed by an ENTER" << endl;
    cin.getline(s,80,'\n');
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
      reverse.push(s[i]); }
    for (int i = 0; i < len; i++) {
      cout << reverse.top();
      reverse.pop();
    }
    
    cout << "\nEnter another? 1 = continue. Anything else to stop" << endl;
    cin >> run;
    getchar();
    cout << endl;
  } while (run == 1);
  
  system("pause");
  return 0;
}