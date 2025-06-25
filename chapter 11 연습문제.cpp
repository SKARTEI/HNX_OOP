#include <iostream>
using namespace std;

// 1번 문제, 2번 문제 통합
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

	cout << "첫번째 사람입니다.\n";
	cout << "나이를 입력하십시오\n";
	cin >> first_guy.age;
	cout << "체중을 입력하십시오\n";
	cin >> first_guy.weight;
	cout << "키를 입력하십시오\n";
	cin >> first_guy.height;


	cout << "두번째 사람입니다.\n";
	cout << "나이를 입력하십시오\n";
	cin >> second_guy->age;
	cout << "체중을 입력하십시오\n";
	cin >> second_guy->weight;
	cout << "키를 입력하십시오\n";
	cin >> second_guy->height;


	cout << "첫번째 사람의 나이" << first_guy.age << "몸무게" << first_guy.weight << "키" << first_guy.height << "입니다.\n";
	cout << "두번째 사람의 나이" << second_guy->age << "몸무게" << second_guy->weight << "키" << second_guy->height << "입니다.\n";

	cout << "1년 경과했습니다\n";
	
	aging(&first_guy);
	aging(second_guy);

	cout << "첫번째 사람의 나이" << first_guy.age << "입니다.\n";
	cout << "두번째 사람의 나이" << second_guy->age << "입니다.\n";

	delete second_guy;
}

void aging(Person* p)
{
	p->age++;
}