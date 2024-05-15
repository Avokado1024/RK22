// test.cpp

#include <iostream>

// Функция для сравнения двух чисел
bool isEqual(int a, int b) {
    return a == b;
}

// Функция для выполнения тестов
void runTests() {
    int x = 5;
    int y = 5;
    std::cout << "Test 1: ";
    if (isEqual(x, y)) {
        std::cout << "Passed" << std::endl;
    } else {
        std::cout << "Failed" << std::endl;
    }

    int z = 10;
    std::cout << "Test 2: ";
    if (!isEqual(x, z)) {
        std::cout << "Passed" << std::endl;
    } else {
        std::cout << "Failed" << std::endl;
    }
}

int main() {
    // Запуск тестов
    runTests();

    return 0;
}
