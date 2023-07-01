#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node* Next;

    Node(int val){
        value = val;
        Next = NULL;
    }

};
void insertAtTail(Node* &head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->Next != NULL){
        temp = temp->Next;
    }
    temp->Next = newNode;


}
void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);

    newNode->Next = head;
    head = newNode;



}
void printNode(Node* n){
    while(n != NULL){
        cout<<n->value<<" ";
        n = n->Next;
    }
    cout<<endl;
}
int counter(Node * &n){
    int counte = 0;
    while(n != NULL){
        counte++;
        n = n->Next;
    }
    return counte;
}
main(){

    Node* head = NULL;
    //cout<<"Enter your value : ";

    int choice = 1;
    while(choice == 1 || choice == 2){
        int n;
        cout<<"Enter your value : ";
        cin>>n;
        if(choice == 1){
           insertAtTail(head, n);
        }
        if(choice == 2){
            insertAtHead(head, n);
        }

        cout<<"Enter your choice(1/2/0) : ";
        cin>>choice;
    }



    printNode(head);
    cout<<endl<<endl;
    cout<<counter(head);





    return 0;
}
