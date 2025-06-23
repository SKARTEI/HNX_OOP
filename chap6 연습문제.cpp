/*chapter 6 연습문제 풀기*/

#include <iostream>
using namespace std;
/*1번 문제
int main()
{
	short int part1, part2;
	
	cout << "1~10까지의 짝수를 출력합니다.\n";
	
	for (part1 = 1; part1 < 11; part1++)
	{
		part2 = part1 % 2;
		if (part2 == 0)
		{
			cout << part1 << "\n";
		}
	}


	return 0;
}
*/
/* 2번 문제
int main()
{
	short int sum_score = 0, input_score =1;

	cout << "시험점수를 입력하십시오. (0으로 종료)\n";

	while (input_score != 0)
	{
		cin >> input_score;
		sum_score += input_score;
	}
	
	cout << "시험 점수의 합계는 " << sum_score << "점 입니다.\n";

	return 0;
}
*/
/* 3번 문제
int main()
{
	int i, x;

	for (i = 1; i < 6; i++)
	{
		for (x = 1; x <= i; x++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
*/
