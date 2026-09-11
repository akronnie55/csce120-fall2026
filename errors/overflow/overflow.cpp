#include<iostream>


// short range is -32768 to 32767

int main() {
  short a = 0, b = 0;
  do {
    std::cout << "Enter two numbers to add: ";
    std::cin >> a >> b;
    short answer = a + b;
    std::cout << a << " + " << b << " is " << answer << std::endl;
  } while (a >= 0 || b >= 0);
}
