#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *nextNode;
    Node *prevNode;

    Node()
    {
        nextNode = NULL;
        prevNode = NULL;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    Node *createNode(int data = -1)
    {
        Node *newNode = new Node();

        if (data == -1)
        {
            cout << "Enter a number : ";
            cin >> newNode->data;
        }
        else
        {
            newNode->data = data;
        }

        return newNode;
    }

    void createList()
    {
        int data;

        cout << "Enter -1 to terminate the linked list." << endl;
        cout << "Enter data to be inserted to the linked list : " << endl;

        Node *currentNode;
        do
        {
            cin >> data;

            if (data == -1)
                return;

            if (head == NULL)
            {
                head = createNode(data);
                currentNode = head;
            }
            else
            {
                currentNode->nextNode = createNode(data);
                currentNode->nextNode->prevNode = currentNode;
                currentNode = currentNode->nextNode;
            }
        } while (data != -1);
    }

    void displayList()
    {
        Node *currentNode = head;

        if (head == NULL)
        {
            cout << "Linked list is empty." << endl;
        }
        else
        {
            do
            {
                cout << currentNode->data << "  ";
                currentNode = currentNode->nextNode;
            } while (currentNode != NULL);
        }

        cout << endl;
    }
};

int main()
{
    LinkedList list;
    list.createList();
    list.displayList();

    return 0;
}