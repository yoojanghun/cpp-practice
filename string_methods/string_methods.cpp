#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::getline;

int main() {
  string name;

  cout << "Enter your name: ";
  getline(cin, name);

  if(name.length() > 12) {
    cout << "Your name can't be over 12 characters\n";
  }
  else {
    cout << "Welcome " << name << "\n";
  }

  if(name.empty()) {
    cout << "You didn't enter your name\n";
  }
  else {
    cout << "Hello " << name << "\n";
  }

  name.append("@gmail.com");
  cout << "Your email: " << name << "\n";

  cout << name.at(0) << "\n";

  name.insert(3, "@");      // index에 문자 집어넣고 나머지는 뒤로 밀음
  cout << name << "\n";

  cout << name.find("@") << "\n";

  name.erase(0, 4);     // index 0, 1, 2, 3 지움
  cout << name << "\n";

  name.clear();
  cout << "Hello " << name << "\n";

  return 0;
}