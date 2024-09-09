// C++ Basics Programming Project
//Project 2. Energy Drink Consumption
#include <iostream>
using namespace std;

//The function main where everything happens
int main ()
{
  //Establishes the variables for the program
    int customers = 16500;
    float percentEnergy = 0.15;
    float percentCitrus = 0.58;
    float energyDrink = customers * percentEnergy;
    int citrusDrink = energyDrink * percentCitrus;
  //This prints the results of the equation
        cout << "The number of customers in the survey that purchase one or more energy drinks: " << energyDrink <<endl;
  //Note I debated on trying to create a function to round this number up but found that it would not be all that helpful as it wouldnt impact the data in a meaningful way
        cout << "The number of customers out of those who that purchase one or more energy drinks that prefer citrus-flavored energy drinks: " << citrusDrink <<endl;
}

// By Hunter Wright