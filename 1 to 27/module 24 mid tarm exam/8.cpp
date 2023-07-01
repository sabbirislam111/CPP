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

int countLength(Node *&head)
{
    int count=0;
    Node *temp=head; ///temporary temp
    while(temp!=NULL)
    {
        temp=temp->Next; ///going ahead and increasing count
        count++;
    }
    return count; ///when temp becomes null after next
}



Node* insertVal(Node* &head, int n){
    for(int i = 0; i< n; i++){
        int val;
        cin>>val;
        insertAtTail(head, val);

    }
    return head;
}


void deletionAtHead(Node* &head)
{
    Node *temp=head;
    if(temp!=NULL)
    {
        head=temp->Next;
        delete temp;
    }
    else
    {
        cout<<"There is No Value in the Linked List"<<endl;
    }

}
void deletionAtTail(Node* &head)
{
    Node *temp=head;
    if(temp!=NULL && temp->Next!=NULL)
    {
        while(temp->Next->Next!=NULL)
        {
            temp=temp->Next;
        }
        Node *delNode=temp->Next;
        temp->Next=NULL;
        delete delNode;
    }
    else
    {
        ///Head is Null
        if(temp==NULL)
            cout<<"There is No Value in the Linked List"<<endl;

        ///Head is Tail
        else
        {
            deletionAtHead(head);
        }
    }
}


void deletionAtSpecificPosition(Node* &head,int position)
{
    Node* temp=head;
    if(position<=countLength(head))
    {

        if(position==1)
        {
            deletionAtHead(head);
            deletionAtHead(head);
        }
        else if(position==countLength(head)) ///tail
        {
            deletionAtTail(head);
            deletionAtTail(head);
        }
        else
        {
            int i=1;

            while(i<position-1)
            {
                temp=temp->Next;
                i++;
            }

            Node* delNode=temp->Next;
            temp->Next=delNode->Next->Next;
            delete delNode;
            //delete delNode->Next;
        }
    }
    else
    {

        cout<<"Position is Out of Bound";

    }

}

int main(){
    Node* head = NULL;
    int len = countLength(head);
    int n,M,N;
    cin>>n>>M>>N;
    insertVal(head,n);
    deletionAtSpecificPosition(head, M+1);
    for(int i= 0; i < N; i++){
        deletionAtTail(head);
    }

    display(head);






 return 0;
}


