/*
�� N���� �־����� �� i��° ������ j��° �� ������ ���� ���ϴ� ���α׷��� �ۼ��ϱ�
*/

#include <iostream>
using namespace std;


int main()
{
	ios::sync_with_stdio(false); // C����� stdio �� C++ iostream�� ����ȭ ����. ��ǻ� C++�� ����Ͽ� �ӵ� ������
	cin.tie(NULL);
	cout.tie(NULL);
	// �׳� ���翡 �־ ����

	int suNo, quizNo;
	cin >> suNo >> quizNo;
	int S[100001] = {};

	for (int i = 0; i < suNo; i++)
	{
		int temp;
		cin >> temp;
		S[i] = S[i - 1] + temp; // ������
	}

	for (int i = 0 ; i < quizNo; i++)
	{
		int start, end;
		cin >> start >> end;
		cout << S[end] - S[start - 1] << endl;
	}


	return 0;
}