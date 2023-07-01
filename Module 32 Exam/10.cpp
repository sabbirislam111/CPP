
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


int second_minimum(BianryNood* root)
{
    if (root == NULL)
    {
        return -1;
    }
    queue<BianryNood*> q;
    q.push(root);
    int min = root->data;
    int second_min = INT_MAX;
    while (!q.empty())
    {
        BianryNood *temp = q.front();
        q.pop();
        if (temp->data < min)
        {
            second_min = min;
            min = temp->data;
        }
        else if (temp->data > min && temp->data < second_min)
        {
            second_min = temp->data;
        }
        if (temp->RootLeft != NULL)
        {
            q.push(temp->RootLeft);
        }
        if (temp->RootRight != NULL)
        {
            q.push(temp->RootRight);
        }
    }
    if (second_min == INT_MAX)
    {
        return -1;
    }
    return second_min;
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
    cout<<second_minimum(root);



    /*
    INPUT
    2
    2 2
    -1 -1 -1 -1


    */

    return 0;
}






