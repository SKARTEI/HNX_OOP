#include <iostream>
#include <cstring>
using namespace std;


//chapter 9 �迭 ��������
/* 1��

int max_f(int x[]);

int main()
{
	int count1=0, max_score;
	int score[5];


	cout << "���� ���� 5���� �Է��Ͻʽÿ�.\n";
	
	while (count1 != 5)
	{
		cin >> score[count1];
		count1++;
	}
	max_score = max_f(score);

	cout << "���� ���� ������ " << max_score << "���Դϴ�.\n";
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

/* 2�� ����
int length_f(char* str);

int main()
{
	int length;
	char typing[1000];
	cout << "���ڿ��� �Է��Ͻʽÿ�.\n";
	cin >> typing;
	
	length = length_f(typing);
	cout << "���ڿ��� ���̴� "<< length << "�Դϴ�.\n";

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

//3�� ����
/*
int count_f(char str[], char ch);

int main()
{
	int counting;
	char typing[10];
	char search; // 1���� ���ڸ� �����Ƿ� �̷��� �����ص� ��.
	
	cout << "���ڿ��� �Է��Ͻʽÿ�.\n";
	cin >> typing;

	cout << "�˻��� ���ڸ� �Է��Ͻʽÿ�.\n";
	cin >> search;

	counting = count_f(typing, search);
	cout << typing << "�ȿ� " << search << "�� �� " << counting <<"�� �ֽ��ϴ�.\n";

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