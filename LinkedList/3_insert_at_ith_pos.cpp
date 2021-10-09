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
Node* insertData(Node *head, int i, int data)
{
    // creating new node
    Node *newNode = new Node(data);
    Node *temp = head; // temp pointer
    // insert at begining when i = 0
    if(i == 0)
    {
        newNode->next = temp;
        temp = newNode;
        return temp; // here head pointer is updated
    }
    // rather than 0
    // reah pointer at i-1 position
    int count = 0;
    while(temp != NULL && count < i-1) // check temp != Null - for segmentation fault
    {
        temp = temp->next; 
        count++;
    }
    // Now temp is pointing to i-1 th node
    if(temp != NULL)
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;

}
int main()
{
    Node *head = takeInput();
    int i, data;
    cout<<"Enter at which position you want to insert:"<<endl;
    cin >> i;
    cout<<"Enter Data you want to insert: "<<endl;
    cin >> data;
    cout<<"List before Insertion: "<<endl;
    print(head);
    head = insertData(head, i, data);
    cout<<"List after Insertion: "<<endl;
    print(head);
    return 0;
}