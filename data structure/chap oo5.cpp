/*#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


class stackNode
{
	public:
	int data;
	stackNode* link;
};

stackNode* top;

int isEmpty()
{
	if (top == NULL)
		return 1;
	else
		return 0;
}

void printStack() 
{
	stackNode* p = top;

	cout << "\n STACK [ ";
	while (p != NULL) {
		cout << p->data << " ";
		p = p->link;
	}
	cout << "] ";
}

void push(int item) // 투입
{
	stackNode* temp = new stackNode;
	temp->data = item;
	temp->link = top;
	top = temp;
}

int pop() // 제거
{
	int item;
	stackNode* temp = top;

	if (top == NULL)
	{
		cout << "\n\n Stack is Empty!!\n";
		return 0;
	}
	else 
	{
		item = top->data;
		top = top->link;
		delete temp;
		return item;
	}

}

int search_top() // 검색
{
	if (top == NULL)
	{
		cout << "\n\n Stack is Empty!!\n";
		return 0;
	}
	else 
	{
		return top->data;
	}
}

void main() 
{
	int item;
	top = NULL; // 스택 초기화
	cout << "\n** 연결 스택 연산 **\n";

	printStack();
	push(12);
	printStack();
	push(34);
	printStack();
	push(56);
	printStack(); // 여기까지는 투입

	item = search_top();
	printStack();
	cout << "\n Top 위치: " << item << endl;

	item = pop();
	printStack();
	item = pop();
	printStack();
	item = pop();
	printStack();

}*/