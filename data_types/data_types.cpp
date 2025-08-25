#include <iostream>

int main() {

  // interger (whole number)
  int age = 24;
  int year = 2025;
  int days = 25;

  // double (number including decimal)
  double price = 10.99;
  double gpa = 2.5;
  double temperature = 25.1;

  // char (single character)
  char grade = 'A';       // 작은따옴표 사용
  char initial = 'B';
  char currency = '$';

  // boolean (true / false)
  bool student = true;
  bool power = false;
  bool forSale = true;

  // string (objects that represents a sequence of text)
  std::string name = "Yoo";     // 큰따옴표 사용
  std::string day = "Friday";
  std::string food = "Pizza";
  std::string address = "123 Fake St.";


  std::cout << age << "\n";
  std::cout << price << "\n";
  std::cout << grade << "\n";
  std::cout << student << "\n";
  std::cout << name << "\n";

  std::cout << "Hello Mr." << name << "\n";
  std::cout << "You are " << age << " years old" <<"\n";

  return 0;
}