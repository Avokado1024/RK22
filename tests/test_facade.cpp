// tests/test_facade.cpp

#include <gtest/gtest.h>
#include "../src/main.cpp"

// Тестируем, что подсистемы вызываются корректно
TEST(FacadeTest, Operation1CallsSubsystems) {
  Facade facade;
  testing::internal::CaptureStdout();
  facade.operation1();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_NE(output.find("Subsystem A method"), std::string::npos);
  EXPECT_NE(output.find("Subsystem B method"), std::string::npos);
}

TEST(FacadeTest, Operation2CallsSubsystemC) {
  Facade facade;
  testing::internal::CaptureStdout();
  facade.operation2();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_NE(output.find("Subsystem C method"), std::string::npos);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
