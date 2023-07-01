#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;///var
    ///Node constructor creation
    Node(int val)
    {
        value=val; /// |1|NULL|
        Next=NULL;
    }
} ;

void insertAtTail(Node *&head,int val)
{
    Node *newNode=new Node(val); ///object ///var
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* temp=head; ///starting
    while(temp->Next!=NULL)
    {
        temp=temp->Next; ///moving right of temp->Next
    }
    temp->Next=newNode; ///linking last node to newNode=Null
}

void insertAtHead(Node *&head,int val)
{
    ///s1: newNode creation
    Node *newNode=new Node(val); ///object ///var
    ///s2: update of newNode->Next
    newNode->Next = head; ///keeping head value
    ///s3: Update of head
    head=newNode;
}

Node* Replace(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        if(temp->value %2 == 0){
            temp->value = -1;
        }
        temp = temp->Next;
    }
    return head;
}


void display(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->value<<" ";
        if(n->Next!=NULL)
            cout<<" -> ";
        n=n->Next;
    }

}

int main(){

    int n;
    cin>>n;

    for(int i = 0; i< n; i++){
        Node* head = NULL;
        int val;
        cin>>val;
        insertAtTail(head, val);
        Replace(head);
        display(head);
    }






 return 0;
}
