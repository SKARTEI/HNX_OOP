
/*chapter 7 ��������, ���ǻ� 3���̶� 4������ ��Ǯ�����*/
#include <iostream>
using namespace std;
/* 1�� 2�� 3�� ����
inline int square(int x) { x = x * x; return x; };
inline double square(double x) { x = x * x; return x; };

int main()
{
	int input1, result1;
	double input2, result2 ;

	cout << "������ �Է��Ͻʽÿ�\n";
	cin >> input1;
	result1 = square(input1);
	cout << input1 << "�� ������ " << result1 << "�Դϴ�.\n";

	cout << "�Ҽ��� �Է��Ͻʽÿ�\n";
	cin >> input2;
	result2 = square(input2);
	cout << input2 << "�� ������ " << result2 << "�Դϴ�.\n";


	return 0;
}
*/

/* 4��
template <class T>
T square(T x)
{
	x = x * x;

	return x;
}

int main()
{
	int input1, result1;
	double input2, result2;

	cout << "������ �Է��Ͻʽÿ�\n";
	cin >> input1;
	result1 = square(input1);
	cout << input1 << "�� ������ " << result1 << "�Դϴ�.\n";

	cout << "�Ҽ��� �Է��Ͻʽÿ�\n";
	cin >> input2;
	result2 = square(input2);
	cout << input2 << "�� ������ " << result2 << "�Դϴ�.\n";

	return 0;
}
*/