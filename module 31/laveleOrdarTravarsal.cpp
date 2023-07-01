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
void preOrder(BinaryTree* root, string &chk){

     if(root == NULL)
        return;

    chk += to_string(root->data);
    preOrder(root->LeftChild, chk);
    preOrder(root->RighChild, chk);

}

void postOrder(BinaryTree* root, string &chk){

     if(root == NULL)
        return;

    postOrder(root->LeftChild, chk);
    postOrder(root->RighChild, chk);
    chk += to_string(root->data);

}

int levelOrderTraversal(BinaryTree* root, string &chk, int k){

    if(root == NULL){
        return -1;
    }
    queue<BinaryTree*>q;
    q.push(root);
    q.push(NULL);
    int max = INT_MIN;
    int level = 0;
    while(!q.empty()){
        BinaryTree* checkNode = q.front();
        q.pop();

        if(checkNode != NULL){
            if(level == k){
                if(checkNode->data > max){
                    max = checkNode->data;
                }
            }
        }


        if(checkNode != NULL){
            chk+=to_string(checkNode->data);
            //cout<<checkNode->data<<" ";
            if(checkNode->LeftChild != NULL){
                q.push(checkNode->LeftChild);
            }
            if(checkNode->RighChild != NULL){
                q.push(checkNode->RighChild);
            }
        }
        else{
            if(!q.empty()){
                q.push(NULL);
                level++;
            }
        }
    }

    return max;

}
void levelordertraversalsabbir(BinaryTree* root){
    queue<BinaryTree *> q;
    q.push(root);

    while(!q.empty()){
       BinaryTree* current = q.front();
       q.pop();
       cout<<current->data<<" ";
       if(current->LeftChild != NULL){
            q.push(current->LeftChild);
       }

        if(current->RighChild != NULL){
            q.push(current->RighChild);
       }

    }

}



void printLeave(BinaryTree * root){
    if(root == NULL){
        return;
    }

    if(root->LeftChild == NULL && root->RighChild == NULL){
        cout<<root->data;
        return;
    }
    printLeave(root->LeftChild);
    printLeave(root->RighChild);


}

void printLbNonleaves(BinaryTree * root){
    if(root == NULL){
        return;
    }
    if(root->LeftChild != NULL){
        cout<<root->data;
        printLbNonleaves(root->LeftChild);
    }
   else if(root->RighChild != NULL){
        cout<<root->data;
        printLbNonleaves(root->RighChild);
    }

}

void printRbNonleaves(BinaryTree* root){
    if(root == NULL){
        return;
    }

    if(root->RighChild != NULL){
        cout<<root->data<<" ";
        printRbNonleaves(root->RighChild);
    }
    else if(root->LeftChild != NULL){
        cout<<root->data<<" ";
        printRbNonleaves(root->LeftChild);
    }
}

void boundaryOrderTraversal(BinaryTree* root){
    if(root == NULL){
        return;
    }
    cout<<root->data;

    printLbNonleaves(root->LeftChild);
    printLeave(root->LeftChild);
    printLeave(root->RighChild);
    printRbNonleaves(root->RighChild);




}

int main()
{

    int n;
    cin>>n;
    BinaryTree* allNodes[n];

    for(int i = 0; i < n; i++)
    {
        allNodes[i] = new BinaryTree(-1);
    }

    for(int i = 0; i < n; i++)
    {
        int val, left, right;
        cin>>val>>left>>right;
        allNodes[i]->data = val;

        if(left != -1)
        {
            allNodes[i]->LeftChild = allNodes[left];
        }
        if(right != -1)
        {
            allNodes[i]->RighChild = allNodes[right];
        }

    }


//     printTree(allNodes[0], 0);
//     string inordereTraversal = "";
//     inOrder(allNodes[0], inordereTraversal);
//     cout<<"Inorder Traversal :"<<inordereTraversal<<endl;
//
//     string preordereTraversal = "";
//     preOrder(allNodes[0], preordereTraversal);
//     cout<<"preorder Traversal :"<<preordereTraversal<<endl;
//
//     string postordereTraversal = "";
//     postOrder(allNodes[0], postordereTraversal);
//     cout<<"Postorder Traversal :"<<postordereTraversal<<endl;
//
//     string levelordereTraversal = "";
//     int max = levelOrderTraversal(allNodes[0], levelordereTraversal, 3);
//     cout<<"Level order Traversal :"<<levelordereTraversal<<endl;
//
//    cout<<endl<<endl<<"Max :"<<max<<endl;

    //boundaryOrderTraversal(allNodes[0]);
    levelordertraversalsabbir(allNodes[0]);


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


*/


// g++ -o BinaryTreeImplementation.exe BinaryTreeImplementation.cpp
