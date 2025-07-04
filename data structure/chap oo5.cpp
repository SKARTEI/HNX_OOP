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

void push(int item) // ����
{
	stackNode* temp = new stackNode;
	temp->data = item;
	temp->link = top;
	top = temp;
}

int pop() // ����
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

int search_top() // �˻�
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
	top = NULL; // ���� �ʱ�ȭ
	cout << "\n** ���� ���� ���� **\n";

	printStack();
	push(12);
	printStack();
	push(34);
	printStack();
	push(56);
	printStack(); // ��������� ����

	item = search_top();
	printStack();
	cout << "\n Top ��ġ: " << item << endl;

	item = pop();
	printStack();
	item = pop();
	printStack();
	item = pop();
	printStack();

}*/