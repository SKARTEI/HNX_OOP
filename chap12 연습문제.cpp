#include <iostream>
using namespace std;

// 2�� 3�� ���ÿ� Ǯ��

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

	cout << "X ��ǥ�� �Է��Ͻʽÿ�.\n";
	cin >> Xpoint;
	
	cout << "Y ��ǥ�� �Է��Ͻʽÿ�.\n";
	cin >> Ypoint;
	exper->setX(Xpoint);
	exper->setY(Ypoint);

	cout << "��ǥ�� (" << exper->getX() << ", " << exper->getY() << ") �Դϴ�.\n";
	
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