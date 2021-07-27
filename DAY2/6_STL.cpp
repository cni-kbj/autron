// 6_STL
#include <iostream>
#include <stack>
#include <vector>
#include <string>  
#include <list>
#include <set>
#include <unordered_set>

// STL : C++표준 라이브러리의 이름.
//       Standard Template Library
//		 대부분 클래스 한개당, 헤더 한개
int main()
{
//	char s1[10] = "hello";
//	char s2[10] = "hello";
//	if (s1 == s2) {} // 문자열 비교가 아닌 배열 주소 비교..!!
					 // 문자열 비교하려면 "strcmp" 사용

	// 문자열이 필요 하면 "string" 클래스 사용하세요
	std::string s1 = "hello";
	std::string s2 = s1;      // strcpy 필요 없음..
	std::string s3 = s1 + s2; // 정수 처럼 덧셈도 가능

	if (s1 == s2) {}
	std::cout << s1 << std::endl;

	std::string s4 = s1.substr(3); // 많은 멤버 함수들..
	//==============================================
	// 대부분 자료구조 다 있습니다.
	std::list<int> st;	// list
	st.push_back(10);

	std::set<int> se;  // tree
	se.insert(10);

	std::unordered_set<int> se2; // hash table
	se2.insert(10);
}

