// CopyRight 2015 ZhipengWang for OPMD

#ifndef PARAMETER_MATRIXPARAMETER_H_
#define PARAMETER_MATRIXPARAMETER_H_
#include <vector>
using std::vector;

using dataType = vector<vector<double>>;
using markType = vector<vector<bool>>;

class matrixParameter {
 public:
  matrixParameter(int m, int n);
  dataType initialCopy();
  vector<vector<bool>> markCopy();
  dataType data;
private:
  
  
};
#endif  // PARAMETER_MATRIXPARAMETER_H_
