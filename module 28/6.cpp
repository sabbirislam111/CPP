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
void display(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->value;
        if(n->Next!=NULL)
            cout<<" -> ";
        n=n->Next;
    }
    cout<<endl<<endl;
}

void insert40(Node* &head, int val, int key){
    Node* temp = head;
    while(temp->value != key){
        temp = temp->Next;
    }
    Node* newNode = new Node(val);
    newNode->Next = temp->Next;
    temp->Next = newNode;

}

void delet14(Node* &head, int key){
    Node* temp = head;
    Node* delNode;

    if(head->value == key){
        delNode = head;
        head = delNode->Next;
        temp = head;
        delete delNode;
        return;
    }

    while(temp->Next->value != key){
        temp = temp->Next;
    }

    delNode = temp->Next;
    temp->Next = delNode->Next;
    delete delNode;

}

void createCircular (Node*&head, int posi){
    Node * temp = head;
    Node * startNode;
    int coute = 1;

    while(temp->Next != NULL){
        if(coute == posi) startNode = temp;
        temp= temp->Next;
        coute++;
    }
    temp->Next = startNode;
}



int main(){

    Node* head = NULL;
    int value;

    for(int i = 0; i < 4; i++){
        cin>>value;
        insertAtTail(head, value);
    }
    display(head);

    cout<<"Insert 40 : ";
    cin>>value;
    insert40(head, value, 33);
    display(head);

    cout<<"delete 14 : ";
    cin>>value;
    delet14(head, value);
    display(head);


    char ch;
    cout<<"press Y to create Circular : ";
    cin>>ch;
    if(ch == 'Y'){
        createCircular(head, 1);
    }
     display(head);


}
