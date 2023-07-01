#include<bits/stdc++.h>
using namespace std;
class DublyNode{
public:
    int val;
    DublyNode * prev;
    DublyNode * next;

    DublyNode(int val){
        this->val = val;
        prev = NULL;
        next = NULL;
    }


};
struct Test{
    int position[1000];

};
void insertAtHead(DublyNode* &head, int val){
    DublyNode* newNode = new DublyNode(val);
    head->prev = newNode;
    newNode->next = head;
    head = newNode;

}

void insertAtTail(DublyNode* &head, int val){
    DublyNode * newNode = new DublyNode(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    DublyNode* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void printDublyNode(DublyNode* n){
    while(n != NULL){
        cout<<n->val<<" ";
        n = n->next;
    }
    cout<<endl;
}

void reverceDublyNode(DublyNode* n){
   DublyNode* temp = n;

   while(temp->next != NULL){
        temp = temp->next;
   }

   while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;

}

void insertSpecificPosition(DublyNode* &head, int pos, int val){
    DublyNode * temp = head;
    int i = 0;

    while(i < pos-2){
        temp = temp->next;
        i++;
    }
    //cout<<temp->val;
    DublyNode * newNode = new DublyNode(val);
    if(temp->next == NULL){

       newNode->next = NULL;
    }
    else{
       newNode->next = temp->next;
       temp->next->prev = newNode;
    }


    temp->next = newNode;
    newNode->prev = temp;
    //printDublyNode(head);

}


int countLength(DublyNode *&head)
{
    int counte=0;
    DublyNode *temp=head; ///temporary temp
    while(temp!=NULL)
    {
        temp=temp->next; ///going ahead and increasing count
        counte++;
    }
    return counte; ///when temp becomes null after next
}


int searchByValueUnique(DublyNode* &head, int key){
    DublyNode* temp = head;
    int counte = 1;
    if(temp == NULL){
        return -1;
    }
    while(temp->val != key){
        if(temp->next == NULL){
            return -1;
        }
        temp = temp->next;
        counte++;
    }
    return counte;

}

Test searchByValueDuplicateReturn(DublyNode* &head, int key){
    DublyNode* temp = head;
    Test T;
    int k = 1;
    int counte = 1;

    while(temp != NULL){
        if(temp->val == key){
            T.position[k] = counte;
            k++;
        }
        temp = temp->next;
        counte++;
    }
    T.position[0]=k;
    return T;
}

void insertAfterSpecificValue(DublyNode* &head, int aftVal, int val){
    int posi;
    posi = searchByValueUnique(head, aftVal);
    insertSpecificPosition(head, posi+1, val);
}

void insertAfterDuplicetValue(DublyNode* &head, int aftVal, int val){
    Test T;
    T = searchByValueDuplicateReturn(head, aftVal);

    for(int i = 1; i < T.position[0]; i++){

         insertSpecificPosition(head, T.position[i]+i, val);

    }


}



int main(){

    DublyNode *head=NULL;
    int value,position;
    cout<<"Choice 1: Insertion at Head"<<endl
    <<"Choice 2: Insertion at Tail"<<endl
    <<"Choice 3: Reverse Linked list"<<endl
    <<"Choice 4: Insertion at specific position"<<endl
    <<"Choice 5: Search by value unique"<<endl
    <<"Choice 6: Search by value duplicate"<<endl
    <<"Choice 7: Insert after specific value"<<endl
    <<"Choice 8: Insert after duplicete value"<<endl
    <<"Choice 0: Exit"<<endl;

    int choice;
    cout<<"Enter your choice : ";
    cin>>choice;

    while(choice != 0){
        switch(choice){
        case 1:
            cout<<"Insert your value at head : ";
            cin>>value;
            insertAtHead(head, value);
            break;
        case 2:
            cout<<"Insert your value at tail : ";
            cin>>value;
            insertAtTail(head, value);
            break;
        case 3:
            reverceDublyNode(head);
            break;
        case 4:
            cout<<"Enter The specific position : ";
            cin>>position;
            cout<<"Enter the value : ";
            cin>>value;
            insertSpecificPosition(head, position, value);
            break;
        case 5:
            cout<<"Enter the search value : ";
            cin>>value;
            int posi;
            posi = searchByValueUnique(head, value);

            if(posi !=-1)
            {
                cout<<"The number is at  "<<posi<<endl;
            }
            else
            {
                cout<<"The number is not yet in the List "<<endl;
            }
            break;
        case 6:
            cout<<"Enter the search value : ";
            cin>>value;
            Test T;
            T = searchByValueDuplicateReturn(head, value);
            if(T.position[0]==1)
            {
                cout<<"The Searched Value is not yet in the List"<<endl;
            }
            else
            {
                int size=T.position[0];
                cout<<"The value is found at position: ";
                for(int i=1; i<size; i++)
                {
                    cout<<T.position[i];
                    if(i<size-1) cout<<", ";
                }
                cout<<endl;
            }
            break;
        case 7:
            cout<<"Enter The specific value : ";
            cin>>position;
            cout<<"Enter the value : ";
            cin>>value;
            insertAfterSpecificValue(head, position, value);
            break;
        case 8:
            cout<<"Enter The duplicate value : ";
            cin>>position;
            cout<<"Enter the value : ";
            cin>>value;
            insertAfterDuplicetValue(head, position, value);
            break;

        default:
            break;
        }
        cout<<"Next choice : ";
        cin>>choice;
    }

    printDublyNode(head);
    cout<<endl<<endl;
    cout<<countLength(head);





 return 0;
}
