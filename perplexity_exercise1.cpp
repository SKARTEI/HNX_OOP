#include <iostream>
#include <cstring>
using namespace std;
//1�� ����
//int main()

int number_one_exercise()
{
	int* arr = new int[5];
	
	cout << "5���� ������ �Է����ּ���." << endl;
	
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
		student11(string n, int i) { name = n; id = i; } // ������ inline
		~student11() { cout << "�Ҹ��" << endl; } // �Ҹ��� inline
		void print_ff() { cout << "����: " << name << ", �й�: " << id << endl; } //��� inline
};

//int main()
int number_two_exercise()
{
	student11 s("ȫ�浿", 20250001);
	s.print_ff();
	return 0;
}


/*
3������
shape��� �θ�class���� �ڽ�class ���� �簢���� ����
�����Լ� �������̵��ؾ� ��
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
		cout << "����: " << name << ",  �й�: " << id << ",  ����: " << score << endl;
	}
	double getScore() { return score; }
	string getName() { return name; }
};

int main()
{
	int n;
	cout << "�л� ���� �Է����ּ���." << endl;
	cin >> n;

	Student** arr = new Student * [n];

	for (int i = 0; i < n; i++) {
		string name;
		int id;
		double score;
		cout << i + 1 << "��° �л� �̸�, �й�, ������ �Է��ϼ���: ";
		cin >> name >> id >> score;
		arr[i] = new Student(name, id, score);
	}

	cout << "\n��� �л� ����:" << endl;
	for (int i = 0; i < n; i++) {
		arr[i]->printInfo();
	}

	// �ְ� ���� �л� ã��
	int maxIdx = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i]->getScore() > arr[maxIdx]->getScore())
			maxIdx = i;
	}
	cout << "\n�ְ� ���� �л�: " << arr[maxIdx]->getName()
		<< ", ����: " << arr[maxIdx]->getScore() << endl;

	// �޸� ����
	for (int i = 0; i < n; i++) {
		delete arr[i];
	}
	delete[] arr;

	return 0;
}