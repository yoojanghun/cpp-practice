#include <iostream>

using std::cout;
using std::cin;
using std::getline;

int main() {

  // do while loop = do some block of code first,
  //                 THEN repeat again if condition is true.

  int number;

  // cout << "Enter a positive number: ";
  // cin >> number;

  // while(number < 0) {
  //   cout << "Enter a positive number: ";
  //   cin >> number;
  // }
  // 위와 같이 코드를 작성해도 되지만, 중복된 코드가 발생한다.

  do {
    cout << "Enter a positive number: ";
    cin >> number;
  } while(number < 0);

  cout << "The number is: " << number;

  return 0;
}