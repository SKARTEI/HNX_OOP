#include <iostream>
using namespace std;

/*chapter 5 연습문제 3개 */

/* 1번 문제 답안
int main()
{
	short int input1, abb1;
	
	cout << "정수를 입력하십시오.\n";
	cin >> input1;
	abb1 = input1 % 2;

	if (abb1 == 1)
		cout << input1 << "은(는) 홀수입니다.\n";
	else
		cout << input1 << "은(는) 짝수입니다.\n";

	return 0;
}
*/
/* 2번 문제
int main()
{
	short int input1, input2, abb1;

	cout << "2개의 정수를 입력하십시오.\n";
	cin >> input1;
	cin >> input2;

	abb1 = input1 - input2;

	if (abb1 < 0)
		cout << input1 << "보다" << input2 << "이 큽니다\n";
	else if (abb1 > 0)
		cout << input2 << "보다" << input1 << "이 큽니다\n";
	else
		cout << "두 숫자는 같습니다\n";

	return 0;
}
*/
// 3번은 노가다성인데 안함...
