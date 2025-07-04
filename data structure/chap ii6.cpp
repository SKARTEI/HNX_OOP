#include <iostream>
using namespace std;

class Queue {
    int arr[100];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    int isEmpty() {
        return (front == -1 && rear == -1);
    }

    int isFull() {
        return (rear == 99);
    }

    void printQueue() {
        if (isEmpty()) {
            cout << "ť�� ��� �ֽ��ϴ�." << endl;
            return;
        }
        cout << "ť ����: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    bool enQueue(int item) {
        if (isFull()) {
            cout << "ť�� ���� á���ϴ�. ������ �� �����ϴ�." << endl;
            return false;
        }
        if (isEmpty()) {
            front = 0;
            rear = 0;
        }
        else {
            rear++;
        }
        arr[rear] = item;
        cout << "���Ե� ����: " << item << endl;
        return true;
    }

    int deQueue() {
        if (isEmpty()) {
            cout << "ť�� ��� �ֽ��ϴ�. ������ �� �����ϴ�." << endl;
            return -1;
        }
        int item = arr[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front++;
        }
        cout << "������ ����: " << item << endl;
        return item;
    }
};

int main() {
    Queue q;
    int choice, item;

    cout << "ť ���� ���α׷�" << endl;
    while (true) {
        cout << "\n1. ����(enQueue)\n2. ����(deQueue)\n3. ���(printQueue)\n4. ����\n";
        cout << "����: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "������ ���� �Է�: ";
            cin >> item;
            q.enQueue(item);
            break;
        case 2:
            q.deQueue();
            break;
        case 3:
            q.printQueue();
            break;
        case 4:
            cout << "���α׷� ����." << endl;
            return 0;
        default:
            cout << "�߸��� �����Դϴ�." << endl;
        }
    }
    return 0;
}