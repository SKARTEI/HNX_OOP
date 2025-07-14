/*
������ ���ϱ�
N X N �� ǥ�� ä�����ִ�. (X1, Y1)���� (X2, Y2)������ �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N = 0, M = 0; // N: ǥ�� ũ��, M: �������� ���� Ƚ��
	cout << "N �� M ũ�⸦ �Է����ּ���." << endl;
	cin >> N >> M;


	// 2���� ���͸� ����Ͽ� ǥ�� �������� ����
	vector<vector<int>> A(N + 1, vector<int>(N + 1, 0)); // N X N ǥ�� 0���� �ʱ�ȭ
	vector<vector<int>> D(N + 1, vector<int>(N + 1, 0)); // �������� ������ ǥ
	
	cout << "���� ���� ���Ѵ�" << endl;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> A[i + 1][j + 1]; // ǥ�� �� �Է�
			D[i + 1][j + 1] = A[i + 1][j + 1] + D[i][j + 1] + D[i + 1][j] - D[i][j]; // ������ ���
		}
	}

	for (int i = 0; i < M; i++)
	{
		int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
		cout << "�������� ���� ��ǥ (X1, Y1) (X2, Y2)�� �Է����ּ���." << endl;
		cin >> x1 >> y1 >> x2 >> y2;
		int result = D[x2][y2] - D[x1 - 1][y2] - D[x2][y1 - 1] + D[x1 - 1][y1 - 1]; // ������ ���
		cout << "������: " << result << endl;
	}
}