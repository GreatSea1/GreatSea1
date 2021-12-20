/********************************
* Author: Tagirov A.I.          *
* Date:   09.30.2021            *
* Name:   Cycles with branching *
********************************/
#include <iostream>
#include <cmath>

int main() {
  float ksi1, ksi2, re, denom;
  int d    = 35;
  float v  = 0.026;
  float w  = 10;
  int cond = 100000;
    
  while (w <= 20) {
    re = (w * d) / v;
    if (re < cond) {
      ksi1 = 0.316 / pow(re, 0.25);
      } else {
        ksi1 = (0.0032 + (0.221 / pow(re, 0.237)));
      }
    denom = 1.8 * log10(re) - 1.5;
    ksi2  = 1 / pow(denom, 2);
    std::cout << "Ksi1 = " << ksi1 << " Ksi2 = " << ksi2 << " Re = " << re << " w = " << w << std::endl;
    w += 10;
    }
    
  for (w = 50; w <= 250; w += 50) {
    if (w == 150) {
      continue;
    }
    if (w == 250) {
      w = 500;
    }
    re = (w * d) / v;
    if (re < cond) {
      ksi1 = 0.316 / pow(re, 0.25);
    } else {
      ksi1 = (0.0032 + (0.221 / pow(re, 0.237)));
    }
    denom = 1.8 * log10(re) - 1.5;
    ksi2  = 1 / pow(denom, 2);
    std::cout << "Ksi1 = " << ksi1 << " Ksi2 = " << ksi2 << " Re = " << re << " w = " << w << std::endl;
  }
    return 0;
}

