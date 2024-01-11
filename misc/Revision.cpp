#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node *next;
};


node *start=NULL;
node *rear=NULL;

node *create_11(node *start)
{
	node *new_node;
	int num;

	cout<<"Enter -1 to end ";
	cout<<"Enter data : ";
	cin >> num;

	while(num!= (-1))
	{
		new_node =new node();
		new_node->data=num;
		if(start == NULL)
		{
			new_node->next=NULL;
			start=new_node;
			rear=new_node;
		}
		else
		{
			rear->next=new_node;
			new_node->next=NULL;
			rear=new_node;
		}

		cout<<"Enter data : ";
		cin >> num; 
	}
return start;
}


void display(node *start)
{
	node *ptr;
	ptr=start;

	if(start==NULL)
	{
		cout << "underflow \n";
	}
	else
	{
		while(ptr->next != NULL)
		{
			cout << ptr->data << "\t";
			ptr=ptr->next;
		}
		cout << ptr->data;
	}
}


node *insert_beg(node *start)
{
	node *new_node;
	int num;
	cout<< "Enter data: ";
	cin >> num;

	new_node= new node();

	new_node->data=num;
	new_node->next=start;
	start = new_node;

	display(start);
	return start;
}


node *insert_end(node *start)
{
    node *ptr, *new_node;
    int num;
    cout << "Enter data: ";
    cin >> num;

    new_node = new node();
    new_node->data = num;
    new_node->next = NULL;

    if (start == NULL)
    {
        start = new_node;
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }

    display(start);
    return start;
}

node *insert_middle(node *start)
{
    node *ptr, *preptr, *new_node;
    int num;
    cout << "Enter data: ";
    cin >> num;
    int val;
    cout << "Enter value: ";
    cin >> val;

    new_node = new node();
    new_node->data = num;

    if (start == NULL)
    {
        start = new_node;
    }
    else
    {
        ptr = start;
        preptr = NULL;
        while (ptr->data != val)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        cout <<"Helllooooo"<< preptr->data << " " << ptr->data << endl;
        preptr->next = new_node;
        new_node->next = ptr;
    }

    display(start);
    return start;
}

node *delete_beg(node *start)
{
	node *ptr;
	ptr=start;

	if(start==NULL)
	{
		cout << "underflow";
	}
	else
	{
		ptr=start;
		start=start->next;
		delete(ptr);
	}
	display(start);
	return start;
}

node *delete_end(node *start)
{
	node *ptr,*preptr;
	ptr=start;

	if(start==NULL)
	{
		cout << "underflow";
	}
	else
	{
		while(ptr->next!=NULL)
		{
			preptr=ptr;
			ptr=ptr->next;

		}
		preptr->next=NULL;
		delete(ptr);

	}
	display(start);
	return start;
}

node *delete_middle(node *start)
{
	node *ptr,*preptr;
	ptr=start;
	preptr=ptr;

	int val;
	cout << "enter value : ";
	cin >> val;

	if(start==NULL)
	{
		cout << "underflow";
	}
	else
	{
		while(ptr->data!=val)
		{
			ptr=ptr->next;
			preptr=ptr;
		}
		preptr->next=ptr->next;
		delete(ptr);
	}

	display(start);
	return start;
}


int main()
{
int choice;

do
{
	cout << "\n*********MAIN MENu************\n";
	cout << "1-create list \n 2-display list \n 3-insert at beggining \n 4-insert at ending \n 5-insert in middle \n 6-deletion from beggining \n 7-deletion from end \n 8-deletion from middle \n 9-exit \n ********************************* ";
	cout  << "\n\n Enter your choice : ";
	cin >> choice;

	switch(choice)
	{
		case 1:
			start=create_11(start);
			cout << "\n LInked list created \n";
		break;

		case 2:
			display(start);
		break;

		case 3:
			start=insert_beg(start);
			break;

		case 4:
			start=insert_end(start);
			break;

		case 5: 
			start=insert_middle(start);
			break;

		case 6:
			start=delete_beg(start);
			break;

		case 7:
			start=delete_end(start);
			break;

		case 8:
			start=delete_middle(start);
			break;

		case 9:
			cout<<"exit";
			return 0;

	}
}
	while (choice != 9);
		return 0;
}