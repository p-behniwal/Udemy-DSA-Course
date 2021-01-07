#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
};

class LinkedList{
public:
    LinkedList() { // constructor
        head = NULL;
        length = 0;
    }
    ~LinkedList() {}; // destructor
    void append(int val);
    void reverseList();
    void insertAt(int index, int val);
    void deleteAt(int index);
    void display();
private:
    Node* head;
    int length;
};

// function to add node to a list
void LinkedList::append(int val) {
    Node* newnode = new Node();
    newnode->data = val;
    newnode->next = NULL;
    if (head == NULL) {
        head = newnode;
    }
    else {
        Node* temp = head; 
        while (temp->next != NULL) { 
            temp = temp->next; 
        }
        temp->next = newnode; 
    }
    length++;
}

void LinkedList::reverseList() {
    Node* current = head;
    Node *prev = NULL, *next = NULL;
 
    while (current != NULL) {
        next = current->next;

        current->next = prev;

        prev = current;
        current = next;
    }
    head = prev;
}

void LinkedList::insertAt(int index, int val) {
    if (index >= length - 1) append(val);
    else {
        int counter = 0;
        Node *current = head;
        Node *newnode = new Node();
        Node *temp;
        newnode->data = val;
        while (counter != index - 1) current = current->next, counter++;
        temp = current->next;
        current->next = newnode;
        newnode->next = temp;
    }
}

void LinkedList::deleteAt(int index) {
    if (index >= length - 1) {
        int counter = 0;
        Node *current = head;
        while (counter != length - 1) current = current->next, counter++;
        current = NULL;
    }
    else {
        int counter = 0;
        Node *current = head;
        Node *temp;
        while (counter != index - 1) current = current->next, counter++;
        temp = current;
        current->next = current->next->next;
    }
}

void LinkedList::display() {
    if (head == NULL) {
        cout << "List is empty!" << endl;
    }
    else {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main() {
    LinkedList* list = new LinkedList();
    list->append(100);
    list->append(200);
    list->append(300);
    list->append(400); 
    list->append(500);
    list->insertAt(3, 350);
    cout << "Linked List data" << endl;
    list->display();
    list->deleteAt(3);
    list->display();
    list->reverseList();
    cout << "Reversed Linked List data" << endl;
    list->display();
    delete list;
    return 0;
}