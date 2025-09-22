#include <iostream>

using std::cout;
using std::cin;
using std::getline;

int main() {
  // break: break out of a loop
  // continue: skip current iteration

  for(int i = 0; i < 20; i++) {
    if(i == 13) break;
    cout << i + 1 << "\n";
  }

  cout << "\n";

  for(int i = 0; i < 20; i++) {
    if(i == 13) continue;
    cout << i + 1 << "\n";
  }

  return 0;
}