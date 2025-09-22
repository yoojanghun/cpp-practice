#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::getline;

int main() {
  // pseudo-random(유사 난수): Not Truly random (but close)
  // 유사 난수는 내부적으로 알고리즘으로 계산되기 때문에, 
  // 항상 같은 seed 값으로 시작하면 같은 난수 패턴이 반복

  // srand(=seed rand): 난수 생성기의 초기값(seed) 설정하는 함수
  // time(NULL) → 현재 시간을 초 단위로 반환 (1970년 1월 1일 이후 지난 초)
  // srand()에 넣으면 매번 실행할 때 다른 seed가 들어감 → rand()가 다른 결과 생성
  srand(time(NULL));

  int num1 = (rand() % 6) + 1;     // 1 ~ 6의 난수 생성
  int num2 = (rand() % 6) + 1;
  int num3 = (rand() % 6) + 1;

  cout << num1 << "\n";
  cout << num2 << "\n";
  cout << num3 << "\n";

  return 0;
}