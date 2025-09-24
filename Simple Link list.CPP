#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
    Node* head;
public:
    LinkedList() { head = NULL; }

    void insert(int val) {
        Node* newnode = new Node(val);
        if(head == NULL) head = newnode;
        else {
            Node* temp = head;
            while(temp->next != NULL) temp = temp->next;
            temp->next = newnode;
        }
    }

    void display() {
        Node* temp = head;
        if(temp == NULL) {
            cout << "List is empty\n";
            return;
        }
        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

void main() {
    clrscr();
    LinkedList list;
    int choice, val;

    do {
        cout << "\n1.Insert 2.Display 3.Exit\nEnter choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                list.insert(val);
                break;
            case 2:
                list.display();
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid!\n";
        }
    } while(choice != 3);

    getch();
}
