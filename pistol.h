#pragma warning(disable: 4996)
#pragma once
#include<string>
#include<stdlib.h>
#include<time.h>
#include<cmath>
#include<iostream>
#include "handgun.h"
using namespace std;
#ifndef PISTOL_H
#define PISTOL_H

class Pistol: public Handgun {
    public:
        Pistol(string manufacturer, string caliber, string magazine,
            string fireType, string grips, string laser, string sights);
        void print();
};
#endif