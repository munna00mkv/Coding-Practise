#include <bits/stdc++.h>
using namespace std;
// Creating Node Class
class Node
{
public:
    int data;
    Node *next;
    // Constructor
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void display(Node *head)
{
    // Temporary pointer to avoid lost head pointer
    Node *temp = head;
    // it will not print last elem
    // while(temp->next != NULL)
    // {
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    // Creating object of node
    // Way 1: staticlly
    // Node n1(1);
    // Node n2(2);
    // Node n3(3);
    // Node n4(4);
    // Node n5(5);
    // // pointer to store address of first  node
    // Node *head = &n1;
    // // Linking each node
    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;


    // Way2:- Dynamically
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    // Address of first node
    Node *head = n1;
    // Linking each node
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    // passing list to function
    display(head); // pass Address of first node
    return 0;
}