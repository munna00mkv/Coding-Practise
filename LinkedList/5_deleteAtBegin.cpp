#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            next = NULL;
        }
};
Node* takeInput()
{
    Node *head = NULL; // list is empty
    Node *tail = NULL; // to connect node
    cout<<"Enter Data: "<<endl;
    int data;
    cin >> data;
    while(data != -1)
    {
        Node *newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode; // connect node
            tail = newNode; // update tail
        }
        cin >> data; // enter next data
    }
    return head;
}
void print(Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
Node* deleteData(Node *head)
{
    Node *a = head; // pointing to first node
    head = a->next;
    delete a;
    return head;
}
int main()
{
    Node *head = takeInput();
    cout<<"List Deletion Insertion: "<<endl;
    print(head);
    head = deleteData(head);
    cout<<"List after Deletion: "<<endl;
    print(head);
    return 0;
}