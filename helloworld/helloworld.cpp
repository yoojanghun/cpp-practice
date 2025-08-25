// #include: 전처리기 지시문. 컴파일되기 전에 헤더 파일의 내용을 코드에 포함.
// <iostream>: "Input/Output Stream". 입출력 기능(콘솔 입력/출력)을 제공하는 라이브러리.
//             std::cout : 콘솔로 출력

#include <iostream>

int main() {
  std::cout << "I like Pizza!" << std::endl;
  std::cout << "It's really good!" << std::endl;

  return 0;
}

// 버퍼: 출력할 데이터(문자열, 문자 등)를 임시로 모아 두는 메모리 공간.
//       (한 글자씩 출력할 때마다 OS에 요청하면 속도가 너무 느려짐.)

// "\n" => 줄바꿈.
// std::endl => 줄바꿈(\n) + 버퍼 비움.