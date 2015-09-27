// CopyRight 2015 ZhipengWang for OPMD

#include <string>
#include <utility>
#include <sstream>
#include <vector>
#include "./fileData.h"

fileData::fileData(const string& fileName, int bufSize = 300) {
  fp.open(fileName);
  buffer.reserve(bufSize);
}

void fileData::next() {
  getline(fp, buffer);
}

bool fileData::hasNext() {
  return fp.eof();
}

bool fileData::parse(pair<int, vector<double>>* data) {
  std::stringstream ss(buffer);
  string item;
  getline(ss, item, '|');
  data->first = atoi(item.c_str());
  int i = 0;
  while (i < data->second.size() && getline(ss, item, ',')) {
    data->second[i] = atof(item.c_str());
    ++i;
  }
}

void fileData::close() {
  fp.close();
}
