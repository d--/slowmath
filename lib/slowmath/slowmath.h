#ifndef _SLOWMATH_H_
#define _SLOWMATH_H_

#include <cmath>

namespace slowmath {
    const double PI = atan(1.f) * 4.f;
    double sin(double input);
    double degrees(double radians);
    double radians(double degrees);
}

#endif // _SLOWMATH_H_
