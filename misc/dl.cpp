#include <iostream>

using namespace std;

class Node {
 public:
  int data;
  Node* next;
  Node* prev;
  Node() {
    next = NULL;
    prev = NULL;
  }
};

class LinkedList {
  Node* head;
  Node* createNode(data = -1) {
    Node* newNode = new Node();
    if (data == -1) {
      cout << "Enter a number";
      cin >> newNode->data;
    } else
      newNode->data = data;
  }
  /**
   * @param {int} isInsert - if 1 then it will create a new Node and store it in
   * head else throw a error message
   * @param {int} data - data which needs to be store in newly created Node
   * @return {int} - returns 1 if head was NULL otherwise will return 0;
   */
  int checkHead(isInsert = 1, data = -1) {
    if (head != NULL) return 0;
    if (isInsert) { // isInsert == 1
      head = createNode(data);
    } else {
      cout << "UnderFlow";
    }
    return 1;
  }

 public:
  void createList() {
    int data;
    Node* currentNode = head;
    while (1) {
      cout << "Enter a number:";
      cin >> data;
      if (data == -1) break;
      if (checkHead(1, data)) {
        currentNode = head;
        return;
      }
      currentNode->next = createNode(data);
      currentNode->next->prev = currentNode;
      currentNode = currentNode->next;
      
    }
  }
  void addFirst() {}
  void add() {}
  void addAfterValue(int val) {}
  void removeFirst() {}
  void removeLast() {}
  void removeAfterValue(int val) {}
  void display() {}
}