// CopyRight 2015 ZhipengWang for OPMD

#include <cstdlib>
#include <math.h>
#include "./ftrlOptimizer.h"

ftrlOptimizer::ftrlOptimizer(matrixParameter* p, double a, double b,
                             double l1, double l2)
    : parameter(p), alpha(a), beta(b), lambda1(l1), lambda2(l2) {
  q = p->initialCopy();
  z = p->initialCopy();
  inUse = p->markCopy();
}

void ftrlOptimizer::process(int i, int j, double g) {  // g is gradient
  double sigma = (sqrt(q[i][j] + g*g) - sqrt(q[i][j])) / alpha;
  q[i][j] = q[i][j] + g * g;
  z[i][j] = z[i][j] + g - parameter->data[i][j] * sigma;
  if (abs(z[i][j]) < lambda1) {
    parameter->data[i][j] = 0.0f;
    inUse[i][j] = false;
  } else {
    parameter->data[i][j] = -1.0f / (lambda2 + (beta + sqrt(q[i][j])) / alpha) *
        (z[i][j] - lambda1 * (z[i][j]) > 0.0f ? 1.0f : -1.0f);
    inUse[i][j] = true;
  }
}
