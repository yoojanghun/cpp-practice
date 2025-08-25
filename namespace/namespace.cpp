#include <iostream>

namespace first{
  int x = 1;
}
namespace second{
  int x = 2;
}

int main() {
  // Namespace = provides a solution for preventing name conflicts 
  //             in large projects. Each entity needs a unique name.
  //             A namespace allows for identically named entities 
  //             as long as the namespaces are different.

  // int x = 0;
  using namespace first;    // first namespace안에 있는 이름들을 꺼내 쓴다.
  // 단 int x = 0을 하면 지역변수 > 전역변수(namespace 포함) 우선순위가 적용되어, 출력은 0

  std::cout << x << "\n";
  std::cout << first::x << "\n";
  std::cout << second::x << "\n";

  return 0;
}