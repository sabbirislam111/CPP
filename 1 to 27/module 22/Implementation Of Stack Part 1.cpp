#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node * Next;
    Node * Prev;

    Node(int val){
        value = val;
        Next = NULL;
        Prev = NULL;
    }

};

class Stack{
    Node* head;
    Node* top;
    int counte = 0;

    Stack(){
        head = NULL;
        top = NULL:
    }

public:

    // PUAH
    void push(int val){

         Node* newNode = new Node(val);

         if(head = top = NULL){
            head = newNode;
            counte++;
         }
         top->Next = newNode;
         newNode->Prev = top;
         top = newNode;
         counte++;
    }
    // POP
    int pop(){
        Node* delNode;
        delNode = top;
        int chk = -1;
        if(head == NULL){
            cout<<"List Underflow"<<endl;
            return chk;
        }

        if(head == top){
            head = top = NULL;
        }
        else{
            top = delNode->Prev;
            top->Next = NULL;
        }
        chk = delNode->value;
        delete delNode;
        counte--;
        return chk;
    }
    // EMPTY
    bool empt(){
       if(head == NULL) return true;
       else return false;
    }
    // SIZ
    int siz(){
        return counte;
    }



    // TOP
    int top(){
        if(top == NULL) cout<<"List Underflow"<<endl;
        else return top->value;
    }

};

