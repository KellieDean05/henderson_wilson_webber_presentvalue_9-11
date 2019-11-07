/*Gaddis_Challenges_Wilson,Webber,Henderson Dr.T, 9-11-19
This is a program to determine how much money to deposit into the our bank accounts*/
#include<cmath>
#include<iomanip>
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;
void presentValue(double, double, double);

double f = 0.0; 
double a = 0.0; 
double y = 0.0;

int main()
{
  cout << fixed << setprecision (3);

 





  return 0;
}

void presentValue( double f, double a, double y)
// a == annual interest, y == years, f == future
{
 
double p = 0.0; 

cout << "\nPlease enter the future value: $ " << endl;
f = validateDouble (f);
cout << "\nPlease enter the number of years: " << endl;
y = validateDouble (y);
cout << "\nPlease enter your annual interest rate: "<< endl;
a = validateDouble(a);
p = (f / pow(1 + a * y));

return presentValue();
}

