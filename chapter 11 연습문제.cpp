#include <iostream>
using namespace std;

// 1�� ����, 2�� ���� ����
struct Person
{
	int age;
	double weight;
	double height;
};

void aging(Person* p);

int main()
{
	Person first_guy = { };
	Person *second_guy = new Person;

	cout << "ù��° ����Դϴ�.\n";
	cout << "���̸� �Է��Ͻʽÿ�\n";
	cin >> first_guy.age;
	cout << "ü���� �Է��Ͻʽÿ�\n";
	cin >> first_guy.weight;
	cout << "Ű�� �Է��Ͻʽÿ�\n";
	cin >> first_guy.height;


	cout << "�ι�° ����Դϴ�.\n";
	cout << "���̸� �Է��Ͻʽÿ�\n";
	cin >> second_guy->age;
	cout << "ü���� �Է��Ͻʽÿ�\n";
	cin >> second_guy->weight;
	cout << "Ű�� �Է��Ͻʽÿ�\n";
	cin >> second_guy->height;


	cout << "ù��° ����� ����" << first_guy.age << "������" << first_guy.weight << "Ű" << first_guy.height << "�Դϴ�.\n";
	cout << "�ι�° ����� ����" << second_guy->age << "������" << second_guy->weight << "Ű" << second_guy->height << "�Դϴ�.\n";

	cout << "1�� ����߽��ϴ�\n";
	
	aging(&first_guy);
	aging(second_guy);

	cout << "ù��° ����� ����" << first_guy.age << "�Դϴ�.\n";
	cout << "�ι�° ����� ����" << second_guy->age << "�Դϴ�.\n";

	delete second_guy;
}

void aging(Person* p)
{
	p->age++;
}