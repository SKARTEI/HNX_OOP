/*
�������� ���� ����
���� = ���� / �ִ����� *100
��: ���� 70 ���� 50�̸� ���� ������ 50 / 70 * 100 = 71.43������ ��ħ
���Ӱ� ����� ���ϴ� ���α׷� �ۼ�

��) ����� 3��, 40 80 60�̸�
����� 75

*/
#include <iostream>
using namespace std;


int No2()
{
	int number = 0;
	cout << "���� ���� ���α׷��Դϴ�" << endl;
	cout << "���� ���� �Է� : ";
	cin >> number;
	while (number < 1 || number > 10)
	{
		cout << "1 �̻� 10 ������ ���� ������ �Է����ּ���" << endl;
		cout << "���� ���� �Է� : " ;
		cin >> number;
	}
	int score[10] = {}, max_score = 0;
	double new_score[10] = {}, new_mean = 0, new_score_sum = 0;
	cout << "���� ������ ���� �Է����ּ���." << endl;
	for (int i = 0; i < number; i++)
	{
		cout << i+1 <<"��° ���� �Է� : " ;
		cin >> score[i];
		while (score[i] < 0 || score[i] > 100)
		{
			cout << "1 �̻� 100 ������ ������ �ٽ� �Է����ּ���" << endl;
			cout << i + 1 << "��° ���� �Է� : ";
			cin >> score[i];
		}
	}

	cout << "�Է� ����" << endl;
	for (int i = 0; i < number; i++)
	{
		if (max_score < score[i])
			max_score = score[i];
	}
	cout << "�ִ밪: "  << max_score << endl; // Ȯ�ο�

	for (int i = 0; i < number; i++)
	{
		new_score[i] = (double) score[i] / max_score * 100;
		cout << i + 1 << "��° �������� : " << new_score[i] << endl;
		new_score_sum += new_score[i];
	}
	new_mean = new_score_sum / number;
	cout << "���� ���: " << new_mean << endl;

	return 0;
}