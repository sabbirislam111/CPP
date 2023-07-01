#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    char ch;
    Node* Next;
    Node* Prev;

    Node(char ch){
        this->ch = ch;
        Next = NULL;
        Prev = NULL;
    }

};

void insertAtTail(Node *&head,char val)
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
    newNode->Prev = temp;
    newNode->Next = head;
    head->Prev = newNode;
}

void display(Node *head)
{
    Node* temp = head;
    if(temp == NULL){
        cout<<"No Linked List";
    }

    do
    {
        cout<<temp->ch;
        if(temp->Next!=head) cout<<" -> ";
        temp=temp->Next;
    }while(temp != head);
    cout<<endl<<endl;
}
bool palindrome(Node* &head){
    Node* fast = head;
    Node* last = head->Prev;
    //cout<<last->ch<<endl;

    while(fast->Next != last->Prev){
        fast= fast->Next;
        last= last->Prev;
        if(fast->ch != last->ch){
            //cout<<"Not palindrome"<<endl;
            return false;
        }
        else{
            //cout<<"palindrome"<<endl;
            return true;
        }
    }



}

int main(){

    Node *head=NULL;
    char ch;
    cout<<"Choice 1: Insertion at Head"<<endl
        //<<"Choice 2: Insertion at Tail"<<endl
        //<<"Choice 3: Deletion at head"<<endl
        //<<"Choice 4: Deletion at tail"<<endl
        <<"Choice 0:Exit"<<endl<<endl;

    int choice;
    cout<<"Next choice: ";
    cin>>choice;

    while(choice !=0 )
    {
        switch(choice)
        {
        case 1:
            cout<<"Enter the char: ";
            cin>>ch;
            insertAtTail(head,ch);
            break;
        case 2:
            bool ans;
            ans = palindrome(head);
            if(ans == true){
                cout<<"palindrome"<<endl;
            }
            else{
               cout<<"Not palindrome"<<endl;
            }

            break;

        default:
            break;
        }

        cout<<"Next choice: ";
        cin>>choice;
    }

    cout<<endl<<"Linked List: ";
    display(head);
    //cout<<"Length of the List: "<<countLength(head)<<endl;




 return 0;
}
