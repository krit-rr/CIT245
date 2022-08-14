#include <iostream>
#include <utility>
using namespace std;
#include "pistol.h"

Pistol::Pistol(string manufacturer, string caliber, string magazine,
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

void Pistol::print()
{
    cout << "Pistol: " << manufacturer << ", " << caliber << ", " << grips << ", " << sights << ", " << laser << ", " << fireType << endl;
}
