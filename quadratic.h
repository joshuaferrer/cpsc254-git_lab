
#ifndef QUADRATIC_H
#define QUADRATIC_H

#include <iostream>
#include <cmath>
using namespace std;

void  quadratic()
{
int x[2], a, b, c;
cout << "For a polynomial Ax^2 + Bx + C, enter in the A, B, and C components.\n";
cout << "I will input these values into the quadratic equation and display the result.";
cin >> a >> b >> c;
x[0] = ( -b - sqrt( pow(b,2) - (4 * a * c) ) ) / ( 2 * a );
x[1] = ( -b + sqrt( pow(b,2) - (4 * a * c) ) ) / ( 2 * a );


cout << '(' << x[0] << ',' << x[1] << ')' << endl;
}

#endif
