In C++, what is not a keyword. However, what() is often used in exception handling. It is a member function of the std::exception class that returns a string describing the error.

Example:

cpp

#include <iostream>
#include <exception>

int main() {
  try {
    throw std::runtime_error("Something went wrong!");
  } catch (const std::exception& e) {
    std::cout << e.what() << std::endl;  // Outputs: Something went wrong!
  }
}

Here, what() provides a description of the exception that was thrown.
