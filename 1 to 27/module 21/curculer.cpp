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

struct Test
{
    int position[1000];
};

///Initialize
void insertAtTail(Node *&head,int val);

void insertAtHead(Node *&head,int val);

void display(Node *n);

int countLength(Node *&head);

void insertionAtSpecificPosition(Node* &head,int pos,int val);

void searchByValueDuplicate(Node* &head,int key);

void insertionByValueUnique(Node* &head,int searchValue,int value);

Test searchByValueDuplicateReturn(Node* &head,int key);

void deletionAtHead(Node* &head);

void deletionAtTail(Node* &head);

void deletionAtSpecificPosition(Node* &head,int position);

void deletionByValueUnique(Node* &head,int value);

Node* reverseNonRecursive(Node *&head);

Node* reverseRecursive(Node *&head);


void insertAtTail(Node *&head,int val)
{
    Node *newNode=new Node(val); ///object ///var
    if(head==NULL)
    {
        head=newNode;
        newNode->Next = head;
        return;
    }
    Node* temp=head; ///starting
    while(temp->Next!=head)
    {
        temp=temp->Next; ///moving right of temp->Next
    }

    temp->Next=newNode; ///linking last node to newNode=Null
    newNode->Next = head;
}

void insertAtHead(Node *&head,int val)
{
    ///s1: newNode creation
    Node *newNode=new Node(val); ///object ///var
    ///s2: update of newNode->Next
    newNode->Next = head; ///keeping head value
    // s3: update the tail with new head
    if(head==NULL)
    {
        head=newNode;
        newNode->Next = head;
        return;
    }

    Node* temp = head;

    while(temp->Next!=head)
    {
        temp=temp->Next; ///moving right of temp->Next
    }
    temp->Next = newNode;

    ///s4: Update of head
    head=newNode;

}
void display(Node *head)
{
    Node* temp = head;
    if(temp == NULL){
        cout<<"No Linked List";
    }

    do
    {
        cout<<temp->value;
        if(temp->Next!=head) cout<<" -> ";
        temp=temp->Next;
    }while(temp != head);
    cout<<endl<<endl;
}
int countLength(Node *&head)
{
    int count=0;
    Node *temp=head; ///temporary temp
    do
    {
      temp=temp->Next;
      count++;
    }while(temp != head);

    return count; ///when temp becomes null after next
}

void deletionAtHead(Node* &head)
{
    Node *temp = head;
    if(temp!=NULL)
    {
        Node* delNode = temp;
        while(temp->Next != head){
           temp=temp->Next;
        }
        temp->Next = delNode->Next;
        head = delNode->Next;
        delete delNode;
        //temp->Next = head;
    }
    else
    {
        cout<<"There is No Value in the Linked List"<<endl;
    }

}

void deletionAtTail(Node* &head)
{
    Node *temp=head;
    if(temp!=NULL && temp->Next!=head)
    {
        while(temp->Next->Next!=head)
        {
            temp=temp->Next;
        }
        Node *delNode=temp->Next;
        temp->Next=delNode->Next;
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


int main()
{
    Node *head=NULL;
    int value,position;
    cout<<"Choice 1: Insertion at Head"<<endl
        <<"Choice 2: Insertion at Tail"<<endl
        <<"Choice 3: Deletion at head"<<endl
        <<"Choice 4: Deletion at tail"<<endl
        <<"Choice 0:Exit"<<endl<<endl;

    int choice;
    cout<<"Next choice: ";
    cin>>choice;

    while(choice !=0 )
    {
        switch(choice)
        {
        case 1:
            cout<<"Enter the Value: ";
            cin>>value;
            insertAtHead(head,value);
            break;

        case 2:
            cout<<"Enter the Value: ";
            cin>>value;
            insertAtTail(head,value);
            break;
        case 3:
            deletionAtHead(head);
            break;
        case 4:
            deletionAtTail(head);
            break;

        default:
            break;
        }

        cout<<"Next choice: ";
        cin>>choice;
    }

    cout<<endl<<"Linked List: ";
    display(head);
    cout<<"Length of the List: "<<countLength(head)<<endl;

}


