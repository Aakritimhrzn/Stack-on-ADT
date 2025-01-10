#include <iostream>
#define MAX 100
using namespace std;

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void makeEmpty() {
        top = -1;
        cout << "Stack is now empty.\n";
    }

    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow! Cannot push " << value << ".\n";
        } else {
            arr[++top] = value;
            cout << value << " has been pushed onto the stack.\n";
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! The stack is empty.\n";
        } else {
            cout << arr[top--] << " has been popped from the stack.\n";
        }
    }

    void traverse() {
        if (top == -1) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Stack elements are: ";
            for (int i = top; i >= 0; --i) {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }

    void topElement() {
        if (top == -1) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Top element is: " << arr[top] << "\n";
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Make Empty Stack\n";
        cout << "2. Push\n";
        cout << "3. Pop\n";
        cout << "4. Traverse\n";
        cout << "5. Top\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            s.makeEmpty();
            break;
        case 2:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;
        case 3:
            s.pop();
            break;
        case 4:
            s.traverse();
            break;
        case 5:
            s.topElement();
            break;
        case 6:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
