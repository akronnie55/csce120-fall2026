#include <iostream>

// three errors

int main() {
  unsigned int age;
  std::cout << "Age when born: " << age << std::endl;

  std::cout << "Enter your age: ";
  std::cin >> age;

  if (12 < age || age < 20) {
    std::cout << "You are a teenager." << std::endl;
  } else if (age > 21) {
    std::cout << "You can vote." << std::endl;
  }

  return 0;
}
