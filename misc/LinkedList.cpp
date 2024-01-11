#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node* next;
};

class LinkedList {
public:
  Node* head = NULL;

  Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
  }

  void insertAtBegin(int data) {
    if (head == NULL) {
      head = createNode(data);
    } else {
      Node* newNode = createNode(data);
      newNode->next = head;
      head = newNode;
    }
  }
  void deleteAtBegin(){
    if(head == NULL){
      cout << "Linked is empty"<<endl;
      return ;
    }
    Node* ptr = head;
    head = head->next;
    delete ptr;
  }
  void deleteAtLast(){
    if(head == NULL){
      cout << "Linked is empty"<<endl;
      return ;
    }
    Node* lastNode = head;
    Node* secondLastNode = head;
    while (lastNode->next != NULL) {
      if(secondLastNode->next->next != NULL){
        secondLastNode = secondLastNode->next;
      }
      lastNode = lastNode->next;
    }
    secondLastNode->next = NULL;
    delete lastNode;
    return;
  }
  void insertAtLast(int data) {
    if (head == NULL) {
      head = createNode(data);
      return;
    } else {
      Node* newNode = createNode(data);
      Node* currentNode = head;
      while (currentNode->next != NULL) currentNode = currentNode->next;
      currentNode->next = newNode;
    }
  }
  void insertAtAfter(int data,int pos) {
    if( head == NULL ){
      cout << "Linked list is empty" << endl;
      return;
    }
    else {
      Node* currentNode = head; 
      for (int i = 1; i < pos ; i++) {
        if(currentNode->next == NULL && i != pos -1){
          cout << "Invalid Position"<<endl;
          return;
        }
        currentNode = currentNode->next;
      }
      Node* newNode = createNode(data);
      Node* ptr = currentNode->next;
      currentNode->next = newNode;
      newNode->next = ptr;
    }
  }
  void deleteAfter(int pos){
     if( head == NULL ){
      cout << "Linked list is empty" << endl;
      return;
    }
    else {
      Node* currentNode = head;
      for (int i = 1; i < pos ; i++) {
        if(currentNode->next == NULL && i != pos -1){
          cout << "Invalid Position"<<endl;
          return;
        }
        currentNode = currentNode->next;
      }
      Node* ptr = currentNode->next;
      if(ptr == NULL) {
        cout << "Underflow";
        return;
      }
      Node* nodeAfterPtr = ptr->next;
      currentNode->next = nodeAfterPtr;
      delete ptr;

    }
  }
  void display(){
    Node* currentNode = head;
    cout << currentNode->data << "\t";
    while (currentNode->next != NULL) {
      currentNode = currentNode->next;
      cout << currentNode->data << "\t";
    };
    cout << endl;
  }
};

int displayMenu(){
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
  int choice ;
  do {
    choice = displayMenu();
    int data,pos;
    switch(choice){
        case 1:
          while(1){
            cout << "Enter a number:";
            cin >> data;
            if(data == -1) break;
            list.insertAtLast(data);
          }
          break;
        case 2:
          cout << "Enter a number:";
          cin >> data;
          list.insertAtBegin(data);
          break;
        case 3:
          int data;
          cout << "Enter a number:";
          cin >> data;
          list.insertAtLast(data);
          break;
        case 4:
          list.deleteAtLast();
          break;
        case 5:
          list.deleteAtBegin();
          break;
        case 6:
          cout << "After which node you want to create a new node";
          cin >> pos;
          cout << "Enter a number";
          cin >> data;
          list.insertAtAfter(data, pos);
        case 7:
          cout << "After which node you want to delete a new node";
          cin >> pos;
          list.deleteAfter(pos);
          break;
        case 8:
          list.display();
          break;
    }
  } while (choice != 9);
  return 0;
}



