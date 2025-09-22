#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::getline;

void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);

// 함수 오버로딩(Function Overloading)란?
// 같은 이름의 함수를 여러 개 만들 수 있게 해주는 기능입니다.
// 단, 매개변수의 개수나 타입이 달라야 합니다.

int main() {

  bakePizza();
  bakePizza("pepperoni");
  bakePizza("pepperoni", "cheese");

  return 0;
}

void bakePizza() {
  cout << "Here is your pizza!!\n";
}
void bakePizza(string topping1) {
  cout << "Here is your " << topping1 << " pizza!!\n";
}
void bakePizza(string topping1, string topping2) {
  cout << "Here is your " << topping1 << " and " << topping2 << " pizza!!\n";
}