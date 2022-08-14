#pragma warning(disable: 4996)
#include<string>
#include<stdlib.h>
#include<time.h>
#include<cmath>
#include<iostream>
using namespace std;
#ifndef GUN_H
#define GUN_H

class Gun {
    protected:
        string manufacturer;
        string caliber;
    public:
        void setManufacturer(string m) {manufacturer = m;}
        void setCaliber(string c) {caliber = c;}
        virtual void print() = 0;
};
#endif