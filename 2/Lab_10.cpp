#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

class linkedList
{
	private:
		node *head;
		node *tail;

	public:
		linkedList()
		{
			head = NULL;
			tail = NULL;
		}

		void createNode(int value)
		{
			node *temp = new node;

			temp->data = value;
			temp->next = NULL;

			if(head==NULL)
			{
				head = temp;
				tail = temp;
				temp = NULL;
			}
			else
			{
				tail->next = temp;
				tail = temp;
			}

			cout<<endl;
			cout<<"node created : "<<value;
		}

		void displayList()
		{
			if(head == NULL)
				{
					cout<<endl<<"Currently no Node has been inserted in the List !"<<endl<<endl;
					return;
				}

			cout<<endl<<endl;
			cout<<"So the New List is : "<<endl;
				
			node *temp = new node;

			temp = head;

			while(temp!=NULL)
				{
					cout<<temp->data<<"  ";
					temp = temp->next;
				}

			cout<<endl;
		}

		void insertStart(int value)
		{
			node *temp = new node;

			temp->data = value;
			temp->next = head;

			head = temp;

			cout<<endl<<endl;
			cout<<"node inserted at start : "<<value;
		}

		void insertPosition(int pos,int value)
		{
			node *prev = new node;
			node *current = new node;
			node *temp = new node;

			current = head;

			for(int i=0; i<pos-1; i++)
			{
				prev = current;
				current = current->next;

			}

			temp->data = value;
			prev->next = temp;
			temp->next = current;

			cout<<endl<<"node "<<pos<<" inserted : "<<value;
		}

		void deleteStart()
		{
			node *temp = new node;

			temp = head;
			head = head->next;

			delete temp;

			cout<<endl<<endl;
			cout<<"node deleted from start";
		}

		void deleteEnd()
		{
			node *prev = new node;
			node *current = new node;

			current = head;

			while(current->next!=NULL)
			{
				prev = current;
				current = current->next;
			}

			tail = prev;
			prev->next = NULL;
			delete current;

			cout<<endl<<"node deleted from end";
		}

		void deletePosition(int pos)
		{
			int i;

			node *prev = new node;
			node *current = new node;

			current = head;

			for(i=0; i<pos-1; i++)
			{
				prev = current;
				current = current->next;
			}

			prev->next = current->next;

			cout<<endl<<"node "<<pos<<" deleted";
		}
};

int main()
{
	linkedList obj;

	obj.displayList();

	obj.createNode(10);
	obj.createNode(20);
	obj.createNode(30);
	obj.createNode(40);
	obj.createNode(50);
	obj.displayList(); // 10 20 30 40 50

	obj.insertStart(5);
	obj.insertPosition(4,25); 
	obj.displayList(); // 5 10 20 25 30 40 50

	obj.deleteStart();
	obj.deleteEnd();
	obj.deletePosition(3);
	obj.displayList(); // 10 20 30 40

	cout<<endl;
	system("pause");
	return 0;
}