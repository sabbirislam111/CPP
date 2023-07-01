#include<bits/stdc++.h>
using namespace std;

class BinaryTree
{
public:
    int data;
    BinaryTree* LeftChild;
    BinaryTree* RighChild;

    BinaryTree(int val)
    {
        data = val;
        LeftChild = NULL;
        RighChild = NULL;
    }

};

void specePrint(int lavel)
{
    for(int i = 0; i< lavel; i++)
    {
        cout<<"   ";
    }
}

void printTree(BinaryTree* root, int lavel)
{
    if(root == NULL)
    {
        return;
    }
    if(root->LeftChild == NULL && root->RighChild == NULL)
    {
        cout<<root->data<<endl;
        return;
    }
    else
    {
        cout<<endl;
        specePrint(lavel);
        cout<<"Root: "<<root->data<<endl;
    }

    if(root->LeftChild != NULL)
    {
        specePrint(lavel);
        cout<<"Left: ";
        printTree(root->LeftChild, lavel+1);
    }

    if(root->RighChild != NULL)
    {

        specePrint(lavel);
        cout<<"Right: ";
        printTree(root->RighChild, lavel+1);
    }


}


void inOrder(BinaryTree* root, string &chk){

     if(root == NULL)
        return;

    inOrder(root->LeftChild, chk);
    chk += to_string(root->data);
    inOrder(root->RighChild, chk);

}


void preOrderTraversal(BinaryTree* root, string &chk){

     if(root == NULL)
        return;

    chk += to_string(root->data);
    preOrderTraversal(root->LeftChild, chk);
    preOrderTraversal(root->RighChild, chk);

}

void postOrder(BinaryTree* root, string &chk){

     if(root == NULL)
        return;

    postOrder(root->LeftChild, chk);
    postOrder(root->RighChild, chk);
    chk += to_string(root->data);

}

int searchvalue(int inOrder[], int current, int srart, int end){
    for(int i = srart; i <= end; i++){
        if(inOrder[i] == current){
            return i;
        }
        return -1;
    }

}

BinaryTree* binaryTreePreIn(int preOrder[], int inOrder[], int start, int end){
    static int id = 0;
    id++;
    int current = preOrder[id];

    BinaryTree* newNode = new BinaryTree(current);

    if(start == end){
        return newNode;
    }

    int posi = searchvalue(inOrder, current, start, end);
    newNode->LeftChild = binaryTreePreIn(preOrder, inOrder, start, posi-1);
    newNode->RighChild = binaryTreePreIn(preOrder, inOrder, posi+1, end);

    return newNode;

}


int main()
{

    int n;
    cin>>n;

    int preOrder[n], inOrder[n];
    for(int i = 0; i < n; i++){
        cin>>preOrder[i];
    }

    for(int i = 0; i < n; i++){
        cin>>inOrder[i];
    }

    BinaryTree* root = binaryTreePreIn(preOrder, inOrder, 0, n-1);
    string chkPre = "";
    preOrderTraversal(root, chkPre);
    cout<<chkPre;

    return 0;
}
/*
9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1

*/

/*

5
1 2 3
2 4 5
3 -1 -1
4 -1 -1
5 -1 -1

9
0 1 3 4 2 5 7 8 6
3 1 4 0 7 5 8 2 6


*/


// g++ -o BinaryTreeImplementation.exe BinaryTreeImplementation.cpp

