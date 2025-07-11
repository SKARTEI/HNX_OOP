// N개의 숫자가 공백없이 쓰여있다. 이 숫자를 모두 합해 출력하는 프로그램을 작성하시오.
// 예) 5(숫자의 갯수), 12345(공백없이 입력한 숫자) 입력하면 15 출력

#include <iostream>
using namespace std;
// main 함수는 파일 이름과 동일하게 바꾸고 저장

unsigned int factor = 0;
string counting = "";

int No1()
{

	cout << "수의 갯수를 입력해주세요. 1이상 100이하" << endl;
	cin >> factor;
	while(factor < 1 || factor > 100)
	{
		cout << "1이상 100이하의 숫자를 다시 입력해주세요." << endl;
		cin >> factor;
	}


	cout << "1이상 100이하의 숫자가 입력되었습니다." << endl;
	cout << "입력한 갯수에 맞게 수를 입력해주세요" << endl;
	cin >> counting;

	// 여기 부터 계산을 개시
	// 12345를 입력했으면, 1	2	3	4	5의 char형 배열로 바꾸고, int 형으로 변환하여 합을 구한다.
	
	for (unsigned int i = 0; i < factor; i++)
	{
		if (counting[i] < '0' || counting[i] > '9') // 숫자가 아닌 경우
		{
			cout << "숫자만 입력해주세요." << endl;
			return 1;
		}
		counting[i] -= '0'; // char형을 int형으로 변환
	}

	int sum = 0;
	for (unsigned int i = 0; i < factor; i++)
	{
		sum += counting[i]; // 합산
	}
	cout << "입력한 숫자의 합은 " << sum << "입니다." << endl;

	// 끝
	return 0;
}