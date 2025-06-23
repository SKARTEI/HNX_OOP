#include <iostream>
using namespace std;
// 포인터는 개념이 어렵고 문제가 하나밖에 없어서 예제로 대체함
//1번은 포인터 개념이라 2번, 3번 문제만 풀었음

/* 예제 1
void swap(int* pX, int* pY)
{
	int tmp = *pX;
	*pX = *pY;
	*pY = tmp;
}

int main()
{
	int num1 = 5, num2 = 10;

	cout << "변수 num1의 값은" << num1 << "\n";
	cout << "변수 num2의 값은" << num2 << "\n";
	
	cout << "num1과 num2의 값을 교환한다\n";

	swap(&num1, &num2);

	cout << "변수 num1의 값은" << num1 << "\n";
	cout << "변수 num2의 값은" << num2 << "\n";

	return 0;
}
*/


/* 2번 문제, 포인터 사용 
void add(int* pX, int* pY, int *pA)
{
	*pX += *pA;
	*pY += *pA;
}

int main()
{
	int score1, score2;
	int plus_score;
	cout << "2개 과목 분의 점수를 입력하십시오.\n";
	cin >> score1;
	cin >> score2;

	cout << "더할 점수를 입력하십시오.\n";
	cin >> plus_score;

	add(&score1, &score2, &plus_score);

	cout << plus_score << "점을 더했으므로\n";
	cout << "과목1은 " << score1 << "점이 되었습니다.\n";
	cout << "과목2은 " << score2 << "점이 되었습니다.\n";

	return 0;
}
*/

/* 3번 레퍼런스 전환 문제
void add(int &pX, int &pY, int &pA)
{
	pX += pA;
	pY += pA;
}

int main()
{
	int score1, score2;
	int plus_score;
	cout << "2개 과목 분의 점수를 입력하십시오.\n";
	cin >> score1;
	cin >> score2;

	cout << "더할 점수를 입력하십시오.\n";
	cin >> plus_score;

	add(score1, score2, plus_score);

	cout << plus_score << "점을 더했으므로\n";
	cout << "과목1은 " << score1 << "점이 되었습니다.\n";
	cout << "과목2은 " << score2 << "점이 되었습니다.\n";

	return 0;
}
*/