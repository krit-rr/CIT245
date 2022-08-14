// Name: Krit Ravichander
// Class: CIT245

#pragma warning(disable: 4996)
#include<string>
#include<stdlib.h>
#include<time.h>
#include<cmath>
#include<iostream>
using namespace std;

class Player {
  private:
    string name;
    string password;
    int expPoints;
    double xCoord;
    double yCoord;

  public:
    void setName(string n) {name = n;}
    string getName() {return name;}

    void setPassword(string p) {password = p;}
    string getPassword() {return password;}

    void setexpPoints(int eP) {expPoints = eP;}
    int getexpPoints() {return expPoints;}

    void setLocationX (double x) {xCoord = x;}
    int getLocationX() {return xCoord;}
    void setLocationY (double y) {yCoord = y;}
    int getLocationY() {return yCoord;}
};

int main() {    
    cout << "This program generates three player objects and displays them. " << endl;
    cout << endl;
    
    //Setting Player 1
    Player player1;
    player1.setName("Nematocyst");
    player1.setPassword("obfuscator");
    player1.setexpPoints(1098);
    player1.setLocationX(55689);
    player1.setLocationY(76453);
    //Displaying Player 1
    cout << "Player Info - " <<endl;
    cout << "Name: " << player1.getName() <<endl;
    cout << "Password: " << player1.getPassword() <<endl;
    cout << "Experience Points: " << player1.getexpPoints() <<endl;
    cout << "Location: (" << player1.getLocationX() << ", " << player1.getLocationY() << ")" <<endl;
    cout << endl; 

    //Setting Player 2
    Player player2;
    player2.setName("Omphaloskeps");
    player2.setPassword("obstreperous");
    player2.setexpPoints(11456);
    player2.setLocationX(12);
    player2.setLocationY(5108);
    //Displaying Player 2
    cout << "Player Info - " <<endl;
    cout << "Name: " << player2.getName() <<endl;
    cout << "Password: " << player2.getPassword() <<endl;
    cout << "Experience Points: " << player2.getexpPoints() <<endl;
    cout << "Location: (" << player2.getLocationX() << ", " << player2.getLocationY() << ")" <<endl;
    cout << endl;

    //Setting Player 3
    Player player3;
    player3.setName("Tokamakfusion");
    player3.setPassword("toroid");
    player3.setexpPoints(15678);
    player2.setLocationX(99);
    player2.setLocationY(108);
    //Displaying Player 3
    cout << "Player Info - " <<endl;
    cout << "Name: " << player3.getName() <<endl;
    cout << "Password: " << player3.getPassword() <<endl;
    cout << "Experience Points: " << player3.getexpPoints() <<endl;
    cout << "Location: (" << player3.getLocationX() << ", " << player3.getLocationY() << ")" <<endl;
    cout << endl;

    cout << "Press any key to continue... ";

  system("pause");
  return 0;
}