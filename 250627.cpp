#include <iostream>
#include <cstring>
#include <vector>

using namespace std;


class point
{
	private:
		int x;
		int y;
	public:
		point(int a = 0, int b = 0) { x = a; y = b; } // 생성자 인라인 
		void setX(int a) { x = a; }
		void setY(int b) { x = b; } // private 접근지정자 변수 컨트롤용 인라인 함수)
		void show() { cout << "x: " << x << "\t" << "y: " << y << "\n"; } // 출력 인라인
		
		// 연산자 오버로드 (멤버함수2개, 프렌드함수 3개)
		point operator++();
		point operator++(int d);
		friend point operator+(point p1, point p2);
		friend point operator+(point p1, int a);
		friend point operator+(int a, point p2);

		// 연습문제 3,4번 (멤버함수2개, 프렌드함수 3개)
		point operator--();
		point operator--(int d);
		friend point operator-(point p1, point p2);
		friend point operator-(point p1, int a);
		friend point operator-(int a, point p2);
};

point point::operator--()
{
	x--;
	y--;
	
	return *this;
}

point point::operator--(int d)
{
	point p = *this;
	x--;
	y--;

	return p;
}

point operator-(point p1, point p2)
{
	point tmp1;
	tmp1.x = p1.x - p2.x;
	tmp1.y = p1.y - p2.y;

	return tmp1;
}

point operator-(point p1, int a)
{
	point tmp2;
	tmp2.x = p1.x - a;
	tmp2.y = p1.y - a;

	return tmp2;
}

point operator-(int a, point p2)
{
	point tmp3;
	tmp3.x = a - p2.x;
	tmp3.y = a - p2.y;

	return tmp3;

}

point point::operator++()
{
	x++;
	y++;

	return *this;
}

point point::operator++(int d)
{
	point p = *this;
	x++;
	y++;

	return p;
}

point operator+(point p1, point p2)
{
	point tmp1;
	tmp1.x = p1.x + p2.x;
	tmp1.y = p1.y + p2.y;

	return tmp1;
}

point operator+(point p1, int a)
{
	point tmp2;
	tmp2.x = p1.x + a;
	tmp2.y = p1.y + a;

	return tmp2;
}

point operator+(int a, point p2)
{
	point tmp3;
	tmp3.x = a + p2.x;
	tmp3.y = a + p2.y;

	return tmp3;

}

int main()
{
	point pn1(1, 2);
	point pn2(4, 5);
	
	int plus_num1 = 6, plus_num2 = 2;
	int minus_num1 = 4, minus_num2 = 5;

	point pn3 = pn1 + pn2;
	point pn4 = pn1 + plus_num1;
	point pn5 = plus_num2 + pn2;

	pn3.show();
	pn4.show();
	pn5.show();

	point pn6 = pn1 - pn2;
	point pn7 = pn1 - plus_num1;
	point pn8 = plus_num2 - pn2;

	pn6.show();
	pn7.show();
	pn8.show();

	return 0;
}