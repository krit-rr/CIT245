// Name: Krit Ravichander
// Class: CIT245

#pragma warning(disable: 4996)
#include<string>
#include<stdlib.h>
#include<time.h>
#include<cmath>
#include<iostream>
using namespace std;

int main () {
    double waterWeight = 62.4;
    double weight; 
    double radius;
    double volume;
    double buoyantForce; 
    int result;
    
    do {
        cout << "Enter the radius of the sphere (ft): " << endl;
        cin >> radius;
        cout << "You entered " << radius << endl;
        
        cout << "Enter the weight of the sphere (lbs): " << endl;
        cin >> weight;
        cout << "You entered " << weight << endl;
        
        
        volume = (4.0/3.0) * (3.141592) * (pow(radius,3)); 
        buoyantForce = (volume)*(waterWeight); 
    {
        if (buoyantForce >= weight) {
            cout << "Buoyant Force (in lbs): " << buoyantForce << endl;
            cout << "Egads, it floats!" << endl;
        }
        else {
            cout << "Buoyant Force (in lbs): " << buoyantForce << endl;
            cout << "It sunk..." << endl;
        }
    }
    
    cout << "Recalculate? (1 = Yes; 0 = No) " << endl;
    cin >> result; 
    
    } while (result == 1);

    system("pause");
    return 0;
}