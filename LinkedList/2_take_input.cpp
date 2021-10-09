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
// Function to take input till user enter -1
// it return head
// Complexity:- O(n^2)
Node* takeInput()
{
    cout<<"Enter Data: "<<endl;
    int data;
    cin >> data;
    Node *head = NULL; // intially head is null
    while(data != -1)
    {
        Node *newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
        }
        else{
            Node *temp = head;
            while(temp-> next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin >> data;
    }
    return head;
}
// modify function for user input
// O(n^2)
Node* takeInput2()
{
    cout<<"Enter Data: "<<endl;
    int data;
    cin >> data;
    Node *head = NULL; // intially head will be null
    Node *tail = NULL; // tail will also be null
    while(data != -1)
    {
        Node *newNode = new Node(data); // Creating node
        if(head == NULL)
        {
            head = newNode; // update head
            tail = newNode; // tail will also point to first node
        }
        else{
            tail->next = newNode; // connect previous and next node
            tail = tail->next; // update tail to get next node
            // tail = newNode; // we can also write like this
        }
        cin >> data; // enter next data
    }
    return head;

}

void print(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
// Find length of linked list
int length(Node *head)
{
    int count = 0;
    Node *temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    Node *head = takeInput2();
    print(head);
    int len = length(head);
    cout<<"Length: "<<len<<endl;
    return 0;
}