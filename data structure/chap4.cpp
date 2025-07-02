#include <iostream>
#include <string>
using namespace std;
// �ڷᱸ�� ���Ḯ��Ʈ ����


class ListNode
{
private:
	string data;
	ListNode* link;
	friend class LinkedList;
public:
	ListNode(const string& d) : data(d), link(nullptr) {}
};

class LinkedList
{
private:
	ListNode* head;
public:
	LinkedList() : head(nullptr) {}
	~LinkedList() { freeList(); }
	void printList();
	void freeList();
	void insertFirstNode(const string& x);
	void insertMiddleNode(ListNode* pre, const string& x);
	void insertLastNode(const string& x);
	void deleteNode(ListNode* L, ListNode* pre);
	ListNode* searchNode(ListNode*& pre, const string& x);

	ListNode* gethead() { return head; }
};

void LinkedList::printList()
{
	cout << "L = (";
	ListNode* p = head;
	while (p != nullptr)
	{
		cout << p->data;
		p = p->link;
		if (p != nullptr)
			cout << ", ";
	}
	cout << ")\n";
}

void LinkedList::freeList()
{
	ListNode* p;
	while (head != nullptr)
	{
		p = head;
		head = head->link;
		delete p;
	}
}

void LinkedList::insertFirstNode(const string& x)
{
	ListNode* newNode = new ListNode(x);
	newNode->link = head;
	head = newNode;
}

void LinkedList::insertMiddleNode(ListNode* pre, const string& x)
{
	ListNode* newNode = new ListNode(x);
	if (pre == nullptr)
	{
		newNode->link = head;
		head = newNode;
	}
	else
	{
		newNode->link = pre->link;
		pre->link = newNode;
	}
}

void LinkedList::insertLastNode(const string& x)
{
	ListNode* newNode = new ListNode(x);
	if (head == nullptr)
	{
		head = newNode;
		return;
	}
	ListNode* temp = head;
	while (temp->link != nullptr)
		temp = temp->link;
	temp->link = newNode;
}

void LinkedList::deleteNode(ListNode *L, ListNode* pre)
{
	if (L == nullptr)
		return;
	if (pre == nullptr)
	{
		head = L->link;
	}
	else
	{
		pre->link = L->link;
	}
	delete	L;
}

ListNode* LinkedList::searchNode(ListNode*& pre, const string& x)
{
	pre = nullptr;
	ListNode* current = head;

	while (current != nullptr && current->data != x)
	{
		pre = current;
		current = current->link;
	}
	return current;
}

int main() {
	LinkedList L;
	cout << "(1) ���� ����Ʈ �����ϱ�" << endl;
	L.printList();

	cout << "(2) ����Ʈ�� [��] ��� �����ϱ�" << endl;
	L.insertFirstNode("��");
	L.printList();

	cout << "(3) ����Ʈ �������� [��] ��� �����ϱ�" << endl;
	L.insertLastNode("��");
	L.printList();

	cout << "(4) ����Ʈ ù ��°�� [��] ��� �����ϱ�" << endl;
	L.insertFirstNode("��");
	L.printList();

	cout << "(5) ����Ʈ���� [��] ��� Ž���ϱ�" << endl;
	ListNode* pre = nullptr;
	ListNode* target = L.searchNode(pre, "��");
	if (target != nullptr)
		cout << "[��] ��尡 ����Ʈ�� �ֽ��ϴ�." << endl;
	else
		cout << "[��] ��带 ã�� �� �����ϴ�." << endl;

	cout << "(6) ����Ʈ���� [��] ��� �����ϱ�" << endl;
	L.deleteNode(target, pre);
	L.printList();

	cout << "(7) ����Ʈ ������ �����Ͽ� ���� ����Ʈ�� �����" << endl;
	L.freeList();
	L.printList();

	return 0;
}