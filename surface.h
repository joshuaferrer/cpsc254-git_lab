#include <iostream>
#include <cmath>

using namespace std;

void surfaceArea() {
  int radius;
  float area;
  cout <<"Enter radius of sphere: ";
  cin >> radius;
  area = 4.0 * 3.14 * pow(radius, 2);
  cout <<"Surface area is: " << area  << endl;
  return 0;
}

