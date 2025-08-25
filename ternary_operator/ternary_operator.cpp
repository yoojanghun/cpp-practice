#include <iostream>

int main() {
  // ternary operator: replacement to an if/else statement
  // condition ? expression1 : expression2;

  int grade = 75;
  grade >= 60 ? std::cout << "You passed!\n" : std::cout << "You failed!\n";
  std::cout << (grade >= 60 ? "You passed!\n" : "You failed!\n");

  int number = 8;
  number % 2 ? std::cout << "Odd\n" : std::cout << "Even\n";
  std::cout << (number % 2 ? "Odd\n": "Even\n");

  bool hungry = true;
  hungry ? std::cout << "You are hungry\n" : std::cout << "You are full\n";
  std::cout << (hungry ? "You are hungry\n" : "You are full\n");
  
  return 0;
}