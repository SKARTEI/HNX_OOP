// N���� ���ڰ� ������� �����ִ�. �� ���ڸ� ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// ��) 5(������ ����), 12345(������� �Է��� ����) �Է��ϸ� 15 ���

#include <iostream>
using namespace std;
// main �Լ��� ���� �̸��� �����ϰ� �ٲٰ� ����

unsigned int factor = 0;
string counting = "";

int No1()
{

	cout << "���� ������ �Է����ּ���. 1�̻� 100����" << endl;
	cin >> factor;
	while(factor < 1 || factor > 100)
	{
		cout << "1�̻� 100������ ���ڸ� �ٽ� �Է����ּ���." << endl;
		cin >> factor;
	}


	cout << "1�̻� 100������ ���ڰ� �ԷµǾ����ϴ�." << endl;
	cout << "�Է��� ������ �°� ���� �Է����ּ���" << endl;
	cin >> counting;

	// ���� ���� ����� ����
	// 12345�� �Է�������, 1	2	3	4	5�� char�� �迭�� �ٲٰ�, int ������ ��ȯ�Ͽ� ���� ���Ѵ�.
	
	for (unsigned int i = 0; i < factor; i++)
	{
		if (counting[i] < '0' || counting[i] > '9') // ���ڰ� �ƴ� ���
		{
			cout << "���ڸ� �Է����ּ���." << endl;
			return 1;
		}
		counting[i] -= '0'; // char���� int������ ��ȯ
	}

	int sum = 0;
	for (unsigned int i = 0; i < factor; i++)
	{
		sum += counting[i]; // �ջ�
	}
	cout << "�Է��� ������ ���� " << sum << "�Դϴ�." << endl;

	// ��
	return 0;
}