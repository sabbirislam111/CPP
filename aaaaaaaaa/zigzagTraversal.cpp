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

void printTree(BianryNood * root, string &chk)
{

    //in order
    if(root == NULL) return;

    printTree(root->RootLeft, chk);
    chk+=to_string(root->data);
    printTree(root->RootRight, chk);
}

void zigzagorderTraversal(BianryNood* root)
{
    stack<BianryNood*> s1;
    stack<BianryNood*> s2;
    s1.push(root);

    while(!s1.empty() || !s2.empty())
    {

        while(!s1.empty())
        {
            if(s1.top()->RootLeft)
            {
                s2.push(s1.top()->RootLeft);
            }
            if(s1.top()->RootRight)
            {
                s2.push(s1.top()->RootRight);
            }
            cout<<s1.top()->data<<" ";
            s1.pop();
        }

        while(!s2.empty())
        {
            if(s2.top()->RootLeft)
            {
                s1.push(s2.top()->RootRight);
            }
            if(s2.top()->RootRight)
            {
                s1.push(s2.top()->RootLeft);
            }
            cout<<s2.top()->data<<" ";
            s2.pop();
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

    zigzagorderTraversal(root);



    /*
    Input for same
    1
    2 3
    4 5 -1 -1
    -1 -1 6 7
    -1 -1 -1 -1

    */
    return 0;
}


