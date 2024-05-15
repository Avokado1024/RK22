// test_facade.cpp

#include <iostream>
#include "../src/main.cpp

void test_facade_operation1() {
  Facade facade;
  std::cout << "Testing Facade Operation 1 ...n";
  facade.operation1();
  // You could add some condition checks here and print the test result
  std::cout << "Test Passed.n";
}

void test_facade_operation2() {
  Facade facade;
  std::cout << "Testing Facade Operation 2 ...n";
  facade.operation2();
  // You could add some condition checks here and print the test result
  std::cout << "Test Passed.n";
}

int main() {
  test_facade_operation1();
  test_facade_operation2();
  return 0;
}
