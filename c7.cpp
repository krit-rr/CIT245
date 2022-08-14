// Name: Krit Ravichander
// Class: CIT245

#pragma warning(disable: 4996)
#include<string>
#include<stdlib.h>
#include<time.h>
#include<cmath>
#include<iostream>
using namespace std;

class Counter
{
    private:
        int count;
        int changeBy;
    public:
        void setCount (int c) {
            count = c; }
        int getCount () {
            return count; }
        void setchangeBy (int cB) {
            changeBy = cB; }
        int getChangeBy () {
            return changeBy; }
        int inc () {
            count = count + 1;
            return count; }
        int dec () {
            count = count - 1;
            return count;
        }
        
        static int i;
        Counter operator++ (int);

        Counter () {
            count = 0;
            changeBy = 85;
        }
};

Counter Counter::operator++(int)
{
    i++;
    return *this;
}

//operator overload
int Counter::i = 0;

int main ()
{
  Counter counter1;
  Counter counter2;

  counter2.setCount (200);
  counter2.setchangeBy (242);
  
  Counter increments;

  cout << "Current state of C1 (created with the default constructor)" <<
    endl;
  cout << "Current Count: " << counter1.getCount () << endl;
  cout << "Total Increments and Decrements: " << increments.i <<endl;
  cout << endl;

  cout << "Current state of C2 (created as C2(200))" << endl;
  cout << "Current Count: " << counter2.getCount () << endl;
  cout << "Total Increments and Decrements: " << increments.i <<endl;
  cout << endl;

  for (int i = 0; i < counter1.getChangeBy (); i++)
    {
      counter1.inc ();
      increments++;
    }

  cout << "Current state of C1 after 85 inc()" << endl;
  cout << "Current Count: " << counter1.getCount () << endl;
  cout << "Total Increments and Decrements: " << increments.i <<endl;
  cout << endl;

  for (int i = 0; i < counter2.getChangeBy (); i++)
    {
      counter2.dec ();
      increments++;
    }

  cout << "Current state of C2 after 242 dec()" << endl;
  cout << "Current Count: " << counter2.getCount () << endl;
  cout << "Total Increments and Decrements: " << increments.i <<endl;

  cout << endl;
  cout << "Press any key to continue... ";

  system ("pause");
  return 0;
}

