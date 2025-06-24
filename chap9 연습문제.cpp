#include <iostream>
#include <cstring>
using namespace std;


//chapter 9 배열 연습문제
/* 1번

int max_f(int x[]);

int main()
{
	int count1=0, max_score;
	int score[5];


	cout << "시험 점수 5개를 입력하십시오.\n";
	
	while (count1 != 5)
	{
		cin >> score[count1];
		count1++;
	}
	max_score = max_f(score);

	cout << "가장 높은 점수는 " << max_score << "점입니다.\n";
	return 0;
}

int max_f(int x[])
{
	int i, result=0;
	for(i=0; i<5; i++)
	{
		if (result < x[i])
			result = x[i];
	}

	return result;
}
*/

/* 2번 문제
int length_f(char* str);

int main()
{
	int length;
	char typing[1000];
	cout << "문자열을 입력하십시오.\n";
	cin >> typing;
	
	length = length_f(typing);
	cout << "문자열의 길이는 "<< length << "입니다.\n";

	return 0;
}

int length_f(char* str)
{
	int length_value = 0;

	while (str[length_value] != '\0')
	{
		length_value++;
	}

	return length_value;
}
*/

//3번 문제
/*
int count_f(char str[], char ch);

int main()
{
	int counting;
	char typing[10];
	char search; // 1개의 문자를 받으므로 이렇게 선언해도 됨.
	
	cout << "문자열을 입력하십시오.\n";
	cin >> typing;

	cout << "검색할 문자를 입력하십시오.\n";
	cin >> search;

	counting = count_f(typing, search);
	cout << typing << "안에 " << search << "은 총 " << counting <<"개 있습니다.\n";

	return 0;
}

int count_f(char str[], char ch)
{
	int length_value = 0, sequence = 0;

	while (str[sequence] != '\0')
	{
		if(ch == str[sequence])
			length_value++;
		sequence++;
	}

	return length_value;
}
*/