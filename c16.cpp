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
    	
template <class T>
int binary_search(T arr[], int s, int e, T x) {
    if (s <= e) {
        int mid = (s + e) / 2;
        if (arr[mid] == x) {return mid;}
        else if (arr[mid] < x) {return binary_search(arr, mid + 1, e, x);}
        else {return binary_search(arr, s, e - 1, x);}
    } return -100; }

int main() {
    // Integer Array
    int iarr[] = {0,1,2,3,5,6,13,21,32,55};
    int in = sizeof(iarr)/sizeof(int);
    cout <<endl;

    cout << "Integer test array contains: " << endl;
    for (int i = 0; i < in; ++i) {cout << iarr[i] << " ";}
    cout <<endl;
    
    int x1 = 12;  int index1; 
    cout << "Searching for 12..";
    index1 = binary_search(iarr, 0, in, x1);
    if (index1==-100) {cout << x1 << " is not in the array." <<endl;}
    else {cout << x1 << " is at index " << index1 <<endl;}

    int x2 = 13; int index2;
    cout << "Searching for 13..";
    index2 = binary_search(iarr, 0, in, x2);
    if (index2==-100) {cout << x2 << " is not in the array." <<endl;}
    else {cout << x2 << " is at index " << index2 <<endl;}

    std::fill_n(iarr, in, 0);
    cout <<endl;


    // Character Array
    char carr[] = {'e','h','k','t'};
    int ch = sizeof(carr)/1;

    cout << "Character test array contains: " << endl;
    for (int i = 0; i < ch; ++i) {cout << carr[i] << " ";}
    cout <<endl;

    char y1 = 'e'; int index3;
    cout << "Searching for e...";
    index3 = binary_search(carr, 0, ch, y1);
    if (index3==-100) {cout << y1 << " is not in the array." <<endl;}
    else {cout << y1 << " is at index " << index3 <<endl;}

    char y2 = 'f'; int index4;
    cout << "Searching for f...";
    index4 = binary_search(carr, 0, ch, y2);
    if (index4==-100) {cout << y2 << " is not in the array." <<endl;}
    else {cout << y2 << " is at index " << index4 <<endl;}

    std::fill_n(carr, ch, 0);

    system("pause");
    return 0;
}

