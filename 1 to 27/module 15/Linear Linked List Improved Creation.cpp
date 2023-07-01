// Taile insertion
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *Next; //Node type pointer

    Node(int val)
    {
        value = val;
        Next = NULL;
    }

};
void insertAtTail(Node* &hade, int val)
{
    Node *newNode = new Node(val);
    if(hade == NULL)
    {
        hade = newNode;
        return;
    }

    Node *temp = hade;

    while(temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;

}

void insertAhead(Node* &head, int val){
    Node *newNode = new Node(val);

    newNode->Next = head;

    head = newNode;
}

void display(Node* n)
{
    while(n != NULL)
    {
        cout<<n->value<<" ";
        n = n->Next;
    }
    cout<<endl;

}


int main()
{

    Node* hade = NULL;
    //cout<<"Enter the value : ";

    int n;
    cout<<"Choice 1 : Insertion at head"<<endl<<"Choice 2 : Insertion at tail"<<endl<<"Choice 3 : for Exit"<<endl;
    int interest = 2;

    while(interest == 1 || interest == 2)
    {
        cout<<"Enter the value";
        cin>>n;
        if(interest == 1) insertAhead(hade, n);
        else if(interest == 2) insertAtTail(hade, n);
        cout<<"Next choice : ";
        cin>>interest;
    }

    reverses(&hade);
    display(hade);

    return 0;
}


