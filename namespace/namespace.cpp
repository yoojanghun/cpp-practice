#include <iostream>

namespace first{
  int x = 1;
}
namespace second{
  int x = 2;
}


int main() {
  // Namespace = provides a solution for preventing name conflicts 
  //             in large projects. Each entity needs a unique name.
  //             A namespace allows for identically named entities 
  //             as long as the namespaces are different.
  
  // using namespace를 사용하면 특정 namespace안 요소들을 접두사 없이 쓸 수 있다.
  // 하지만 std안에는 많은 함수, 클래스, 변수 이름이 있기 때문에, 충돌 문제 발생 가능. 
  // 그래서 필요한 경우에만 아래처럼 쓸 수 있다.
  // using std::string;
  // using std::cout;

  using namespace std;      // std 안 요소들을 접두사 없이 쓸 수 있다.
  
  string hello = "hello world";

  cout << hello;

  return 0;
}