#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insertAtBeginning(int value) {
        Node* newNode = new Node();

        newNode->data = value;
        newNode->next = head;

        head = newNode;
    }

    void deleteAtPosition(int position) {

        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        if (position == 1) {
            head = temp->next;
            delete temp;
            return;
        }

        Node* prev = NULL;
        
        for (int i = 1; temp != NULL && i < position; i++) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Invalid position\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
    }

    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

int main() {

    LinkedList list;

    list.insertAtBeginning(30);
    list.insertAtBeginning(20);
    list.insertAtBeginning(10);

    cout << "Linked List:\n";
    list.display();

    list.deleteAtPosition(2);

    cout << "After deletion:\n";
    list.display();

    return 0;
}
