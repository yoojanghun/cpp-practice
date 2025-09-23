#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::string;
using std::getline;

int main() {
  // array = a data structure that can hold multiple values
  //         values are accessed by an index number
  //         "kind of like a variable that holds multiple values"

  // 배열 초기화할 때는 배열 크기 안 써도 됨
  string cars[] = {"Corvette", "Mustang", "Camry"};

  cout << cars << "\n";    // array가 저장된 메모리 주소 보여줌
  cout << cars[0] << "\n";
  cout << cars[1] << "\n";
  cout << cars[2] << "\n";

  cout << "\n";

  cars[0] = "Camaro";
  cout << cars[0] << "\n";
  cout << cars[1] << "\n";
  cout << cars[2] << "\n";

  cout << "\n";

  // 배열을 먼저 만든 후, 값을 할당할 때는 반드시 배열의 크기를 명시
  // string fruits[]; 이렇게만 쓰면 안됨
  string fruits[2];
  fruits[0] = "apple";
  fruits[1] = "banana";

  cout << fruits[0] << "\n";
  cout << fruits[1] << "\n";

  cout << "\n";

  double prices[] = {5.00, 7.50, 9.99, 15.00};
  cout << prices[0] << "\n";
  cout << prices[1] << "\n";
  cout << prices[2] << "\n";
  cout << prices[3] << "\n";

  return 0;
}