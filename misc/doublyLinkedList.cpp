#include <iostream>

using namespace std;

class Node {
 public:
  Node* prev;
  Node* next;
  int data;
  Node() {
    prev = NULL;
    next = NULL;
    data = 0;
  }
};

class LinkedList {
  Node* head;

 public:
  int checkHead(int isInsert = 1, int data = -1) {
    if (head != NULL) return 0;
    if (isInsert) {
      head = createNode(data);
    } else {
      cout << "Underflow";
    }
    return 1;
  }
  int takeNumber() {
    int data;
    cout << "Enter a number";
    cin >> data;
    return data;
  }

  LinkedList() { head = NULL; }

  Node* createNode(int data = -1) {
    Node* ptr = new Node();
    if (data == -1) {
      ptr->data = takeNumber();
    } else {
      ptr->data = data;
    }
    return ptr;
  }
  void createList() {
    int data;
    Node* currentNode = head;
    while (data != -1) {
      cout << "Enter a Number";
      cin >> data;
      if (data != -1) {
        if (checkHead()) {
          currentNode = head;
          return;
        }

        currentNode->next = createNode(data);
        Node* ptr = currentNode;
        currentNode = currentNode->next;
        currentNode->prev = ptr;
      }
    }
  }
  void insertAfter(int val) {
    if (checkHead(0)) return;

    Node* currentNode = head;
    while (currentNode->data != val && currentNode->next != NULL) {
      currentNode = currentNode->next;
    }
    if (currentNode->data != val && currentNode->next == NULL) {
      cout << "Element Not Found";
      return;
    }
    Node* nextNode = currentNode->next;
    Node* newNode = createNode();
    currentNode->next = newNode;
    newNode->next = nextNode;
    nextNode->prev = newNode;
    newNode->prev = currentNode;
  }
  void deleteAfter(int val) {
    if (checkHead(0)) return;

    Node* currentNode = head;
    while (currentNode->data != val && currentNode->next != NULL) {
      currentNode = currentNode->next;
    }
    if (currentNode->data != val && currentNode->next == NULL) {
      cout << "Element Not Found";
      return;
    }
    Node* nextNode = currentNode->next;
    Node* nextToNextNode = nextNode->next;
    currentNode->next = nextToNextNode;
    nextToNextNode->prev = currentNode;
    delete nextNode;
  }
  void insertAtLast() {
    if (checkHead()) return;

    Node* currentNode = head;
    while (currentNode->next != NULL) currentNode = currentNode->next;
    Node* newNode = createNode();
    newNode->prev = currentNode;
    currentNode->next = newNode;
  }
  void deleteAtLast() {
    if (checkHead(0)) return;
    Node* currentNode = head;
    while (currentNode->next != NULL) currentNode = currentNode->next;
    Node* ptr = currentNode;
    currentNode = currentNode->prev;
    currentNode->next = NULL;
    delete ptr;
  }
  void insertAtBegin() {
    if (checkHead()) return;
    Node* newNode = createNode();
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  }
  void deleteAtBegin() {
    if (checkHead(0)) return;
    Node* ptr = head;
    head = head->next;
    head->prev = NULL;
    delete ptr;
  }
  void display() {
    Node* currentNode = head;
    if (checkHead(0)) return;

    while (currentNode->next != NULL) {
      cout << currentNode->data << '\t';
      currentNode = currentNode->next;
    }
    cout << currentNode->data << endl;
  }
  void reverse() {
    Node* currentNode = head;
    if (checkHead(0)) return;
    while (currentNode->next != NULL) currentNode = currentNode->next;
    do {
      cout << currentNode->data << "\t";
      currentNode = currentNode->prev;
    } while (currentNode != NULL);
    cout << endl;
  }
  int displayMenu() {
    cout << "================================================" << endl;
    cout << "1. Create a List." << endl;
    cout << "2. Insert At Beginning." << endl;
    cout << "3. Insert At Last." << endl;
    cout << "4. Delete At Last" << endl;
    cout << "5. Delete At Beginning" << endl;
    cout << "6. Insert After" << endl;
    cout << "7. Delete After" << endl;
    cout << "8. Display." << endl;
    cout << "9. Reverse" << endl;
    cout << "10. Exit" << endl;
    cout << "================================================" << endl;
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
  }
  int main() {
    int choice = 0;
    LinkedList list;
    do {
      choice = displayMenu();
      switch (choice) {
        case 1:
          list.createList();
          break;
        case 2:
          break;
        case 3:
          list.insertAtLast();
          break;
        case 4:
          list.deleteAtLast();
          break;
        case 8:
          list.display();
          break;
        case 9:
          list.reverse();
        default:
          break;
      }
    } while (choice != 10);
  }