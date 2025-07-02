#include <iostream>
#include <string>
using namespace std;
// 자료구조 연결리스트 개발


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
	cout << "(1) 공백 리스트 생성하기" << endl;
	L.printList();

	cout << "(2) 리스트에 [수] 노드 삽입하기" << endl;
	L.insertFirstNode("수");
	L.printList();

	cout << "(3) 리스트 마지막에 [금] 노드 삽입하기" << endl;
	L.insertLastNode("금");
	L.printList();

	cout << "(4) 리스트 첫 번째에 [월] 노드 삽입하기" << endl;
	L.insertFirstNode("월");
	L.printList();

	cout << "(5) 리스트에서 [수] 노드 탐색하기" << endl;
	ListNode* pre = nullptr;
	ListNode* target = L.searchNode(pre, "수");
	if (target != nullptr)
		cout << "[수] 노드가 리스트에 있습니다." << endl;
	else
		cout << "[수] 노드를 찾을 수 없습니다." << endl;

	cout << "(6) 리스트에서 [수] 노드 삭제하기" << endl;
	L.deleteNode(target, pre);
	L.printList();

	cout << "(7) 리스트 공간을 해제하여 공백 리스트로 만들기" << endl;
	L.freeList();
	L.printList();

	return 0;
}