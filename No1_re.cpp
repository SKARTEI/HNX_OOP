#include <iostream>
using namespace std;
// main �Լ��� ���� �̸��� �����ϰ� �ٲٰ� ����
int No1_re()
{
	int factor = 0, sum = 0;
	string counting = "";
	

	cout << "���� ������ �Է����ּ���. 1�̻� 10����" << endl;
	cin >> factor;

	while (factor < 1 || factor > 10)
	{
		cout << "1�̻� 100������ ���ڸ� �ٽ� �Է����ּ���." << endl;
		cin >> factor;
	}
	
	cout << "1�̻� 100������ ���ڰ� �ԷµǾ����ϴ�." << endl;
	cout << "�Է��� ������ �°� ���� �Է����ּ���" << endl;
	
	cin >> counting;
	
	// ��� ���� ���� ���ۼ�
	for (int i = 0; i < counting.length(); i++)
		sum += counting[i] - '0'; // char���� int������ ��ȯ�Ͽ� �ջ�

	// ��º�
	cout << "\n �հ� ��� ���: " << sum << endl;

	return 0;
}