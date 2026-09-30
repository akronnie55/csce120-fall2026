#include <iostream>
#include <sstream>
#include <string>

double calculate(std::string line) {
  double first_number = 0, second_number = 0;
  char op = ' ';

  std::istringstream iss(line);
  // TODO(@Student): extract <first_number> <op> <second_number> from iss
  //                 any errors should throw an invalid_argument exception
  if (!(iss >> first_number)) {
    std::string msg = "Unable to parse first number in '" + line + "'";
    throw std::invalid_argument(msg);
  }

  if (!(iss >> op)) {
    std::string msg = "Unable to parse operator in '" + line + "'";
    throw std::invalid_argument(msg);
  }

  if (!(iss >> second_number)) {
    std::string msg = "Unable to parse second number in '" + line + "'";
    throw std::invalid_argument(msg);
  }

  double result = 0;
  // TODO(@Student): compute result based on op symbol,
  //                 allowed symbols are +, -, *, /
  //                 any errors should throw an invalid_argument exception
  switch (op) {
    case '+':
      result = first_number + second_number;
      break;
    case '-':
      result = first_number - second_number;
      break;
    case '*':
      result = first_number * second_number;
      break;
    case '/':
      if (second_number == 0) {
        throw std::invalid_argument("Cannot divide by 0");
      }
      result = first_number / second_number;
      break;
    default:
      // Can also create the error message string using ostringstream,
      // helpful when your error message is not made up of all string pieces
      std::ostringstream os;
      os << "Invalid operator '" << op << "', only +, -, *, / allowed";
      throw std::invalid_argument(os.str());
  }

  return result;
}

int main() {
  std::cout << "Enter the expression to calculate in one line: " << std::endl;
  std::string line;
  std::getline(std::cin, line);

  try {
    std::cout << "result: " << calculate(line) << std::endl;
  } catch (const std::invalid_argument& err) {
    std::cout << err.what() << std::endl;
  }

  return 0;
}
