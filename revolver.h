#pragma warning(disable: 4996)
#pragma once
#include<string>
#include<stdlib.h>
#include<time.h>
#include<cmath>
#include<iostream>
#include "handgun.h"
using namespace std;
#ifndef REVOLVER_H
#define REVOLVER_H

class Revolver: public Handgun {
    public:
        Revolver(string manufacturer, string caliber, string magazine,
            string fireType, string grips, string laser, string sights);
        void print();
};
#endif