
/*chapter 7 연습문제, 편의상 3번이랑 4번으로 다풀어버림*/
#include <iostream>
using namespace std;
/* 1번 2번 3번 통합
inline int square(int x) { x = x * x; return x; };
inline double square(double x) { x = x * x; return x; };

int main()
{
	int input1, result1;
	double input2, result2 ;

	cout << "정수를 입력하십시오\n";
	cin >> input1;
	result1 = square(input1);
	cout << input1 << "의 제곱은 " << result1 << "입니다.\n";

	cout << "소수를 입력하십시오\n";
	cin >> input2;
	result2 = square(input2);
	cout << input2 << "의 제곱은 " << result2 << "입니다.\n";


	return 0;
}
*/

/* 4번
template <class T>
T square(T x)
{
	x = x * x;

	return x;
}

int main()
{
	int input1, result1;
	double input2, result2;

	cout << "정수를 입력하십시오\n";
	cin >> input1;
	result1 = square(input1);
	cout << input1 << "의 제곱은 " << result1 << "입니다.\n";

	cout << "소수를 입력하십시오\n";
	cin >> input2;
	result2 = square(input2);
	cout << input2 << "의 제곱은 " << result2 << "입니다.\n";

	return 0;
}
*/