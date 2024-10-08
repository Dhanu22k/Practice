#include <iostream>
#define SIZE 5
using namespace std;

class Stack {
private:
    int stack[SIZE];
    int top;

public:
    Stack() {
        top = -1;  
    }

    void Push(int data) {
        if (top + 1 == SIZE) {
            cout << "Stack overflow" << endl;
            return;
        }
        stack[++top] = data;
        cout << data << " pushed onto stack" << endl;
    }

    void Pop() {
        if (top == -1) {
            cout << "Stack is empty (underflow)" << endl;
            return;
        }
        cout << stack[top] << " popped from stack" << endl;
        top--;
    }

    void Display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "---------Stack items are-----------" << endl;
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top + 1 == SIZE);
    }
};

void pushData(Stack& stack) {
    cout << "Enter the data: ";
    int data;
    cin >> data;
    stack.Push(data);
}

// int main() {
//     Stack stack;  

//     cout << "Stack operations" << endl;
//     while (true) {
//         cout << "1.PUSH  2.POP  3.DISPLAY  4.EXIT" << endl;
//         int choice;
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             pushData(stack);  
//             break;
//         case 2:
//             stack.Pop();  
//             break;
//         case 3:
//             stack.Display();  
//             break;
//         case 4:
//             return 0;  
//         default:
//             cout << "Invalid choice" << endl;
//         }
//     }

//     return 0;
// }
