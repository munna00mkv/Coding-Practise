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
Node* insertData(Node *head,int data)
{
    // creating new node
    Node *newNode = new Node(data);
    Node *temp = head; // temp pointer
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;

}
int main()
{
    Node *head = takeInput();
    int data;

    cout<<"Enter Data you want to insert: "<<endl;
    cin >> data;
    cout<<"List before Insertion: "<<endl;
    print(head);
    head = insertData(head,data);
    cout<<"List after Insertion: "<<endl;
    print(head);
    return 0;
}