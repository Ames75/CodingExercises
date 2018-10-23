#include "hgj_random.h"
#include <limits>
using namespace std;
int hgj_random(std::vector<int>& array,
	       int range_start=numeric_limits<int>::min(),
	       int range_end=numeric_limits<int>::max()) {
  random_device rd;
  mt19937 mt(rd());
  std::uniform_int_distribution<int> uniform_dist (range_start, range_end);
  for(auto elem:array) {
    elem = uniform_dist(mt);
  }
  return array.size();
}  
