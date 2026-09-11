#include <iostream>

// 4 errors

int main() {
  unsignd int age = 0;
  std::cout << "Enter your age: ";
  cin >> age;

  if (12 < age < 20) {
    std::cout >> "You are a teenager." >> std::endl;
  }

  return 0;
}
