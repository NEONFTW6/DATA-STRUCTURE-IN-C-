#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

#define n 10

int arr[n], top = -1;

void push(int value) {
    if (top >= n - 1) {
        cout << "Stack Overflow!" << endl;
    } else {
        top++;
        arr[top] = value;
        cout << "Pushed " << value << endl;
    }
}

void pop() {
    if (top < 0) {
        cout << "Stack Underflow!" << endl;
    } else {
        cout << "Popped " << arr[top] << endl;
        top--;
    }
}

void display() {
    if (top >= 0) {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Stack is empty." << endl;
    }
}

void peep() {
    if (top < 0) {
        cout << "Stack is empty, nothing to peep." << endl;
    } else {
        cout << "Top element is: " << arr[top] << endl;
    }
}

int main() {
    clrscr();
    int choice, value;
    while (1) {
        cout << "\nStack Operations:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Peep" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peep();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    getch();
    return 0;
}
