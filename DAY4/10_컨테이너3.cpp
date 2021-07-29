#include <iostream>
#include <map>
#include <string>
#include <list>

int main()
{
	std::map<std::string, std::string> m;
	
	// map : 키값으로 데이타 보관 - STL 에서 가장널리 사용
	
	// 사용법은 배열처럼 사용하면 되는데, index가 정수가 아닌 "키값의 타입"
	m["mon"] = "월요일";
	m["sun"] = "일요일";
	m["wed"] = "수요일"; // 결국 "영한 사전" 입니다.
						// 그래서 "map" 을 "dictionary" 라고도 부릅니다.

	std::cout << m["mon"] << std::endl;

	//-------------
	// data에 다른 자료구조를 넣을때가 활용도가 높습니다

	std::map< std::string,  std::list<std::string> > m2;

	m2["홍길동"].push_back("영화1");
	m2["홍길동"].push_back("영화2");
	m2["홍길동"].push_back("영화3");

	for (auto e : m2["홍길동"]) // m2["홍길동"] 는 data 이므로 list 입니다
		std::cout << e << std::endl;
}





