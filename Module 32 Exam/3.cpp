
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



int height(BianryNood* root)
{
    if (root == NULL)
        return 0;
    else
    {

        int lheight = height(root->RootLeft);
        int rheight = height(root->RootRight);


        if (lheight > rheight)
            return(lheight + 1);
        else return(rheight + 1);
    }
}

void printGivenLevel(BianryNood* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1)
    {
        printGivenLevel(root->RootLeft, level - 1);
        printGivenLevel(root->RootRight, level - 1);
    }
}

void reverseLevelOrder(BianryNood* root)
{
    int h = height(root);
    int i;
    for (i=h; i>=1; i--)
        printGivenLevel(root, i);
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
    reverseLevelOrder(root);


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

