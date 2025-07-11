#include <iostream>
using namespace std;
// main 함수는 파일 이름과 동일하게 바꾸고 저장
int No1_re()
{
	int factor = 0, sum = 0;
	string counting = "";
	

	cout << "수의 갯수를 입력해주세요. 1이상 10이하" << endl;
	cin >> factor;

	while (factor < 1 || factor > 10)
	{
		cout << "1이상 100이하의 숫자를 다시 입력해주세요." << endl;
		cin >> factor;
	}
	
	cout << "1이상 100이하의 숫자가 입력되었습니다." << endl;
	cout << "입력한 갯수에 맞게 수를 입력해주세요" << endl;
	
	cin >> counting;
	
	// 계산 개시 구간 재작성
	for (int i = 0; i < counting.length(); i++)
		sum += counting[i] - '0'; // char형을 int형으로 변환하여 합산

	// 출력부
	cout << "\n 합계 계산 결과: " << sum << endl;

	return 0;
}