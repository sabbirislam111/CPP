
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


void average_level(BianryNood * root)
   {
       if (root == NULL)
       {
           return;
       }
       queue<BianryNood *> q;
       q.push(root);
       while (!q.empty())
       {
           float len = q.size();
           float sum = 0;
           for (int i = 0; i < len; i++)
           {
               BianryNood *temp = q.front();
               q.pop();
               sum += temp->data;
               if (temp->RootLeft != NULL)
               {
                   q.push(temp->RootLeft);
               }
               if (temp->RootRight != NULL)
               {
                   q.push(temp->RootRight);
               }
           }
           cout << sum / len << " ";
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

    cout<<endl;
    average_level(root);



/*
INPUT
3
9 20
-1 -1 15 7
-1 -1 -1 -1 -1 -1 -1 -1

OUTPUT
15

*/

    return 0;
}




