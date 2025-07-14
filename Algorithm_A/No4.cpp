/*
구간합 구하기
N X N 의 표가 채워져있다. (X1, Y1)에서 (X2, Y2)까지의 구간합을 구하는 프로그램을 작성하시오.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N = 0, M = 0; // N: 표의 크기, M: 구간합을 구할 횟수
	cout << "N 과 M 크기를 입력해주세요." << endl;
	cin >> N >> M;


	// 2차원 벡터를 사용하여 표와 구간합을 저장
	vector<vector<int>> A(N + 1, vector<int>(N + 1, 0)); // N X N 표를 0으로 초기화
	vector<vector<int>> D(N + 1, vector<int>(N + 1, 0)); // 구간합을 저장할 표
	
	cout << "구간 합을 구한다" << endl;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> A[i + 1][j + 1]; // 표에 값 입력
			D[i + 1][j + 1] = A[i + 1][j + 1] + D[i][j + 1] + D[i + 1][j] - D[i][j]; // 구간합 계산
		}
	}

	for (int i = 0; i < M; i++)
	{
		int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
		cout << "구간합을 구할 좌표 (X1, Y1) (X2, Y2)를 입력해주세요." << endl;
		cin >> x1 >> y1 >> x2 >> y2;
		int result = D[x2][y2] - D[x1 - 1][y2] - D[x2][y1 - 1] + D[x1 - 1][y1 - 1]; // 구간합 계산
		cout << "구간합: " << result << endl;
	}
}