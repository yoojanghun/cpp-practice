#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::getline;

int main() {
  srand(time(NULL));

  int randNum = (rand() % 5) + 1;

  switch (randNum)
  {
  case 1:
    cout << "You win a bumper sticker!\n";
    break;
  case 2:
    cout << "You win a t-shirt!\n";
    break;
  case 3:
    cout << "You win a free lunch!\n";
    break;
  case 4:
    cout << "You win a gift card!\n";
    break;
  case 5:
    cout << "You win a concert tickets!\n";
    break;
  
  default:
    cout << "Error\n";
    break;
  };

  return 0;
}