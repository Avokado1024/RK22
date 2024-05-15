#include <iostream>

class SubsystemA
{
public:
  void suboperation() { std::cout << "Subsystem A method" << std::endl; }
};

class SubsystemB
{
public:
  void suboperation() { std::cout << "Subsystem B method" << std::endl; }
};

class SubsystemC
{
public:
  void suboperation() { std::cout << "Subsystem C method" << std::endl; }
};

class Facade
{
public:
  Facade() : subsystemA(new SubsystemA()), subsystemB(new SubsystemB()), subsystemC(new SubsystemC()) {}
  ~Facade()
  {
    delete subsystemA;
    delete subsystemB;
    delete subsystemC;
  }

  void operation1()
  {
    subsystemA->suboperation();
    subsystemB->suboperation();
  }

  void operation2()
  {
    subsystemC->suboperation();
  }

private:
  SubsystemA *subsystemA;
  SubsystemB *subsystemB;
  SubsystemC *subsystemC;
};

// Функция для проверки работы метода operation1()
void testOperation1()
{
  std::cout << "Running Operation 1 test..." << std::endl;
  Facade facade;
  facade.operation1(); // Вызов метода, который должен вызвать методы suboperation() у подсистем A и B
  std::cout << "Operation 1 test completed" << std::endl;
}

// Функция для проверки работы метода operation2()
void testOperation2()
{
  std::cout << "Running Operation 2 test..." << std::endl;
  Facade facade;
  facade.operation2(); // Вызов метода, который должен вызвать метод suboperation() у подсистемы C
  std::cout << "Operation 2 test completed" << std::endl;
}

// Функция для запуска всех тестов
void runTests()
{
  testOperation1();
  testOperation2();
}

int main()
{
  runTests(); // Запуск всех тестов
  return 0;
}
