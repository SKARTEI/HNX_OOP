#include <iostream>
using namespace std;
// �����ʹ� ������ ��ư� ������ �ϳ��ۿ� ��� ������ ��ü��
//1���� ������ �����̶� 2��, 3�� ������ Ǯ����

/* ���� 1
void swap(int* pX, int* pY)
{
	int tmp = *pX;
	*pX = *pY;
	*pY = tmp;
}

int main()
{
	int num1 = 5, num2 = 10;

	cout << "���� num1�� ����" << num1 << "\n";
	cout << "���� num2�� ����" << num2 << "\n";
	
	cout << "num1�� num2�� ���� ��ȯ�Ѵ�\n";

	swap(&num1, &num2);

	cout << "���� num1�� ����" << num1 << "\n";
	cout << "���� num2�� ����" << num2 << "\n";

	return 0;
}
*/


/* 2�� ����, ������ ��� 
void add(int* pX, int* pY, int *pA)
{
	*pX += *pA;
	*pY += *pA;
}

int main()
{
	int score1, score2;
	int plus_score;
	cout << "2�� ���� ���� ������ �Է��Ͻʽÿ�.\n";
	cin >> score1;
	cin >> score2;

	cout << "���� ������ �Է��Ͻʽÿ�.\n";
	cin >> plus_score;

	add(&score1, &score2, &plus_score);

	cout << plus_score << "���� �������Ƿ�\n";
	cout << "����1�� " << score1 << "���� �Ǿ����ϴ�.\n";
	cout << "����2�� " << score2 << "���� �Ǿ����ϴ�.\n";

	return 0;
}
*/

/* 3�� ���۷��� ��ȯ ����
void add(int &pX, int &pY, int &pA)
{
	pX += pA;
	pY += pA;
}

int main()
{
	int score1, score2;
	int plus_score;
	cout << "2�� ���� ���� ������ �Է��Ͻʽÿ�.\n";
	cin >> score1;
	cin >> score2;

	cout << "���� ������ �Է��Ͻʽÿ�.\n";
	cin >> plus_score;

	add(score1, score2, plus_score);

	cout << plus_score << "���� �������Ƿ�\n";
	cout << "����1�� " << score1 << "���� �Ǿ����ϴ�.\n";
	cout << "����2�� " << score2 << "���� �Ǿ����ϴ�.\n";

	return 0;
}
*/