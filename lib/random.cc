#include "hgj_random.h"
#include <limits>
#include <iostream>
using namespace std;
int hgj_random(std::vector<int>& array,
	       int range_start=numeric_limits<int>::min(),
	       int range_end=numeric_limits<int>::max()) {
  random_device rd;
  mt19937 mt(rd());
  std::uniform_int_distribution<int> uniform_dist (range_start, range_end);
  for(auto& elem:array) {
    int tmp = uniform_dist(mt);
    elem = tmp;
  }
  return array.size();
}  
