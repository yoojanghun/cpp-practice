#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main() {
  std::string name;
  std::string fullName;
  int age;

  std::cout << "What's your name?: ";
  std::cin >> name;       // 공백(space, tab, enter) 기준으로 끊어 저장됨.                 


  std::cout << "What's your full name?: ";
  std::getline(std::cin >> std::ws, fullName);    // std::ws로 버퍼의 "\n"과 다른 공백 문자들 모두 제거

  std::cout << "What's your age?: ";
  std::cin >> age;

  std::cout << "Hello Mr." << name << "\n";
  std::cout << "You're full name is: " << fullName << "\n";
  std::cout << "You are " << age << " years old \n";

  return 0;
}

// std::cin => 이름을 입력하고 Enter("\n")를 치면 입력이 끝남
// cin은 입력한 단어만 변수에 저장, Enter("\n")는 입력 버퍼에 그대로 남겨둠.
// std::getline(std::cin, fullName)이 실행되면, 버퍼의 Enter("\n")를 만나
// 바로 빈 문자열("")을 읽어버림.