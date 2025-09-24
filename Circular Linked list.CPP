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

class CircularList {
    Node* head;
public:
    CircularList() { head = NULL; }

    void insertEnd(int val) {
        Node* newnode = new Node(val);
        if(head == NULL) {
            head = newnode;
            newnode->next = head;
        } else {
            Node* temp = head;
            while(temp->next != head) temp = temp->next;
            temp->next = newnode;
            newnode->next = head;
        }
    }

    void deleteFirst() {
        if(head == NULL) {
            cout << "List is empty\n";
            return;
        }
        if(head->next == head) {
            delete head;
            head = NULL;
        } else {
            Node* temp = head;
            Node* last = head;
            while(last->next != head) last = last->next;
            head = head->next;
            last->next = head;
            delete temp;
        }
        cout << "First node deleted\n";
    }

    void display() {
        if(head == NULL) {
            cout << "List is empty\n";
            return;
        }
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while(temp != head);
        cout << "\n";
    }
};

void main() {
    clrscr();
    CircularList list;
    int choice, val;

    do {
        cout << "\n1.Insert 2.Delete First 3.Display 4.Exit\nEnter choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                list.insertEnd(val);
                break;
            case 2:
                list.deleteFirst();
                break;
            case 3:
                list.display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid!\n";
        }
    } while(choice != 4);

    getch();
}
