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


Node* reverseNonRecursive(Node *&head)
{
     int len = countLength(head);
    Node* prev=NULL;
    Node* current=head;

    Node* next=head->Next;
    int i = 0;
    while(true)
    {
        current->Next=prev;
        prev=current;
        current=next;
        if(current==NULL) break;
        next=next->Next;
        i++;
    }


    return prev;


}

Node* reverse1stNonRecursive(Node *&head, int k)
{
     int len = countLength(head);
    //cout<<len<<endl;
    Node* prev=NULL;
    Node* current=head;
    if(head==NULL)
    {
        cout<<"The Linked List is Empty"<<endl;
        return head;
    }
    Node* next=head->Next;
    int i = 0;
    while(i<k)
    {
        current->Next=prev;
        prev=current;
        current=next;
        if(current==NULL) break;
        next=next->Next;
        i++;
    }


    return prev;


}

Node* insertVal(Node* &head, int n){
    for(int i = 0; i< n; i++){
        int val;
        cin>>val;
        insertAtTail(head, val);

    }
    return head;
}

void display2nd(Node* &head, int k){
    for(int i = 0; i < k; i++){
        head = head->Next;

    }
    cout<<" -> ";

    head = reverseNonRecursive(head);
    display(head);
}


void display1st(Node* &head, int k){
    head = reverse1stNonRecursive(head, k);
    display(head);
}

int main(){
    Node* head = NULL;
    int len = countLength(head);
    int n,k;
    cin>>n;
    insertVal(head,n);
    cin>>k;
    //display1st(head,k);
    display2nd(head, k);







 return 0;
}

