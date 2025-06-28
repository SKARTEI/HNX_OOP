#include <iostream>
#include <cstring>
using namespace std;
//1번 문제
//int main()

int number_one_exercise()
{
	int* arr = new int[5];
	
	cout << "5개의 정수를 입력해주세요." << endl;
	
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	for (int x = 0; x < 5; x++)
	{
		cout << arr[x] << "\t";
	}

	delete[] arr;

	return 0;
}


class student11
{
	private:
		string name;
		int id;
	public:
		student11(string n, int i) { name = n; id = i; } // 생성자 inline
		~student11() { cout << "소멸됨" << endl; } // 소멸자 inline
		void print_ff() { cout << "성명: " << name << ", 학번: " << id << endl; } //출력 inline
};

//int main()
int number_two_exercise()
{
	student11 s("홍길동", 20250001);
	s.print_ff();
	return 0;
}


/*
3번문제
shape라는 부모class에서 자식class 원과 사각형이 존재
가상함수 오버라이딩해야 함
*/

class Shape 
{
public:
	virtual double area() = 0;
};

class Rectangle : public Shape 
{
	private:
		double width, height;
	public:
		Rectangle(double w, double h) : width(w), height(h) {}
		double area()
		{
			double size_rectangle;
			size_rectangle = width * height;
			return size_rectangle;
		}
};

class Circle : public Shape 
{
	private:
		double radius;
	public:
		Circle(double r) : radius(r) {}
		double area()
		{
			double size_circle;
			double pi = 3.14;
			size_circle = pi * radius * radius;
			return size_circle;
		}
};

//int main() 
int number_three_exercise()
{
	Shape* s1 = new Rectangle(3, 4);
	Shape* s2 = new Circle(2);

	cout << "Rectangle area: " << s1->area() << endl;
	cout << "Circle area: " << s2->area() << endl;

	delete s1;
	delete s2;
	
	return 0;
}

// LAST

class Student
{
private:
	string name;
	int id;
	double score;
public:
	Student(string n, int i, double s) : name(n), id(i), score(s) {}
	void printInfo() {
		cout << "성명: " << name << ",  학번: " << id << ",  성적: " << score << endl;
	}
	double getScore() { return score; }
	string getName() { return name; }
};

int main()
{
	int n;
	cout << "학생 수를 입력해주세요." << endl;
	cin >> n;

	Student** arr = new Student * [n];

	for (int i = 0; i < n; i++) {
		string name;
		int id;
		double score;
		cout << i + 1 << "번째 학생 이름, 학번, 성적을 입력하세요: ";
		cin >> name >> id >> score;
		arr[i] = new Student(name, id, score);
	}

	cout << "\n모든 학생 정보:" << endl;
	for (int i = 0; i < n; i++) {
		arr[i]->printInfo();
	}

	// 최고 성적 학생 찾기
	int maxIdx = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i]->getScore() > arr[maxIdx]->getScore())
			maxIdx = i;
	}
	cout << "\n최고 성적 학생: " << arr[maxIdx]->getName()
		<< ", 성적: " << arr[maxIdx]->getScore() << endl;

	// 메모리 해제
	for (int i = 0; i < n; i++) {
		delete arr[i];
	}
	delete[] arr;

	return 0;
}