// CopyRight 2015 ZhipengWang for OPMD

#ifndef DATA_FILEDATA_H_
#define DATA_FILEDATA_H_
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <utility>

using std::string;
using std::vector;
using std::pair;
using std::ifstream;

class fileData {
 public:
  fileData(const string& fileName, int bufSize);
  void next();
  bool hasNext();
  bool parse(pair<int, vector<double>>* data);
  void close();
 private:
  ifstream fp;
  string buffer;
};
#endif  // DATA_FILEDATA_H_
