#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node *Next;

};
void display(Node* n){
    while(n != NULL){
        cout<<n->value<<" ";
        n = n->Next;
    }
    cout<<endl;


}



int main(){

    Node* hade = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();

    hade->value = 1;
    second->value = 2;
    third->value = 5;
    fourth->value = 9;

    hade->Next = second;
    second->Next = third;
    third->Next = fourth;
    fourth->Next = NULL;

    display(hade);

 return 0;
}

