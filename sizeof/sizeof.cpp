#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::string;
using std::getline;

int main() {
  // sizeof() = determines the size in bytes of a:
  //            variable, data type, class, objects, etc.
  //            차지하는 메모리의 크기를 byte 단위로 알려줌

  double gpa = 2.5;

  cout << sizeof(gpa) << "bytes\n";     // 8 byte (double엔 최대 8byte 부여됨)
  cout << sizeof(double) << "bytes\n";

  // string에선 반드시 큰따옴표 사용
  string name = "Yoojanghun is awesome";
  cout << sizeof(name) << "bytes\n";

  // char에선 반드시 작은 따옴표 사용
  char grade = 'A';
  cout << sizeof(grade) << "bytes\n";     // char => 1byte 차지

  bool isStudent = true;
  cout << sizeof(isStudent) << "bytes\n";

  char grades[] = {'A', 'B', 'C', 'D', 'F'};
  cout << sizeof(grades) << "bytes\n";    // char가 5개 => 5byte 차지
  cout << sizeof(grades) / sizeof(char) << " elements\n";

  string students[] = {"Spongebob", "Patrick", "Squidward"};
  cout << sizeof(students) / sizeof(string) << " elements\n";

  return 0;
}