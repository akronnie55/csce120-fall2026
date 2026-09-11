#include <iostream>
#include <vector>
#include <string>

void print_vector(const std::vector<int>& v) {
  // TODO(Student)
}

void print_vector(const std::vector<std::string>& v) {
  // TODO(Student)
}

int main() {
  std::vector<int> v1 = {1, 2, 3, 4, 5};
  std::vector<std::string> v2 = {"gig", "'em", "aggies"};

  print_vector(v1);
  std::cout << std::endl;

  print_vector(v2);
  std::cout << std::endl;

  // std::cout << v1 << std::endl << v2 << std::endl;
}
