
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



bool helper(struct BianryNood* root1, BianryNood* root2) {
   if (root1 == NULL && root2 == NULL)
      return true;
   if (root1 && root2 && root1 -> data == root2 -> data)
      return (helper(root1 ->RootLeft, root2 ->RootRight) && helper(root1 ->RootRight, root2 ->RootLeft));
   return false;
}


bool isSymmetry(BianryNood * root) {
   return helper(root, root);
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

    if(isSymmetry(root)){
        cout<<"This tree is a symmetric tree."<<endl;
    }
    else{
        cout<<"This tree is not a symmetric tree."<<endl;
    }



/*
INPUT
1
2 2
3 4 4 3
-1 -1 -1 -1 -1 -1 -1 -1



*/

    return 0;
}


