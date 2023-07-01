
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


BianryNood *invert_tree(BianryNood * root)
   {
       if (root == NULL)
       {
           return NULL;
       }
       BianryNood *temp = root->RootLeft;
       root->RootLeft= root->RootRight;
       root->RootRight= temp;
       invert_tree(root->RootLeft);
       invert_tree(root->RootRight);
       return root;
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
    invert_tree(root);
    printTree(root);


/*
INPUT
1
2 3
4 5 6 7
-1 -1 -1 -1 8 9 -1 -1
-1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1

OUTPUT
8 9 4 5 6 7 2 3 1

*/

    return 0;
}


