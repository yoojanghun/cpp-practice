#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::getline;

int myNum = 3;      // Global variables => main, printNum에도 접근 가능

void printNum();

int main() {
  // Local variables = declared inside a function or block {}
  // Global variables = declared outside of all functions

  cout << myNum << "\n";

  int myNum = 1;    // Global과 Local 충돌 => Local 우선
  cout << myNum << "\n";

  printNum();

  // Scope Resolution Operator(::)를 이용해서 Global 변수에 접근도 가능
  cout << ::myNum << "\n";
  
  return 0;
}

void printNum() {
  int myNum = 2;
  cout << myNum << "\n";
}