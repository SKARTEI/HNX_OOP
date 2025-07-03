#include <iostream>
using namespace std;

#define STACK_SIZE 100

typedef int element; // 스택 원소의 자료형

class Stack {
private:
    element stack[STACK_SIZE];
    int top;
public:
    Stack() : top(-1) {}

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == STACK_SIZE - 1;
    }

    void push(element item) {
        if (isFull()) {
            cout << "\n\n Stack is FULL! \n";
            return;
        }
        stack[++top] = item;
    }

    element pop() {
        if (isEmpty()) {
            cout << "\n\n Stack is Empty!!\n";
            return 0;
        }
        return stack[top--];
    }

    element peek() {
        if (isEmpty()) {
            cout << "\n\n Stack is Empty !\n";
            exit(1);
        }
        return stack[top];
    }

    void printStack() {
        cout << "\n STACK [ ";
        for (int i = 0; i <= top; i++)
            cout << stack[i] << " ";
        cout << "] ";
    }
};

int main() {
    Stack s;
    element item;

    cout << "\n** 순차 스택 연산 **\n";
    s.printStack();

    s.push(1); s.printStack();
    s.push(2); s.printStack();
    s.push(3); s.printStack();

    item = s.peek(); s.printStack();
    cout << "peek => " << item;

    item = s.pop(); s.printStack();
    cout << "\t pop  => " << item;

    item = s.pop(); s.printStack();
    cout << "\t pop  => " << item;

    item = s.pop(); s.printStack();
    cout << "\t pop  => " << item;
    return 0;
}
