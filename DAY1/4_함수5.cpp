#include <stdio.h>
#include <iostream>
#include <cmath>
#include <vector>
// 6_함수5
// C++ 함수 특징 5. 함수 삭제. C++11에서 추가된 기능
// 35 page

// 핵심 
// 1. 함수를 제공하지 않으면 : 동일 이름의 다른 버전이 사용될수 있다.
// 2. 함수를 선언만 제공하면 : 사용시 "링크 에러"를 나오게 하겠다는 것, 즉 사용할수 없게.
// 3. 함수를 삭제시          : 사용시 "컴파일에러" 를 나오게 하겠다.
//				==> 그런데, 대부분은 "일반함수" 가 아닌 "멤버 함수삭제" (내일 자세히)

// 최대 공약수를 구하는 함수 "gcd"를 생각해 봅시다.
int gcd_ucl (int a, int b);
int lcm(int a, int b);
//double gcd_ucl(double a, double b); // 핵심. 구현하지 말고 선언만
								// 사용시, 링크 에러를 내겠다는 의도..

double gcd_ucl(double a, double b) = delete; // 함수 삭제 라는 문법 - C++11에서 등장
								         // 삭제된 함수 사용시 "컴파일 에러"		 
int lcm(int a, int b);

bool isPrime(int p);
std::vector <int> num;

int main()
{
	int res_ucl = gcd_ucl(1428, 833);
    int res_lcm = lcm(1428, 833);
	
	std::cout << "res_ucl = " << res_ucl << std::endl;
	std::cout << "res_lcm = " << res_lcm << std::endl;

	int N, a;
	std::cin >> N;
	while (N--) {
		std::cin >> a;
		num.push_back(a);
	}

	int count = 0;
	for (int i = 0 ; i < num.size() ; i++) {
		if (isPrime (num[i])) {
			count++;
		}
	}
	std::cout << count;
}

/* 유클리드 호재법
1. 큰 숫자를 작은 숫자로 mod 연산 한다.
2. 작은 숫자를 1번에서 구한 나머지 mod 연산을 한다.
3. 위 과정을 mod 연산 결과가 0이 나올 때 까지 계속 반복한다.
4. 이 때 나누는 수로 사용된 수가 두 수의 최대 공약수가 된다. */
int gcd_ucl (int a, int b) {
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

/* 최소공배수 구하기
최대공약수 * 최소공배수 = 두 수의 곱
즉, 최소공배수 = 두 수의 곱 / 최대공약수 */
int lcm(int a, int b) {
	return (a * b) / gcd_ucl(a, b);
}

/* 소수 구하기
2보다 작으면 무조건 소수가 아니므로 false를 리턴, 
그게 아닐 경우 2부터 해당 수의 제곱근으로 나눠보며 한번이라도 
나누어 떨어지면 소수가 아니라고 판정하는 방식을 이용하였다.
.sqrt를 사용하기 위해 #include <cmath> 필요
https://sectumsempra.tistory.com/78  */
bool isPrime(int p) {
	if (p < 2) {
		return false;
	}
	double sq = sqrt(p);
	for (int i = 2 ; i <= sq ; i++) {
		if (p % i == 0) {
			return false;
		}
	}
	return true;
}