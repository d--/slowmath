#include "slowmath.h"
#include <iostream>
#include <cmath>

double slowmath::sin(double input) {
  return ::sin(input); // cheating for now, until mclaurin time
}

double slowmath::degrees(double radians) {
  return (180.f * radians / PI);
}

double slowmath::radians(double degrees) {
  return (PI * degrees / 180.f);
}

