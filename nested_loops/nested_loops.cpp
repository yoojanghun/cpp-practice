#include <iostream>

using std::cout;
using std::cin;
using std::getline;

int main() {

  /*
    loop() {
      loop() {
      
      }
    }
  */

 // for(int i = 0; i < 3; i++) {
 //   for(int j = 0; j < 10; j++) {
 //     cout << j + 1 << " ";
 //   }
 //   cout << "\n";
 // }

  int rows;
  int columns;
  char symbol;

  cout << "How many rows?: ";
  cin >> rows;

  cout << "How many columns?: ";
  cin >> columns;

  cout << "Enter a symbol to use: ";
  cin >> symbol;

  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < columns; j++) {
      cout << symbol << " ";
    }
    cout << "\n";
  } 
  
  return 0;
}