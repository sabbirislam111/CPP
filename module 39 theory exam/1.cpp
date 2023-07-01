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
    chk += to_string(root->data)+" ";
    inOrder(root->RighChild, chk);

}
void preOrder(BinaryTree* root, string &chk){

     if(root == NULL)
        return;

    chk += to_string(root->data)+" ";
    preOrder(root->LeftChild, chk);
    preOrder(root->RighChild, chk);

}

void postOrder(BinaryTree* root, string &chk){

     if(root == NULL)
        return;

    postOrder(root->LeftChild, chk);
    postOrder(root->RighChild, chk);
    chk += to_string(root->data)+" ";

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




BinaryTree* insertionBST(BinaryTree * root, int val){
    BinaryTree* newNode = new BinaryTree(val);
    if(root == NULL){
        root = newNode;
        return root;
    }
    // value < root ->data
    if(val < root->data){
        root->LeftChild = insertionBST(root->LeftChild, val);
    }
    // value > root -> data
    else if(val > root->data){
        root->RighChild = insertionBST(root->RighChild, val);
    }
    return root;
}

void prntLevel(BinaryTree* root){

}





int main()
{

    int n;
    cin>>n;
    BinaryTree* root = NULL;
    for(int i = 0; i < n; i++){
        int val;
        cin>>val;
        root = insertionBST(root, val);
    }

    string traversal1 = "";
    inOrder(root, traversal1);
    cout<<"In Order Traversal :"<<traversal1;
    cout<<endl;
    string traversal2 = "";
    preOrder(root, traversal2);
    cout<<"Pre Order Traversal :"<<traversal2;
    cout<<endl;
    string traversal3 = "";
    postOrder(root, traversal3);
    cout<<"Post Order Traversal :"<<traversal3;
    cout<<endl;
    printLeave(root);




    return 0;
}
/*


11
15 11 26 8 12 20 30 6 9 14 35

*/

/*



*/


// g++ -o BinaryTreeImplementation.exe BinaryTreeImplementation.cpp


