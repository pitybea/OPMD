// CopyRight 2015 ZhipengWang for OPMD

#ifndef OPTIMIZER_FTRLOPTIMIZER_H_
#define OPTIMIZER_FTRLOPTIMIZER_H_
#include "../Parameter/matrixParameter.h"
class ftrlOptimizer {
 public:
  ftrlOptimizer(matrixParameter* p,
                double a = 0.1f,
                double b = 1.0f,
                double l1 = 1.0f,
                double l2 = 1.0f);
  void process(int i, int j, double g);
 private:
  matrixParameter* parameter;
  double alpha;
  double beta;
  double lambda1;
  double lambda2;
  dataType q;
  dataType z;
  markType inUse;
};
#endif  // OPTIMIZER_FTRLOPTIMIZER_H_
