#include <iostream>
using namespace std;

// 2번 3번 동시에 풀이

class Point
{
	private:
		int x;
		int y;
	public:
		void setX(int a);
		void setY(int b);
		int getX() { return x;}
		int getY() { return y;}
};

int main()
{
	Point *exper = new Point;
	int Xpoint, Ypoint;

	cout << "X 좌표를 입력하십시오.\n";
	cin >> Xpoint;
	
	cout << "Y 좌표를 입력하십시오.\n";
	cin >> Ypoint;
	exper->setX(Xpoint);
	exper->setY(Ypoint);

	cout << "좌표는 (" << exper->getX() << ", " << exper->getY() << ") 입니다.\n";
	
	delete exper;
	return 0;
}

void Point::setX(int a)
{
	if (a > -1 && a < 11)
		x = a;
	else
		x = 0;
}

void Point::setY(int b)
{
	if (b > -1 && b < 11)
		y = b;
	else
		y = 0;
}