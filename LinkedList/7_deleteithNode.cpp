#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
Node *takeInput()
{
    cout << "Enter Data: " << endl;
    int data;
    cin >> data;
    Node *head = NULL;
    Node *temp = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = temp->next;
        }
        cin >> data;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *deleteNode(Node *head, int i)
{
    Node *temp = head;
    if (i == 0)
    {
        Node *first = head;
        head = first->next;
        delete first;
        return head;
    }
    int count = 0;
    while (temp != NULL && count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    // if i > last node then our temp = NULL, so no need to delete
    // delete only temp != NULL
    if (temp != NULL)
    {
        Node *a = temp->next; // Node to be deleted
        Node *b = a->next;
        temp->next = b;
        delete a; // free space for delted node
    }

    return head;
}
int main()
{
    Node *head = takeInput();
    int i;
    cout << "Which node you want to delete: " << endl;
    cin >> i;
    cout << "Linked List: " << endl;
    print(head);
    head = deleteNode(head, i);
    cout << "Node After Delete: " << endl;
    print(head);
    return 0;
}