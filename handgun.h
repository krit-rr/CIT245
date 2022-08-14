#pragma warning(disable: 4996)
#pragma once
#include<string>
#include<stdlib.h>
#include<time.h>
#include<cmath>
#include<iostream>
#include "gun.h"
using namespace std;
#ifndef HANDGUN_H
#define HANDGUN_H

class Handgun: public Gun {
    protected:
        string magazine;
        string fireType;
        string laser;
        string grips;
        string sights;
    public:
        void setMagazine(string m) {magazine = m;}
        void setFireType(string f) {fireType = f;}
        void setLaser(string l) {laser = l;}
        void setGrips(string g) {grips = g;}
        void setSights(string s) {sights = s;}
};
#endif