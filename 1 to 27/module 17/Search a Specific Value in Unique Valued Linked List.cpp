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

void insertSpecificePos(Node* &head, int pos, int val){
    int i = 0;
    Node* temp = head;
    while(i < pos-2){
        temp = temp->Next;
        i++;
    }
    Node* newNode = new Node(val);
    newNode->Next = temp->Next;
    temp->Next = newNode;
}

int searchSpecificeval(Node* &head, int key){
    Node* temp = head;
    int counte = 1;
    if(temp == NULL){
        return -1;
    }
    while(temp->value != key){
        if(temp->Next == NULL){
            return -1;
        }
        temp = temp->Next;
        counte++;
    }
    return counte;

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

void searchForMultipleValue(Node* &head, int key){
    Node* temp = head;
    int siz = counter(head);
    int position[siz+1] , k = 1;
    int counte = 1;
    int flag = 0;

    while(temp != NULL){
        if(temp->value == key){
           position[k] = counte;
           k++;
           flag = 1;
        }
        temp = temp->Next;
        counte++;


    }

    if(flag == 0)
        cout<<"This value not found in this list"<<endl;
    else{
        position[0] = k;
        cout<<"This value is position at : ";
        for(int i = 1; i< position[0]; i++){
            cout<<position[i];
            if(i < position[0]-1) cout<<", ";
        }
        cout<<endl;
    }
}

int main(){

    Node* head = NULL;
    //cout<<"Enter your value : ";

    int choice;
    int specificePos;
    cout<<"Enter your choice(1 tail / 2 head / 3 spec_pos / 4 search / 0 Exit) : ";
    cin>>choice;
    int n;
    while(choice != 0){
        switch(choice){
            case 1:
                cout<<"Enter your value : ";
                cin>>n;
                insertAtTail(head, n);
                break;
            case 2:
                cout<<"Enter your value : ";
                cin>>n;
                insertAtHead(head, n);
                break;
            case 3:
                cout<<"Enter your position : ";
                cin>>specificePos;
                cout<<"Enter your value : ";
                cin>>n;
                insertSpecificePos(head, specificePos, n);
                break;
            case 4:
                cout<<"Enter the value for search : ";
                cin>>specificePos;
                cout<<"Your searching value position is "<<searchSpecificeval(head, specificePos)<<endl;
                break;
            case 5:
                cout<<"Enter the value for search : ";
                cin>>specificePos;
                searchForMultipleValue(head, specificePos);
                break;

            default:
                break;
       }
       cout<<"Enter your choice(1 tail / 2 head / 3 spec_pos / 4 search / 0 Exit) : ";
    cin>>choice;


}




    printNode(head);
    cout<<endl<<endl;
    cout<<counter(head);





    return 0;
}


