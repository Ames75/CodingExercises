#include <memory>
#include <iostream>

class myTest {
public:
  int m_int;
};

static myTest myObj;

static int myVar = 2;
int main(int argc, char** argv) {
  // std::shared_ptr<myTest> ptr(&(myObj));
  std::shared_ptr<int> ptr2;
  // int tmp = ptr->m_int;
  // std::cout<<"The value is "<<tmp<<std::endl;
  for(int i=0; i<2;i++) {
    ptr2.reset(&i);
  }
  return 0;
}
