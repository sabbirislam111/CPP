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


    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>value;
        insertAtTail(head, value);

    }
    reverceDublyNode(head);
    //printDublyNode(head);
    cout<<endl<<endl;
    cout<<countLength(head);





 return 0;
}

