#include <iostream>

using namespace std;

class Node {
 public:
  int data;
  Node* next;
};

class LinkedList {
  Node* head;
  Node* createNode(int data = -1) {
    Node* node = new Node();
    if (data == -1) {
      cout << "Enter a number:";
      cin >> node->data;
    } else {
      node->data = data;
    }
    node->next = NULL;
    return node;
  }

 public:
  LinkedList() { head = NULL; }
  void createList() {
    int data;
    Node* currentNode;
    cout << "Enter -1 to stop" << endl;
    do {
      cout << "Enter a number:";
      cin >> data;
      if (data == -1) break;
      if (head == NULL) {
        head = createNode(data);
        currentNode = head;
      } else {
        currentNode->next = createNode(data);
        currentNode = currentNode->next;
      }
    } while (1);
  }
  void insertAtBegin() {
    if (head == NULL) {
      head = createNode();
    } else {
      Node* newNode = createNode();
      newNode->next = head;
      head = newNode;
    }
  }
  void deleteAtBegin() {
    if (head == NULL) {
      cout << "LinkedList is empty";
    } else {
      Node* ptr = head;
      head = head->next;
      delete ptr;
    }
  }
  void deleteAtLast() {
    if (head == NULL) {
      cout << "LinkedList is empty";
    } else {
      Node* currentNode = head;
      Node* secondLastNode = currentNode;
      while (currentNode->next != NULL) {
        currentNode = currentNode->next;
        if (secondLastNode->next->next != NULL) {
          secondLastNode = secondLastNode->next;
        }
      }
      secondLastNode->next = NULL;
      delete currentNode;
    }
  }
  void insertAtLast() {
    Node* currentNode = head;
    while (currentNode->next != NULL) currentNode = currentNode->next;
    currentNode->next = createNode();
  }
  void deleteAfterVal() {
    int value;
    cout << "Enter Node's Value to delete after:";
    cin >> value;
    if (head == NULL) {
      cout << "Linked List is Empty";
    } else {
      Node* currentNode = head;
      while (currentNode->next != NULL && currentNode->data != value)
        currentNode = currentNode->next;
      if (currentNode->data != value) {
        cout << "Value Not in Linked List";
        return;
      }
      Node* nextNode = currentNode->next;
      if (nextNode == NULL) {
        cout << "Node Not Found";
        return;
      }
      Node* nextToNextNode = nextNode->next;
      currentNode->next = nextToNextNode;
      delete nextNode;
    }
  }
  void insertAfterVal() {
    int value;
    cout << "Enter Node's Value to delete after:";
    cin >> value;
    if (head == NULL) {
      cout << "Linked List is Empty";
    } else {
      Node* currentNode = head;
      while (currentNode->data != value && currentNode->next != NULL)
        currentNode = currentNode->next;
      if (currentNode->data != value) {
        cout << "Value Not in Linked List";
        return;
      }
      Node* nextNode = currentNode->next;
      Node* newNode = createNode();
      currentNode->next = newNode;
      newNode->next = nextNode;
    }
  }
  void display() {
    if (head == NULL) {
      cout << "Linked list is empty";
    }
    Node* currentNode = head;
    while (currentNode->next != NULL) {
      cout << currentNode->data << "\t";
      currentNode = currentNode->next;
    }
    cout << currentNode->data << endl;
  }
  int sum() { 
    int sum = 0;
    Node* currentNode = head;

    while (currentNode->next != NULL) {
      sum += currentNode->data
      currentNode = currentNode->next;
    }
    return sum;
  }

  // Sort a Linked List
  void sort() {
    Node* currentNode = head;
    Node* nextNode = currentNode->next;
    while (currentNode->next != NULL) {
      while (nextNode->next != NULL) {
        if (currentNode->data > nextNode->data) {
          int temp = currentNode->data;
          currentNode->data = nextNode->data;
          nextNode->data = temp;
        }
        nextNode = nextNode->next;
      }
      currentNode = currentNode->next;
    }
  }
};


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
  cout << "9. Exit" << endl;
  cout << "================================================" << endl;
  int choice;
  cout << "Enter your choice: ";
  cin >> choice;
  return choice;
}
int main() {
  LinkedList list;
  int choice;
  do {
    choice = displayMenu();
    switch (choice) {
      case 1:
        list.createList();
        break;
      case 2:
        list.insertAtBegin();
        break;
      case 3:
        list.insertAtLast();
        break;
      case 4:
        list.deleteAtLast();
        break;
      case 5:
        list.deleteAtBegin();
        break;
      case 6:
        list.insertAtLast();
        break;
      case 7:
        list.deleteAtLast();
        break;
      case 8:
        list.display();
      default:
        break;
    }
  } while (choice != 9);
}