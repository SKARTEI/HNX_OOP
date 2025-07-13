/*
수 N개가 주어졌을 때 i번째 수에서 j번째 수 까지의 합을 구하는 프로그램을 작성하기
*/

#include <iostream>
using namespace std;


int main()
{
	ios::sync_with_stdio(false); // C언어의 stdio 와 C++ iostream의 동기화 해제. 사실상 C++만 사용하여 속도 빨라짐
	cin.tie(NULL);
	cout.tie(NULL);
	// 그냥 교재에 있어서 넣음

	int suNo, quizNo;
	cin >> suNo >> quizNo;
	int S[100001] = {};

	for (int i = 0; i < suNo; i++)
	{
		int temp;
		cin >> temp;
		S[i] = S[i - 1] + temp; // 구간합
	}

	for (int i = 0 ; i < quizNo; i++)
	{
		int start, end;
		cin >> start >> end;
		cout << S[end] - S[start - 1] << endl;
	}


	return 0;
}