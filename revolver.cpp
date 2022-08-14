#include <iostream>
using namespace std;
#include "revolver.h"

Revolver::Revolver(string manufacturer, string caliber, string magazine,
    string fireType, string grips, string laser, string sights)
{
    this->manufacturer = manufacturer;
    this->caliber = caliber;
    this->magazine = magazine;
    this->fireType = fireType;
    this->grips = grips;
    this->laser = laser;
    this->sights = sights;
}

void Revolver::print()
{
    cout << "Revolver: " << manufacturer << ", " << caliber << ", " << grips << ", " << sights << ", " << laser << ", " << fireType << endl;
}

