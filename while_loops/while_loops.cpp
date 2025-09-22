#include <iostream>

using std::cout;
using std::cin;
using std::getline;
using std::string;

int main() {

  string name;

  // while 대신에 if 써도 되지만, while과 if의 차이점은 
  // while은 조건문을 만족하면 loop 안 코드를 계속 반복함.
  
  while(name.empty()) {
    cout << "Enter your name: ";
    getline(cin, name);
  }

  cout << "Hello " << name;

  return 0;
}