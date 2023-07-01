#include<bits/stdc++.h>
using namespace std;

class BianryNood
{
public:
    int data;
    BianryNood* RootLeft;
    BianryNood* RootRight;

    BianryNood(int val)
    {
        data = val;
        RootLeft = NULL;
        RootRight = NULL;
    }

};

void printTree(BianryNood * root)
{

    //in order
    if(root == NULL) return;

    printTree(root->RootLeft);
    cout<<root->data<<" ";
    printTree(root->RootRight);
}

void level_order(BianryNood* root)
{
    if(root == NULL){
        return;
    }
    queue<BianryNood*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        BianryNood* checkNode = q.front();
        q.pop();

        if(checkNode != NULL){

            cout<<checkNode->data<<" ";
            if(checkNode->RootLeft != NULL){
                q.push(checkNode->RootLeft);
            }
            if(checkNode->RootRight != NULL){
                q.push(checkNode->RootRight);
            }
        }
        else{
            if(!q.empty()){
                q.push(NULL);
            }
        }
    }


}

void printLeave(BianryNood * root){
    if(root == NULL){
        return;
    }

    if(root->RootLeft == NULL && root->RootRight == NULL){
        cout<<root->data;
        return;
    }
    printLeave(root->RootLeft);
    printLeave(root->RootRight);

}

int main()
{
    queue<BianryNood*>q;
    int a;
    cin>>a;

    BianryNood* root = new BianryNood(a);

    q.push(root);
    while(!q.empty())
    {
        BianryNood* presentRoot = q.front();
        q.pop();
        int x, y;
        cin>>x>>y;
        BianryNood* n1 = NULL;
        BianryNood* n2 = NULL;

        if(x != -1) n1 = new BianryNood(x);
        if(y != -1) n2 = new BianryNood(y);

        presentRoot->RootLeft = n1;
        presentRoot->RootRight = n2;

        if(n1 != NULL) q.push(n1);
        if(n2 != NULL) q.push(n2);

    }

    cout<<endl;
    level_order(root);



/*
INPUT
1
2 3
4 5 6 7
-1 -1 -1 -1 8 9 -1 -1
-1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1

OUTPUT
1 2 3 4 5 6 7 8 9

*/

    return 0;
}

