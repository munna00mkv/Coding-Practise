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
Node* reverseList(Node *head)
{
    Node *prev = NULL;
    Node *next = NULL;
    Node *current = head;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;

}
int main()
{
    Node *head = takeInput();
    cout << "Linked List: " << endl;
    print(head);
    head = reverseList(head);
    cout << "List After Reverse: " << endl;
    print(head);
    return 0;
}