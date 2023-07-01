
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

void zigZagTreeTraversal(BianryNood* root){
   if (!root) return;

   stack<BianryNood*> currentlevel;
   stack<BianryNood*> nextlevel;
   currentlevel.push(root);
   bool LtR = true;
   while (!currentlevel.empty()) {
      BianryNood* temp = currentlevel.top();
      currentlevel.pop();
      if (temp) {
         cout<<temp->data<<" ";
         if (LtR) {
            if (temp->RootLeft)
               nextlevel.push(temp->RootRight);
            if (temp->RootRight)
               nextlevel.push(temp->RootRight);
         }
         else {
            if (temp->RootRight)
               nextlevel.push(temp->RootRight);
            if (temp->RootLeft)
               nextlevel.push(temp->RootLeft);
         }
      }
      if (currentlevel.empty()) {
         LtR = !LtR;
         swap(currentlevel, nextlevel);
      }
   }
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


    zigZagTreeTraversal(root);


/*
INPUT
1
2 3
4 5 -1 -1
-1 -1 6 7
-1 -1 -1 -1


*/

    return 0;
}



