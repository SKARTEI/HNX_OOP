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
            cout << "큐가 비어 있습니다." << endl;
            return;
        }
        cout << "큐 원소: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    bool enQueue(int item) {
        if (isFull()) {
            cout << "큐가 가득 찼습니다. 삽입할 수 없습니다." << endl;
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
        cout << "삽입된 원소: " << item << endl;
        return true;
    }

    int deQueue() {
        if (isEmpty()) {
            cout << "큐가 비어 있습니다. 삭제할 수 없습니다." << endl;
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
        cout << "삭제된 원소: " << item << endl;
        return item;
    }
};

int main() {
    Queue q;
    int choice, item;

    cout << "큐 연산 프로그램" << endl;
    while (true) {
        cout << "\n1. 삽입(enQueue)\n2. 삭제(deQueue)\n3. 출력(printQueue)\n4. 종료\n";
        cout << "선택: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "삽입할 원소 입력: ";
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
            cout << "프로그램 종료." << endl;
            return 0;
        default:
            cout << "잘못된 선택입니다." << endl;
        }
    }
    return 0;
}