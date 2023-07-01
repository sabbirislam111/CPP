
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


bool is_unival(BianryNood * root)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->RootLeft != NULL && root->RootLeft->data != root->data)
    {
        return false;
    }
    if (root->RootRight != NULL && root->RootRight->data != root->data)
    {
        return false;
    }
    return is_unival(root->RootLeft) && is_unival(root->RootRight);
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
    bool ans = is_unival(root);
    if(ans){
        cout<<"This is an uni-valued tree."<<endl;
    }
    else{
        cout<<"This is not an uni-valued tree."<<endl;
    }


    /*
    INPUT
    1
    1 1
    1 1 -1 1
    -1 -1 -1 -1 -1 -1 -1 -1


    */

    return 0;
}





