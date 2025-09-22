#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::getline;

void happy_birthday1();
void happy_birthday2(string name, int age);
double square(double length);
string concatStrings(string string1, string string2);

int main() {
  // function = a block of reuseable code
  // return   = return a value back to the spot
  //            where you called the encompassing function
  
  // 함수는 여러번 호출 시 유용함
  happy_birthday1();
  happy_birthday1();
  happy_birthday1();

  // 함수엔 파라미터를 넣을 수 있음 => 함수 안에서 사용
  string name = "Yoojanghun";
  int age = 23;
  happy_birthday2(name, age);

  // 함수는 return으로 값을 반환 가능함
  double length = 5.0;
  double area = square(length);
  cout << "Area: " << area << "cm^2\n";

  string firstName = "Janghun";
  string lastName = "Yoo";
  string fullName = concatStrings(lastName, firstName);
  cout << "You're full name is: " << fullName << "\n";

  return 0;
}

void happy_birthday1() {
  cout << "Happy BirthDay!!\n";
}

void happy_birthday2(string name, int age) {   // 함수 파라미터의 자료형을 명시
  cout << "Happy BirthDay!! " << name << "\n";
  cout << "You are " << age << " years old!" << "\n";
}

double square(double length) {
  return length * length;
}

string concatStrings(string string1, string string2) {
  return string1 + " " + string2;
}