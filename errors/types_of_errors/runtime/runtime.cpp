#include <iostream>

// one error

int main() {
    unsigned int age = 0;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (12 < age && age < 20) {
      std::cout << "You are a teenager." << std::endl;
    } else if (age = 21) {
      std::cout << "You can vote." << std::endl;
    }
    std::cout << "Your age times " << (100 / age)
       << " is a century." << std::endl;

    return 0;
}
