#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::getline;

int main() {

  int num;
  int guess;
  int tries = 0;

  srand(time(NULL));
  num = rand() % 100 + 1;

  cout << "******** Number Guessing Game **********\n";

  do {
    cout << "Enter a guess between 1-100: ";
    cin >> guess;
    tries++;

    if(guess > num) {
      cout << "Too High\n";
    }
    else if(guess < num) {
      cout << "Too Low\n";
    }
    else {
      cout << "Correct!! number of tries: " << tries << "\n";
    }

  } while(num != guess);

  return 0;
}