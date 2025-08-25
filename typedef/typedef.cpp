#include <iostream>
#include <vector>

// 아래의 data type을 pairlist_t 라고 설정
// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// 아래의 data type을 text_t 라고 설정
// typedef std::string text_t;

// 아래의 data type을 number_t 라고 설정
// typedef int number_t;

// 아래처럼 using 키워드를 사용해서 나타낼 수 있다.
using text_t = std::string;
using number_t = int;

int main() {
  // typedef: reserved keyword used to create an additional name
  //          (alias) for another data type.
  //          New identifier for an existing type.
  //          Helps with readability and reduces typos.   
  //          Use when there is a clear benefit.
  //          Replaced with "using" (work better with templates)

  text_t firstName = "Yoo";
  number_t age = 24;

  std::cout << firstName << "\n";
  std::cout << age << "\n";

  return 0;
}