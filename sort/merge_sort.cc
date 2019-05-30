#include "hgj_random.h"
#include "hgj_pretty_print.h"
using namespace std;
int main(int argc, char** argv) {
  vector<int> input(100,0);
  hgj_random(input,-(input.size()), input.size());
  printContainer(input);
}
