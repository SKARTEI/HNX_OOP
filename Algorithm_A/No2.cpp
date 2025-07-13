/*
시험점수 조작 문제
점수 = 점수 / 최대점수 *100
예: 국어 70 수학 50이면 수학 점수를 50 / 70 * 100 = 71.43점으로 고침
새롭게 평균을 구하는 프로그램 작성

예) 과목수 3개, 40 80 60이면
결과값 75

*/
#include <iostream>
using namespace std;


int No2()
{
	int number = 0;
	cout << "점수 조작 프로그램입니다" << endl;
	cout << "과목 갯수 입력 : ";
	cin >> number;
	while (number < 1 || number > 10)
	{
		cout << "1 이상 10 이하의 과목 갯수를 입력해주세요" << endl;
		cout << "과목 갯수 입력 : " ;
		cin >> number;
	}
	int score[10] = {}, max_score = 0;
	double new_score[10] = {}, new_mean = 0, new_score_sum = 0;
	cout << "시험 점수를 각각 입력해주세요." << endl;
	for (int i = 0; i < number; i++)
	{
		cout << i+1 <<"번째 점수 입력 : " ;
		cin >> score[i];
		while (score[i] < 0 || score[i] > 100)
		{
			cout << "1 이상 100 이하의 점수로 다시 입력해주세요" << endl;
			cout << i + 1 << "번째 점수 입력 : ";
			cin >> score[i];
		}
	}

	cout << "입력 종료" << endl;
	for (int i = 0; i < number; i++)
	{
		if (max_score < score[i])
			max_score = score[i];
	}
	cout << "최대값: "  << max_score << endl; // 확인용

	for (int i = 0; i < number; i++)
	{
		new_score[i] = (double) score[i] / max_score * 100;
		cout << i + 1 << "번째 조작점수 : " << new_score[i] << endl;
		new_score_sum += new_score[i];
	}
	new_mean = new_score_sum / number;
	cout << "조작 평균: " << new_mean << endl;

	return 0;
}