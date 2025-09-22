#include <iostream>

using std::cout;
using std::cin;
using std::getline;

// 정해진 횟수만큼 반복시킬 수 있는 for loop
// 조건을 만족할 때만 반복되는 while loop

int main() {

  for(int i = 0; i < 10; i++) {
    cout << i + 1 << "\n";
  }

  cout << "\n";

  for(int i = 0; i < 10; i+=2) {
    cout << i + 1 << "\n";
  }

  cout << "\n";

  for(int i = 9; i >= 0; i--) {
    cout << i + 1 << "\n";
  }

  cout << "Happy New Year!\n";

  return 0;
}