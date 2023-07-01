
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


int traversal(BianryNood * root, int *sum)
{
    if (root == NULL)
    {
        return -1;
    }
    int left = traversal(root->RootLeft, sum);
    int right = traversal(root->RootRight, sum);
    *sum += abs(left - right);
    return left + right + root->data;
}

int findTilt(BianryNood * root)
{
    int tilt = 0;
    traversal(root, &tilt);
    return tilt;
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
    cout<<findTilt(root);



    /*
    INPUT
    4
    2 9
    3 5 -1 7
    -1 -1 -1 -1 -1 -1 -1 -1

    OUTPUT
    15

    */

    return 0;
}



