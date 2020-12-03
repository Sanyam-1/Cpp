#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
node *create()
{
    node *head = NULL;
    node *temp = NULL;
    int data;
    cout << "Enter the data to insert ::";
    cin >> data;
    while (data != -1)
    {
        node *n = new node(data);
        if (head == NULL)
        {
            head = n;
            n->next = n;
            temp = n;
        }
        else
        {
            temp->next = n;
            n->next = head;
            temp = n;
        }
        cout << "Enter the data to insert ::";
        cin >> data;
    }
    return head;
}
node *insert(node *head)
{
    int data;
    cout << "Enter the data to insert ::";
    cin >> data;
    node *n = new node(data);
    n->next = head;
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    head = n;
    return head;
}
void del(node *head)
{
    node *temp = head;
    node *last = head;
    while (last->next != head)
    {
        last = last->next;
    }
    head = head->next;
    last->next = head;
    delete temp;
}
void display(node *head)
{
    node *temp = head;
    cout << "Display :: ";
    while (temp->next != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
}
int main()
{
    node *head = create();
    display(head);
    del(head);
    display(head);
    head = insert(head);
    display(head);
    return 0;
}