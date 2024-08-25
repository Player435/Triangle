#include <iostream>
#include "Triangle.h"
{
    void setCote(double a, double b, double c) {
      {
        coteA = a;
        coteB = b;
        coteC = c;
      }

    
    void getCote() 
      {
        std::cout << "Cote A: " << sideA << ", Cote B: " << coteB << ", Cote C: " << coteC << std::endl;
      }

    double getPerimetre() 
      {
        return coteA + coteB + coteC;
      }

    double getSurface() 
      {
        double s = getPerimetre() / 2; 
        return sqrt(s * (s - coteA) * (s - coteB) * (s - coteC));
      } 
};

