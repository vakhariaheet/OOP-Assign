#include <iostream>

using namespace std;

class Node {
	int data;
	Node* next;
	Node() {
		next = NULL;
	}
};



class LinkedList{
	Node* head;
	int takeNumber(){
		int data;
		cout << "Enter a number:";
		cin >> data;
		return data;
	}
	int checkHead(int isInsert=1,int data = -1){
		if(head != NULL) return 0;
		if(isInsert){
			head = createNode(data);
			head->next = head;
		}else{
			cout << "UnderFlow";
		}
		return 1;

	}
	public:
		LinkedList(){
			head = NULL;
		}
		Node* createNode(int data = -1){
			Node* newNode = new Node();
			if(data == -1)
				newNode->data = takeNumber();
			else
				newNode->data = data;
			return newNode;
		}
		void add(){
			if(checkHead()) return;
			Node* newNode = createNode();
			newNode->next = head;
			head = newNode;
		}
		void addLast(){
			if(checkHead()) return;
			Node* currentNode = NULL;
			while(currentNode->next != head)
				currentNode=currentNode->next;
			currentNode->next = createNode();
			currentNode->next->next = head;
		}
		void addAfterValue(int val){
			if(checkHead()) return;
			Node* currentNode = head;
			while(currentNode->data != val && currentNode->next != head ){
				currentNode = currentNode->next;
			}
			if(currentNode->data != val && currentNode->next == head) {
				cout << "Node Not Found";
				return;
			}
			Node* ptr = currentNode->next;
			Node* newNode = createNode();
			currentNode->next = newNode;
			newNode->next = ptr;
		}
		void remove(){
			if(checkHead(0)) return;
			Node* ptr = head;
			head= head->next;
			delete ptr;
		}
		void removeLast() {
			if(checkHead(0)) return;
			Node* currentNode= head;
			while(currentNode->next->next!=head){
				currentNode =currentNode->next;
			}
			Node* lastNode = currentNode->next;
			currentNode->next = head; 
			delete lastNode;
		}
		void removeAfterValue(int val){
			if(checkHead()) return;
			Node* currentNode = head;
			while(currentNode->data != val && currentNode->next != head ){
				currentNode = currentNode->next;
			}
			if(currentNode->data != val && currentNode->next == head) {
				cout << "Node Not Found";
				return;
			}
			Node*  node = currentNode->next;
			Node* nextNode = node->next;
			currentNode->next = nextNode;
			delete node;
		}
		void display(){
			if(checkHead(0)) return;
			Node* currentNode = head;
			while(currentNode->next != head){
				cout << currentNode->data << '\t';
				currentNode = currentNode->next;
			}
			cout << currentNode->data << endl;
		}
}