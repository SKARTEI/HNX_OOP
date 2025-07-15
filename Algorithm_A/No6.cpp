#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "N의 값을 입력해주세요." << endl;
	cin >> N;
	int count = 1;
	int start_index = 1;
	int end_index = 1;
	int sum = 1;

	while (end_index != N)
	{
		if( sum < N )
		{
			end_index++;
			sum += end_index;
		}
		else if( sum > N )
		{
			sum -= start_index;
			start_index++;
		}
		else if (sum == N)
		{
			count++;
			end_index++;
			sum += end_index;
		}

		cout << start_index << " ~ " << end_index << " 까지의 합: " << sum << endl;
		cout << count << endl;
	}
	return 0;
}