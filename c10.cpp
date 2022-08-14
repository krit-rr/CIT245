// Name: Krit Ravichander
// Class: CIT245

#pragma warning(disable: 4996)
#include<string>
#include<stdlib.h>
#include<time.h>
#include<cmath>
#include<iostream>
using namespace std;

class WrapArrayDeep {
  private:
    char *pch;
  public:
    void load() {
    *pch = 97;
    *(pch+1) = 98;
    *(pch+2) = 99;
    *(pch+3) = 100;
    *(pch+4) = 101;
    *(pch+5) = 102; };
    void change() {
    *pch = 122;
    *(pch+1) = 123;
    *(pch+2) = 124;
    *(pch+3) = 125;
    *(pch+4) = 126;
    *(pch+5) = 127; }
    void display() {
    for(int i = 0; i < 5; ++i) {
      cout << pch[i] << " "; }
      cout << endl; };
    WrapArrayDeep() { pch = new char[5]; }
    WrapArrayDeep(const WrapArrayDeep& wad) {
      pch = new char[5];
      for (int i = 0; i < 5; i++) { pch[i] = wad.pch[i];}
      }
    ~WrapArrayDeep(){
    delete [] pch;
    cout << "Calling destructor for WrapArrayDeep" << endl;
  }
};

class WrapArrayShallow {
  private:
    char *pch;
  public:
    void load() {
      pch[0] = 'a';
      pch[1] = 'b';
      pch[2] = 'c';
      pch[3] = 'd';
      pch[4] = 'e';
    }
    void change() {
      *pch = 122;
      *(pch+1) = 123;
      *(pch+2) = 124;
      *(pch+3) = 125;
      *(pch+4) = 126;
      *(pch+5) = 127;
    }
    void display() {
      cout << *(pch) << " ";
      for (int i = 1; i < 6; ++i) {
        cout << *(pch + 1) << " ";
        pch++; }
        cout << endl;
    }
    WrapArrayShallow() { pch = new char[5];}
    WrapArrayShallow(const WrapArrayShallow& was) {
      pch = was.pch;}
    ~WrapArrayShallow(){
      delete [] pch;
      cout << "Calling destructor for WrapArrayShallow" << endl;
  }
};

int main() {
//Part 1
  cout << "This program section uses 3 variables: i (= 7), pi (a pointer to i), and ppi (a pointer to pi)" <<endl;
  cout << endl;

  int i = 7;
  int* pi  = &i;
  cout << "pi = " << pi <<endl;
  cout << "Address of i: " << &i <<endl;
  cout << "Address of pi: " << &pi <<endl;
  cout << "Dereference of pi: " << *pi <<endl;
  cout << endl;

  int** ppi = &pi;
  cout << "ppi = " << ppi <<endl;
  cout << "Address of ppi: " << &pi <<endl;
  cout << "Dereference of ppi: " << *ppi <<endl;
  cout << "Double dereference of pi: " << **ppi <<endl;
  cout << endl;
  
// Part 2
  cout << "This section instantiates a wrapper class for a dynamic array of 5 elements" << endl;

  WrapArrayDeep wad1, *wad2;
	WrapArrayShallow was1, *was2;

  wad1.load();
  was1.load();
  wad2 = new WrapArrayDeep(wad1);
	was2 = new WrapArrayShallow(was1);

  cout << "WrapArrayDeep 1" << endl;
	wad1.display();
	cout << "WrapArrayDeep 2 created using a copy constructor of 1" << endl;
	wad2->display();
  cout << endl << "After changing the contents of WrapArrayDeep 1, 1 and 3 = " << endl;
	wad1.change();
	wad1.display();
	wad2->display();

	cout << endl << "Now doing the same thing with WrapArrayShallow" << endl << endl;
	cout << "WrapArrayShallow 1" << endl;
	was1.display();
	cout << "WrapArrayShallow 2 created using a copy constructor of 1" << endl;
	was2->display();

	cout << endl << "After changing the contents of WrapArrayShallow 1, 1 and 3 = " << endl;
	was1.change();
	was1.display();
	was2->display();

	delete  wad2;
	delete  was2;	

  system("pause");
	return 0;
}