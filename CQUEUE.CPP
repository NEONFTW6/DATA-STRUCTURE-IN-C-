#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

#define n 5

class cqueue {
    int arr[n];
    int front, rear;
public:
    cqueue() {
	front = -1;
	rear = -1;
    }

    void insert(int data) {
	if ((rear + 1 == n && front == 0) || (rear + 1 == front)) {
	    cout << "Queue Overflow" << endl;
	    return;
	}
	if (front == -1) {
	    front = rear = 0;
	} else if (rear == n - 1) {
	    rear = 0;
	} else {
	    rear++;
	}
	arr[rear] = data;
	cout << "Inserted " << data << endl;
    }

    void deletion() {
	if (front == -1) {
	    cout << "Queue Underflow" << endl;
	    return;
	}
	cout << "Dequeued " << arr[front] << endl;
	if (front == rear) {
	    front = rear = -1;
	} else if (front == n - 1) {
	    front = 0;
	} else {
	    front++;
	}
    }

    void display() {
	if (front == -1) {
	    cout << "Queue is empty!" << endl;
	    return;
	}
	cout << "Queue Elements: ";
	int i;
	if (front <= rear) {
	    for (i = front; i <= rear; i++) {
		cout << arr[i] << " ";
	    }
	} else {
	    for (i = front; i < n; i++) {
		cout << arr[i] << " ";
	    }
	    for (i = 0; i <= rear; i++) {
		cout << arr[i] << " ";
	    }
	}
	cout << endl;
    }
};

int main() {
    clrscr();
    cqueue q;
    int choice, value;

    while (1) {
	cout << "\nCircular Queue Operations:" << endl;
	cout << "1. Enqueue" << endl;
	cout << "2. Dequeue" << endl;
	cout << "3. Display" << endl;
	cout << "4. Exit" << endl;
	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice) {
	    case 1:
		cout << "Enter value: ";
		cin >> value;
		q.insert(value);
		break;
	    case 2:
		q.deletion();
		break;
	    case 3:
		q.display();
		break;
	    case 4:
		break; // exit the switch
	    default:
		cout << "Invalid choice!" << endl;
	}
	if (choice == 4) break; // exit the loop
    }

    getch();
    return 0;
}
